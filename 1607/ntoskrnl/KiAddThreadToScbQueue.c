/*
 * XREFs of KiAddThreadToScbQueue @ 0x140098D0C
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CDCB8 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiAddThreadToReadyQueue @ 0x1401D7BA8 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAddThreadToScbQueue(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v12; // rax

  v4 = a2;
  v5 = *(char *)(a3 + 195);
  if ( !*(_DWORD *)(a2 + 116) )
  {
    do
    {
      v7 = *(_QWORD *)(v4 + 408);
      if ( !v7 )
        break;
      v4 = *(_QWORD *)(v4 + 408);
    }
    while ( !*(_DWORD *)(v7 + 116) );
  }
  v8 = (_QWORD *)(a3 + 216);
  v9 = (_QWORD *)(v4 + 16LL * v5 + 136);
  if ( a4 )
  {
    v12 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      __fastfail(3u);
    *v8 = v12;
    *(_QWORD *)(a3 + 224) = v9;
    *(_QWORD *)(v12 + 8) = v8;
    *v9 = v8;
  }
  else
  {
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    *v8 = v9;
    *(_QWORD *)(a3 + 224) = v10;
    *v10 = v8;
    v9[1] = v8;
  }
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  *(_QWORD *)(a3 + 1496) = v4;
  LOBYTE(a3) = 1;
  *(_WORD *)(v4 + 114) |= 1 << v5;
  return KiInsertNonMaxOverQuotaScb(v4, a1, a3);
}
