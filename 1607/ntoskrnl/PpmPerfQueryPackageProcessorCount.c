/*
 * XREFs of PpmPerfQueryPackageProcessorCount @ 0x140204E04
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageProcessorCount(int a1)
{
  unsigned int v1; // ebx
  ULONG i; // edi

  v1 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    if ( a1 == *(_DWORD *)(KeGetPrcb(i) + 24768) )
      ++v1;
  }
  return v1;
}
