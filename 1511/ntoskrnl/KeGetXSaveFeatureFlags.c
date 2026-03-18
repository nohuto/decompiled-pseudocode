/*
 * XREFs of KeGetXSaveFeatureFlags @ 0x140136D54
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 KeGetXSaveFeatureFlags()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 1) != 0 )
    {
      v0 = 8;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        return 24;
    }
  }
  return v0;
}
