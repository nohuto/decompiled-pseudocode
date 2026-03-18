/*
 * XREFs of MiReturnProcessCommitment @ 0x14006C314
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x14041AE10 (MiDecommitRegion.c)
 *     MiCleanPhysicalProcessPages @ 0x140626B7C (MiCleanPhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
}
