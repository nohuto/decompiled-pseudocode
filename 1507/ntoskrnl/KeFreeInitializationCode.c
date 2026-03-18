/*
 * XREFs of KeFreeInitializationCode @ 0x14079AA14
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     MmDiscardDriverSection @ 0x1407E7104 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1407E8FC8 (MmStrongCodeGuaranteesEnforced.c)
 *     KiSwInterruptPresent @ 0x1407E918C (KiSwInterruptPresent.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 )
      return MmDiscardDriverSection(sub_1402862F4);
  }
  return result;
}
