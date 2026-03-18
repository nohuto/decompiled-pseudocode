/*
 * XREFs of MiReturnFullProcessCharges @ 0x14001EBE4
 * Callers:
 *     MiDeleteVadBitmap @ 0x14001C358 (MiDeleteVadBitmap.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(16LL, -a2, a1, 0LL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
