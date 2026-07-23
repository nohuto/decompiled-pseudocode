/*
 * XREFs of MiReturnFullProcessCharges @ 0x140027160
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDeleteVadBitmap @ 0x140075150 (MiDeleteVadBitmap.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1404EA6E0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(16LL, -a2, a1, 0LL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
