/*
 * XREFs of CleanupOneHLSURF @ 0x14030AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 */

__int64 __fastcall CleanupOneHLSURF(Gre::Base *a1)
{
  return (unsigned __int8)DestroyLogicalSurface(a1, 1);
}
