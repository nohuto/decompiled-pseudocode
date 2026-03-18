/*
 * XREFs of ?GreHidePointer@@YAXPEAUHDEV__@@@Z @ 0x1C00EBE30
 * Callers:
 *     GreInternalHidePointer @ 0x1C00EBBF0 (GreInternalHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00884BC (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreHidePointer(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rsi
  int v5; // ebp
  _DWORD *v6; // rcx

  GreAcquireSemaphore(a1[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[9], 4LL);
  if ( (a1[7] & 0x20000) != 0 )
  {
    v3 = a1[228];
    v4 = *(_QWORD **)v3;
    v5 = *(_DWORD *)(v3 + 16);
    do
    {
      v6 = (_DWORD *)v4[6];
      if ( (v6[538] & 0x2000) == 0 )
        vMovePointer(v6, 0xFFFFFFFFLL, 0xFFFFFFFFLL, dword_1C032B9B8);
      v4 = (_QWORD *)*v4;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    vMovePointer(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL, dword_1C032B9B8);
  }
  v2 = a1[9];
  *((_DWORD *)a1 + 20) = -1;
  *((_DWORD *)a1 + 21) = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", v2);
  GreReleaseSemaphoreInternal(a1[9]);
}
