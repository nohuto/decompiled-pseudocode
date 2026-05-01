/*
 * XREFs of ?IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x18000E820
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18000DD38 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 * Callees:
 *     ?IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18000B730 (-IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

bool __fastcall ExecutionModel::ResourceSet::IsReleased(ExecutionModel::ResourceSet *this)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  LOBYTE(this) = ExecutionModel::BaseResourceSet::IsReleased((ExecutionModel::ResourceSet *)((char *)this - 1368));
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (char)this;
}
