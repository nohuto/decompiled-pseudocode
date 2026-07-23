/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiPrefetchJumpVad @ 0x1401E85C4 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1401F6144 (MiGetClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x140446420 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  __int16 v6; // ax

  v4 = 1;
  if ( (a1 & 1) != 0 )
    return v4;
  v6 = MiReverseSwizzleInvalidPte(a1, 1LL, a3, a4);
  if ( (v6 & 0x400) != 0 || (v6 & 0x800) != 0 )
    return v4;
  else
    return v4 & ((unsigned __int8)v6 >> 2);
}
