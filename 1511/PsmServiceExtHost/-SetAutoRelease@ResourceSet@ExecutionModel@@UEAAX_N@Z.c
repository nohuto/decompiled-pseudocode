/*
 * XREFs of ?SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z @ 0x180045BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 */

void __fastcall ExecutionModel::ResourceSet::SetAutoRelease(ExecutionModel::ResourceSet *this, char a2)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( ExecutionModel::ResourceSet::IsLegacy((ExecutionModel::ResourceSet *)((char *)this - 1368)) )
  {
    *((_BYTE *)this + 552) &= ~4u;
    *((_BYTE *)this + 552) |= 4 * (a2 & 1);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
