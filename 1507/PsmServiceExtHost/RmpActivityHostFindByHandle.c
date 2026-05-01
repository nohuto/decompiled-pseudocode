/*
 * XREFs of RmpActivityHostFindByHandle @ 0x18003BA9C
 * Callers:
 *     RmpCoreApiSetHostLimits @ 0x180042040 (RmpCoreApiSetHostLimits.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x1800421D4 (RmpCoreApiUnregisterActivityHost.c)
 * Callees:
 *     RmpObjectTableFindObjectByHandleWithLock @ 0x180041398 (RmpObjectTableFindObjectByHandleWithLock.c)
 */

__int64 __fastcall RmpActivityHostFindByHandle(__int64 a1, _QWORD *a2)
{
  char *v2; // rbx
  char *v5; // rsi
  int ObjectByHandleWithLock; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char *)RmSvcGlobals;
  v5 = (char *)RmSvcGlobals + 40;
  RtlAcquireSRWLockShared((char *)RmSvcGlobals + 40);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(v2 + 24, a1, &v8);
  RtlReleaseSRWLockShared(v5);
  if ( ObjectByHandleWithLock >= 0 )
  {
    ObjectByHandleWithLock = 0;
    *a2 = v8;
  }
  return (unsigned int)ObjectByHandleWithLock;
}
