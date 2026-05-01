/*
 * XREFs of ?GetMemoryEstimate@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180035D70
 * Callers:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExecutionModel::ResourceSet::GetMemoryEstimate(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // rbx

  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *((ExecutionModel::ResourceSet **)this + 236) == (ExecutionModel::ResourceSet *)((char *)this + 1888) )
    v2 = *((_QWORD *)this + 28);
  else
    v2 = *((_QWORD *)this + 183);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v2;
}
