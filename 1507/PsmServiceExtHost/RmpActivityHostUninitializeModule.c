/*
 * XREFs of RmpActivityHostUninitializeModule @ 0x18003C060
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 * Callees:
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     RmpObjectTableDestroy @ 0x180041200 (RmpObjectTableDestroy.c)
 */

LPVOID RmpActivityHostUninitializeModule()
{
  __int64 v0; // rbx
  _QWORD *v1; // rcx
  LPVOID result; // rax
  void *v3; // rcx

  v0 = *((_QWORD *)RmSvcGlobals + 232);
  if ( v0 )
  {
    TpReleaseCleanupGroupMembers(*((_QWORD *)RmSvcGlobals + 232), 1LL, 0LL);
    TpReleaseCleanupGroup(v0);
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpObjectTableDestroy((char *)RmSvcGlobals + 24);
  v1 = RmSvcGlobals;
  result = (LPVOID)*((_QWORD *)RmSvcGlobals + 229);
  if ( result )
  {
    result = RmpFreeHeap(*((PVOID *)RmSvcGlobals + 229));
    v1 = RmSvcGlobals;
  }
  v3 = (void *)v1[231];
  if ( v3 )
    return RmpFreeHeap(v3);
  return result;
}
