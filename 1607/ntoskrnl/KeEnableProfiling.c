/*
 * XREFs of KeEnableProfiling @ 0x14064FCA4
 * Callers:
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14009559C (KeUpdateTotalCyclesCurrentThread.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KeEnableProfiling(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v10; // rdi

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 3221226243LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x1A8uLL, 0x666F7250u);
  v10 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  memset(PoolWithQuotaTag, 0, 0x1A8uLL);
  v10[1] = a4;
  *((_DWORD *)v10 + 4) = a2;
  v10[4] = a3;
  *(_QWORD *)(a1 + 360) = v10;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x10u);
  v10[3] = KeUpdateTotalCyclesCurrentThread(a1, 0LL);
  if ( (a2 & 1) != 0 || a3 )
  {
    KiBeginCounterAccumulation(a1, 0);
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x11u);
  }
  return 0LL;
}
