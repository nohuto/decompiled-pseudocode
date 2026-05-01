/*
 * XREFs of ?IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180010750
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180010074 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 * Callees:
 *     ?IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18000E958 (-IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

bool __fastcall ExecutionModel::ResourceSet::IsReleased(ExecutionModel::ResourceSet *this)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  LOBYTE(this) = ExecutionModel::BaseResourceSet::IsReleased((ExecutionModel::ResourceSet *)((char *)this - 1368));
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (char)this;
}
