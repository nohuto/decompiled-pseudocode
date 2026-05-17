/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800CB37C
 * Callers:
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800CC020 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     LdrpCreateLoaderEvents @ 0x1800CB424 (LdrpCreateLoaderEvents.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180145178 = 0LL;
    qword_180145170 = (__int64)UniqueThread;
    dword_18014516C = 1;
    dword_180145168 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801421F8 = 0LL;
    qword_1801421F0 = (__int64)v2;
    dword_1801421E8 = -2;
    dword_1801421EC = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
