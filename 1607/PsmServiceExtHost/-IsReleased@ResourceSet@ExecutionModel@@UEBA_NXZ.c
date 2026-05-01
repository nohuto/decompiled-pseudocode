/*
 * XREFs of ?IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180035900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::ResourceSet::IsReleased(ExecutionModel::ResourceSet *this)
{
  char v2; // bl

  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*((_BYTE *)this - 12) & 1) != 0 || (v2 = 0, !*((_DWORD *)this - 4)) )
    v2 = 1;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v2;
}
