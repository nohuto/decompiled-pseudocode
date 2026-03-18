/*
 * XREFs of MiSwizzleInvalidPte @ 0x140226020
 * Callers:
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     MiMakeSubsectionPte @ 0x140225C5C (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiUpdateLinkedListInPte @ 0x1402260B8 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_14034EBC0 )
  {
    if ( (qword_14034EBC0 & a1) != 0 )
      return a1 | 0x10;
    else
      return qword_14034EBC0 | a1;
  }
  return a1;
}
