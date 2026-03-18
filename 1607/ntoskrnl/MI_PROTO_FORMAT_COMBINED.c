/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x1400BDB30
 * Callers:
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x140096300 (MiComputePageCommitment.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14012CA50 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF4E0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x1401F2708 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
