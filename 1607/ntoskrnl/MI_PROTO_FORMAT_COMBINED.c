/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14012CFC0 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // dx

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
