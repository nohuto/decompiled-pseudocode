/*
 * XREFs of MiZeroPhysicalPage @ 0x14010A488
 * Callers:
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiGetPageChain @ 0x14003D480 (MiGetPageChain.c)
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiZeroInParallelWorker @ 0x140109B40 (MiZeroInParallelWorker.c)
 *     MiPerformFinalZeroing @ 0x1401F2E40 (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC4CC (MiZeroAndConvertLargePage.c)
 *     MiComputeOptimalZeroPath @ 0x1407A6288 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001D088 (MiChangePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001DBA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034990 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14010A608 (MiMakeProtectionPfnCompatible.c)
 *     KeZeroPages @ 0x140161E50 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, unsigned __int64 a3)
{
  int v3; // r12d
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // ebp
  ULONG_PTR v9; // rbx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidKernelPte; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char result; // al
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int8 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = *((_DWORD *)&unk_140326A20 + 4 * v7 + (int)a3);
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0);
  }
  v9 = 0LL;
  if ( (a2 & 1) != 0 && (v9 = MiReservePtes((__int64)&qword_140327870, 1uLL, a3)) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v6);
    ValidKernelPte = MiMakeValidKernelPte(BugCheckParameter2, ProtectionPfnCompatible, v9);
    *(_QWORD *)v9 = ValidKernelPte | 0x42;
    if ( (unsigned int)MiPteInShadowRange(v9, ValidKernelPte | 0x42) )
      MiWritePteShadow(v13, v12);
    KeZeroPages((__int64)(v9 << 25) >> 16, 4096LL);
    result = MiReleasePtes((__int64)&qword_140327870, v9, 1u);
  }
  else if ( KeGetCurrentPrcb()->HyperPte )
  {
    v15 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v17, 0x80000000);
    KeZeroPages(v15, 4096LL);
    LOBYTE(v16) = v17;
    result = MiUnmapPageInHyperSpaceWorker(v15, v16);
    v9 = 1LL;
  }
  else
  {
    result = MxFillPhysicalPage(BugCheckParameter2);
  }
  if ( v8 != (_DWORD)v7 && v8 != v3 )
  {
    if ( v9 )
      return MiChangePageAttribute(v6, v7, 0);
  }
  return result;
}
