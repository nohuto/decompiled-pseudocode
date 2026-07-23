/*
 * XREFs of MiSwizzleInvalidPte @ 0x1401F2784
 * Callers:
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeLinkedListPte @ 0x1401F256C (MiMakeLinkedListPte.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiUpdateLinkedListInPte @ 0x1401F281C (MiUpdateLinkedListInPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140326A40 )
  {
    if ( (qword_140326A40 & a1) != 0 )
      return a1 | 0x10;
    else
      return qword_140326A40 | a1;
  }
  return a1;
}
