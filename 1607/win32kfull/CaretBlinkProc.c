/*
 * XREFs of CaretBlinkProc @ 0x1C00AB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 */

void __fastcall CaretBlinkProc(__int64 a1)
{
  __int64 v1; // r8
  int v2; // ecx
  bool v3; // zf

  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( a1 == *(_QWORD *)(v1 + 256) )
  {
    if ( (*(_DWORD *)(gpsi + 5392LL) == -1 || (*(_DWORD *)(gpsi + 2220LL) & 4) == 0) && (*(_BYTE *)(v1 + 264) & 3) == 3 )
    {
      RemoveCaretTimer(*(struct tagWND **)(v1 + 256), *(struct tagQ **)(gptiCurrent + 384LL));
    }
    else
    {
      v2 = *(_DWORD *)(v1 + 264) ^ ((unsigned __int8)*(_DWORD *)(v1 + 264) ^ (unsigned __int8)~(unsigned __int8)*(_DWORD *)(v1 + 264)) & 2;
      v3 = *(_DWORD *)(v1 + 268) == 0;
      *(_DWORD *)(v1 + 264) = v2;
      if ( v3 )
      {
        *(_DWORD *)(v1 + 264) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)~(_BYTE)v2) & 1;
        UT_InvertCaret();
      }
    }
  }
}
