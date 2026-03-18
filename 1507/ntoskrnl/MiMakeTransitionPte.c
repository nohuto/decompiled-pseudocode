/*
 * XREFs of MiMakeTransitionPte @ 0x140225DF4
 * Callers:
 *     MiBuildForkPageTable @ 0x140003AA4 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiTrimSystemImagePages @ 0x1400D41D4 (MiTrimSystemImagePages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400DEFD0 (MiBuildMdlForMappedFileFault.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     MiInitializeTransitionPfn @ 0x1400E2B5C (MiInitializeTransitionPfn.c)
 *     MiOutPageSingleKernelStack @ 0x1400EE63C (MiOutPageSingleKernelStack.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102820 (MiDecrementAndInsertStandbyPages.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MiDeleteParentDecayNode @ 0x140113C84 (MiDeleteParentDecayNode.c)
 *     MmProtectMdlSystemAddress @ 0x1401184E8 (MmProtectMdlSystemAddress.c)
 *     MiMakeProtoTransition @ 0x140132098 (MiMakeProtoTransition.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  return MiSwizzleInvalidPte(32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40));
}
