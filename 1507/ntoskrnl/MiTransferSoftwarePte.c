/*
 * XREFs of MiTransferSoftwarePte @ 0x140226040
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiConfirmPageIsZero @ 0x1400E6230 (MiConfirmPageIsZero.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14013E180 (MiUpdatePfnBackingStore.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x140226020 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 updated; // rax
  __int16 v5; // r8
  char v6; // r9

  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    a1 &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( a1 )
      updated = MiUpdatePageFileHighInPte(a1, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    a1 = (unsigned __int16)(updated ^ (v5 << 12)) & 0xF000 ^ (unsigned __int64)updated;
    if ( (v6 & 1) != 0 )
      a1 |= 4uLL;
    if ( (v6 & 2) != 0 )
      return a1 | 2;
  }
  return a1;
}
