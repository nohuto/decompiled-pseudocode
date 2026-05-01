/*
 * XREFs of ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180010740
 * Callers:
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000FFB0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsApplied(ExecutionModel::ResourceSet *this)
{
  return *((_BYTE *)this - 1356);
}
