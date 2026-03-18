/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1400BDED4
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14003B240 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiDeletePagablePteRange @ 0x1400751A0 (MiDeletePagablePteRange.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiPrefetchJumpVad @ 0x1401E8798 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1401F6318 (MiGetClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x140447550 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
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
