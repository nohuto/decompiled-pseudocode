/*
 * XREFs of MiSwizzleInvalidPte @ 0x1401F297C
 * Callers:
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 *     MiMakeLinkedListPte @ 0x1401F2740 (MiMakeLinkedListPte.c)
 *     MiMakePageFilePte @ 0x1401F274C (MiMakePageFilePte.c)
 *     MiMakePrototypePteDirect @ 0x1401F2758 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2768 (MiMakePrototypePteVadLookup.c)
 *     MiMakeSubsectionPte @ 0x1401F277C (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x1401F279C (MiMakeTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2958 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401F299C (MiTransferSoftwarePte.c)
 *     MiUpdateLinkedListInPte @ 0x1401F2A14 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2A38 (MiUpdateTransitionPteFrame.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2FB8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140326A00 )
  {
    if ( (qword_140326A00 & a1) != 0 )
      return a1 | 0x10;
    else
      return qword_140326A00 | a1;
  }
  return a1;
}
