/*
 * XREFs of MiReturnFullProcessCharges @ 0x1400095C8
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x1400087D0 (MiDeleteVadBitmap.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x14041AEA0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(16LL, -a2, a1, 0LL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1256), -a2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
