/*
 * XREFs of KiAddThreadToScbQueue @ 0x1400C38CC
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x140029684 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiAddThreadToReadyQueue @ 0x1401C95D8 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAddThreadToScbQueue(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 **v11; // rax
  __int64 v12; // rax

  v4 = a2;
  v5 = *(char *)(a3 + 195);
  if ( !*(_DWORD *)(a2 + 116) )
  {
    do
    {
      v12 = *(_QWORD *)(v4 + 392);
      if ( !v12 )
        break;
      v4 = *(_QWORD *)(v4 + 392);
    }
    while ( !*(_DWORD *)(v12 + 116) );
  }
  v7 = (__int64 *)(a3 + 216);
  v8 = (__int64 *)(v4 + 16LL * v5 + 120);
  if ( a4 )
  {
    v9 = *v8;
    *v7 = *v8;
    *(_QWORD *)(a3 + 224) = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v7;
    *v8 = (__int64)v7;
  }
  else
  {
    v11 = (__int64 **)v8[1];
    *v7 = (__int64)v8;
    *(_QWORD *)(a3 + 224) = v11;
    if ( *v11 != v8 )
      __fastfail(3u);
    *v11 = v7;
    v8[1] = (__int64)v7;
  }
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  *(_QWORD *)(a3 + 1488) = v4;
  LOBYTE(a3) = 1;
  *(_WORD *)(v4 + 114) |= 1 << v5;
  return KiInsertNonMaxOverQuotaScb(v4, a1, a3);
}
