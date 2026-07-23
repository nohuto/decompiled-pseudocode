/*
 * XREFs of KeGetXSaveFeatureFlags @ 0x14013A080
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 KeGetXSaveFeatureFlags()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax

  v0 = 0;
  if ( MEMORY[0xFFFFF780000003D8] && (MEMORY[0xFFFFF780000003EC] & 1) != 0 )
  {
    v1 = 8;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      return 24;
    return v1;
  }
  return v0;
}
