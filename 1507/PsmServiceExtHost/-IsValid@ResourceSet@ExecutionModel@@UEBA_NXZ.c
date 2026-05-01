/*
 * XREFs of ?IsValid@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180040570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsValid(ExecutionModel::ResourceSet *this)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  LOBYTE(this) = (*((_DWORD *)this - 3) & 2) != 0;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (char)this;
}
