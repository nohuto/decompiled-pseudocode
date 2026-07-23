/*
 * XREFs of IopGetMaxValidSectionSize @ 0x1401C73F8
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 */

__int64 __fastcall IopGetMaxValidSectionSize(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( !MiIsAddressValid(a1 + i) )
      break;
  }
  return i;
}
