/*
 * XREFs of KeEnableProfiling @ 0x14061A98C
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F14C8 (KeUpdateTotalCyclesCurrentThread.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
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
  v10[3] = KeUpdateTotalCyclesCurrentThread(a1);
  if ( (a2 & 1) != 0 || a3 )
  {
    KiBeginCounterAccumulation(a1, 0);
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x11u);
  }
  return 0LL;
}
