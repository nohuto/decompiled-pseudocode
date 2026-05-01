/*
 * XREFs of ?IsValid@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180035950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::ResourceSet::IsValid(ExecutionModel::ResourceSet *this)
{
  char v2; // bl

  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = 1;
  if ( (*((_BYTE *)this - 12) & 1) != 0 || !*((_DWORD *)this - 4) )
    v2 = 0;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v2;
}
