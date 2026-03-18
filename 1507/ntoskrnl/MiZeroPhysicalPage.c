/*
 * XREFs of MiZeroPhysicalPage @ 0x1400793F0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiGetZeroedPages @ 0x140077560 (MiGetZeroedPages.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiZeroPfn @ 0x140156414 (MiZeroPfn.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 *     MiComputeOptimalZeroPath @ 0x1407C88D8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiZeroPhysicalPage(__int64 a1, char a2, int a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // esi
  char v9; // al
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int8 v17; // [rsp+58h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 && (v6 = MiReservePtes(&qword_14034FC70, 1LL)) != 0 )
  {
    v7 = 48 * a1 - 0x58000000000LL;
    v8 = 0;
    if ( (a2 & 2) == 0 )
    {
      v9 = *(_BYTE *)(v7 + 34) >> 6;
      if ( v9 )
      {
        if ( v9 == 2 && (MiFlags & 0x4000) != 0 )
        {
          MiChangePageAttribute(v7, 1LL, 0LL);
          if ( a3 != 1 )
            v8 = 2;
        }
      }
      else if ( (MiFlags & 0x2000) != 0 )
      {
        MiChangePageAttribute(v7, 1LL, 0LL);
        v8 = a3 != 1;
      }
    }
    v10 = ((a1 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[(unsigned int)MiMakeProtectionPfnCompatible(
                                                                            4LL,
                                                                            48 * a1 - 0x58000000000LL)] & 0xFFFF000000000FFFuLL | 0x21;
    if ( v6 + 0x904C0000000LL <= 0x3FFFFFFF )
      v10 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    v11 = 0x98000000000LL;
    if ( v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v6 >= 0xFFFFF68000000000uLL
      || v6 >= 0xFFFFF6FB40000000uLL
      && v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v6 >= 0xFFFFF6FB7DA00000uLL
      && (v11 = 0x90482600000LL, v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
      || v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v10 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v6, v11, v10) )
      v12 |= 0x100uLL;
    v13 = v12 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    *(_QWORD *)v6 = v13;
    if ( v6 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v6, v13);
    KeZeroPages((__int64)(v6 << 25) >> 16, 4096LL);
    result = MiReleasePtes(&qword_14034FC70, v6, 1LL);
    if ( v8 )
    {
      if ( v8 == 1 )
        v15 = 0LL;
      else
        v15 = 2LL;
      return MiChangePageAttribute(v7, v15, 0LL);
    }
  }
  else
  {
    v16 = MiMapPageInHyperSpaceWorker(a1, &v17, 0x80000000LL);
    KeZeroPages(v16, 4096LL);
    return MiUnmapPageInHyperSpaceWorker(v16, v17);
  }
  return result;
}
