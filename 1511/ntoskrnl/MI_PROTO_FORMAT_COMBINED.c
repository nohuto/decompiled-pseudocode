/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC
 * Callers:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiCountSystemImageCommitment @ 0x14011FFB4 (MiCountSystemImageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(unsigned __int64 a1)
{
  return HIDWORD(a1) != 0xFFFFFFFF && (a1 & 0x200) != 0;
}
