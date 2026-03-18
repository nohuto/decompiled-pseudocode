/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x1401D6AD0 (MiPrefetchJumpVad.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x14047A7F0 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 )
    return (a1 >> 13) & 1;
  return result;
}
