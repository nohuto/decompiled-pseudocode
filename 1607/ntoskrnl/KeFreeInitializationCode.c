/*
 * XREFs of KeFreeInitializationCode @ 0x140777A58
 * Callers:
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     MmDiscardDriverSection @ 0x1407BC1C8 (MmDiscardDriverSection.c)
 *     KiSwInterruptPresent @ 0x1407BD344 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1407BD3B4 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 )
      return MmDiscardDriverSection(sub_14025299C);
  }
  return result;
}
