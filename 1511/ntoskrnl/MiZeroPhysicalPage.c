/*
 * XREFs of MiZeroPhysicalPage @ 0x1400FE170
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiInitializeMdlPages @ 0x1400BCA18 (MiInitializeMdlPages.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiZeroPfn @ 0x140131BE0 (MiZeroPfn.c)
 *     MiComputeOptimalZeroPath @ 0x14074D98C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

char __fastcall MiZeroPhysicalPage(__int64 a1, char a2, unsigned __int64 a3)
{
  int v3; // ebp
  __int64 v6; // r8
  ULONG_PTR v7; // r14
  __int64 v8; // rdi
  int v9; // esi
  char v10; // al
  int ProtectionPfnCompatible; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  char result; // al
  int v15; // edx
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  if ( (a2 & 1) != 0 && (v7 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, a3)) != 0 )
  {
    v8 = 48 * a1 - 0x58000000000LL;
    v9 = 0;
    if ( (a2 & 2) == 0 )
    {
      v10 = *(_BYTE *)(v8 + 34) >> 6;
      if ( v10 )
      {
        if ( v10 == 2 && (MiFlags & 0x4000) != 0 )
        {
          MiChangePageAttribute(v8, 1, 0);
          if ( v3 != 1 )
            v9 = 2;
        }
      }
      else if ( (MiFlags & 0x2000) != 0 )
      {
        MiChangePageAttribute(v8, 1, 0);
        v9 = v3 != 1;
      }
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, 48 * a1 - 0x58000000000LL, v6);
    v13 = MiMakeValidKernelPte(a1, ProtectionPfnCompatible, v7, v12) | 0x42;
    *(_QWORD *)v7 = v13;
    if ( (unsigned int)MiPteInShadowRange(v7) )
      MiWritePteShadow(v7, v13);
    KeZeroPages((__int64)(v7 << 25) >> 16, 4096LL);
    result = MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v7, 1u);
    if ( v9 )
    {
      if ( v9 == 1 )
        v15 = 0;
      else
        v15 = 2;
      return MiChangePageAttribute(48 * a1 - 0x58000000000LL, v15, 0);
    }
  }
  else
  {
    v16 = MiMapPageInHyperSpaceWorker(a1, &v17, 0x80000000);
    KeZeroPages(v16, 4096LL);
    return MiUnmapPageInHyperSpaceWorker(v16, v17);
  }
  return result;
}
