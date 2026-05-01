/*
 * XREFs of ?ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x1800356D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ForceReleaseResources(ExecutionModel::ResourceSet *this)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 171) + 32LL))(
                    (char *)this - 1368,
                    3LL);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)this;
}
