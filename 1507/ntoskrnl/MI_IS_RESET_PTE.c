/*
 * XREFs of MI_IS_RESET_PTE @ 0x1402259E8
 * Callers:
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiCheckReservePageFileSpace @ 0x1400AE5D0 (MiCheckReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (a1 & 1) == 0
      && (a1 & 0x800) == 0
      && (a1 & 0x400) == 0
      && (a1 & 4) == 0
      && (a1 & 2) == 0
      && (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32 == 1;
}
