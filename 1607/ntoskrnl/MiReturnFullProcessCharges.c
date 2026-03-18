/*
 * XREFs of MiReturnFullProcessCharges @ 0x1400275E0
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDeleteVadBitmap @ 0x1400750D0 (MiDeleteVadBitmap.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1404BCCE8 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x140507750 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(16LL, -a2, a1, 0LL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
