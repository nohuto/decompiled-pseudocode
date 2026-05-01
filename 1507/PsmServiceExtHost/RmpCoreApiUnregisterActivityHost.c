/*
 * XREFs of RmpCoreApiUnregisterActivityHost @ 0x1800421D4
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHost @ 0x18003B460 (RmCoreRpcSrvUnregisterActivityHost.c)
 * Callees:
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpActivityHostFindByHandle @ 0x18003BA9C (RmpActivityHostFindByHandle.c)
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
    if ( *((_QWORD *)P + 105) == a1 )
      RmpActivityHostDelete((PVOID **)P);
    else
      v5 = -1073741816;
  }
  if ( v4 )
    RmpObjectRelease(v4);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v5;
}
