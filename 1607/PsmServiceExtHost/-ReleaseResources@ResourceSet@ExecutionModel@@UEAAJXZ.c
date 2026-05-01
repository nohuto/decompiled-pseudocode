/*
 * XREFs of ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180035DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResources(ExecutionModel::ResourceSet *this)
{
  int v2; // ebx

  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 171) + 32LL))((char *)this - 1368, 0LL);
  if ( v2 >= 0 )
    v2 = 0;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v2;
}
