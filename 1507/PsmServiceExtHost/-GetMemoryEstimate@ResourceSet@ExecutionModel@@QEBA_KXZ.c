/*
 * XREFs of ?GetMemoryEstimate@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18002E4AC
 * Callers:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExecutionModel::ResourceSet::GetMemoryEstimate(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // rbx

  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *((ExecutionModel::ResourceSet **)this + 235) == (ExecutionModel::ResourceSet *)((char *)this + 1880) )
    v2 = *((_QWORD *)this + 28);
  else
    v2 = *((_QWORD *)this + 182);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v2;
}
