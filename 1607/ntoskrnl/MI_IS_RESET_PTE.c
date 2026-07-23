/*
 * XREFs of MI_IS_RESET_PTE @ 0x14001E930
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiCheckReservePageFileSpace @ 0x1400E2AF0 (MiCheckReservePageFileSpace.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(__int64 a1, __int64 a2, __int64 a3)
{
  return (a1 & 1) == 0
      && (a1 & 0x400) == 0
      && (a1 & 0x800) == 0
      && (a1 & 4) == 0
      && (a1 & 2) == 0
      && MiGetPteTimeStamp(a1, a2, a3) == 1;
}
