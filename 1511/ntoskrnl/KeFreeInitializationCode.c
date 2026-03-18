/*
 * XREFs of KeFreeInitializationCode @ 0x14072DA18
 * Callers:
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     MmDiscardDriverSection @ 0x14074E43C (MmDiscardDriverSection.c)
 *     KiSwInterruptPresent @ 0x14074F4AC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140772304 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 )
      return MmDiscardDriverSection(sub_14023706C);
  }
  return result;
}
