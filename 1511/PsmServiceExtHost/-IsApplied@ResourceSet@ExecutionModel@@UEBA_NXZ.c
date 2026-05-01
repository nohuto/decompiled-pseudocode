/*
 * XREFs of ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x18000E810
 * Callers:
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DAE0 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DC20 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsApplied(ExecutionModel::ResourceSet *this)
{
  return *((_BYTE *)this - 1356);
}
