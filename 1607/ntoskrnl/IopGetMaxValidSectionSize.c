/*
 * XREFs of IopGetMaxValidSectionSize @ 0x1401C7558
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401C8248 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
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
