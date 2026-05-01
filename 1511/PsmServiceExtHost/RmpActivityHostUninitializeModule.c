/*
 * XREFs of RmpActivityHostUninitializeModule @ 0x1800413E4
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 *     RmpUninitializeGlobalModules @ 0x18003EC48 (RmpUninitializeGlobalModules.c)
 * Callees:
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpObjectTableDestroy @ 0x180045E30 (RmpObjectTableDestroy.c)
 */

_QWORD *RmpActivityHostUninitializeModule()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rbx
  _QWORD *result; // rax
  void *v4; // rcx
  void *v5; // rcx

  v0 = RmSvcGlobals;
  v1 = *((_QWORD *)RmSvcGlobals + 223);
  if ( v1 )
  {
    TpReleaseCleanupGroupMembers(*((_QWORD *)RmSvcGlobals + 223), 1LL, 0LL);
    TpReleaseCleanupGroup(v1);
    v0 = RmSvcGlobals;
  }
  v2 = v0[234];
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v0[234], 1LL, 0LL);
    TpReleaseCleanupGroup(v2);
    v0 = RmSvcGlobals;
  }
  if ( v0[233] )
    TpReleasePool();
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpObjectTableDestroy((char *)RmSvcGlobals + 24);
  result = RmSvcGlobals;
  v4 = (void *)*((_QWORD *)RmSvcGlobals + 220);
  if ( v4 )
  {
    RmpFreeHeap(v4);
    result = RmSvcGlobals;
  }
  v5 = (void *)result[222];
  if ( v5 )
    return RmpFreeHeap(v5);
  return result;
}
