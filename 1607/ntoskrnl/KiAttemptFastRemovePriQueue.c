/*
 * XREFs of KiAttemptFastRemovePriQueue @ 0x14007E880
 * Callers:
 *     KiActivateWaiterPriQueue @ 0x14007E814 (KiActivateWaiterPriQueue.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

_QWORD *__fastcall KiAttemptFastRemovePriQueue(ULONG_PTR BugCheckParameter2, int *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rdi
  int v5; // r11d
  _QWORD *v6; // rax
  ULONG_PTR v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // r9
  int v12; // ecx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = 0;
  v4 = a3;
  v5 = 32;
  v6 = (_QWORD *)(BugCheckParameter2 + 536);
  v8 = BugCheckParameter2 + 664;
  v9 = 0LL;
  v10 = 32LL;
  do
  {
    v12 = *(_DWORD *)(v8 - 4);
    v8 -= 4LL;
    v3 += v12;
    --v5;
    --v10;
    v6 -= 2;
    if ( v10 == v4 )
      --v3;
    if ( v3 >= *(_DWORD *)(BugCheckParameter2 + 664) )
      break;
    if ( (_QWORD *)*v6 != v6 )
    {
      v9 = *(_QWORD **)(BugCheckParameter2 + 16LL * v5 + 24);
      if ( !*v9 )
        KeBugCheckEx(0x96u, (ULONG_PTR)v9, BugCheckParameter2, ExWorkerQueue, v9[2]);
      --*(_DWORD *)(BugCheckParameter2 + 4);
      v13 = *v9;
      v14 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v14 != v9 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v9 = 0LL;
      *a2 = v5;
      return v9;
    }
  }
  while ( v10 > 0 );
  return v9;
}
