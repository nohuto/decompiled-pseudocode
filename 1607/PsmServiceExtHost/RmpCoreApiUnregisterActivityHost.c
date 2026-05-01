/*
 * XREFs of RmpCoreApiUnregisterActivityHost @ 0x18002E450
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHost @ 0x18002E630 (RmCoreRpcSrvUnregisterActivityHost.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpActivityHostFindByHostId @ 0x180018014 (RmpActivityHostFindByHostId.c)
 */

__int64 __fastcall RmpCoreApiUnregisterActivityHost(__int64 a1, __int64 a2)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = RmpActivityHostFindByHostId((__int64)RmSvcGlobals, a2, &P);
  v5 = (volatile signed __int32 *)P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( *((_QWORD *)P + 128) == a1 )
      RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)P);
    else
      v6 = -1073741816;
  }
  if ( v5 )
    RmpObjectRelease(v5);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v6;
}
