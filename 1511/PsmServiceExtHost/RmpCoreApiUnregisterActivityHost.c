/*
 * XREFs of RmpCoreApiUnregisterActivityHost @ 0x180046E38
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHost @ 0x180040830 (RmCoreRpcSrvUnregisterActivityHost.c)
 * Callees:
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     RmpActivityHostFindByHandle @ 0x180040E20 (RmpActivityHostFindByHandle.c)
 */

__int64 __fastcall RmpCoreApiUnregisterActivityHost(__int64 a1, __int64 a2)
{
  int v3; // eax
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // edi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  v8 = a2;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v3 = RmpActivityHostFindByHandle((__int64)&v8, &P);
  v4 = (volatile signed __int32 *)P;
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_QWORD *)P + 109) == a1 )
      RmpActivityHostDelete((PVOID **)P);
    else
      v5 = -1073741816;
  }
  if ( v4 )
    RmpObjectRelease(v4);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v5;
}
