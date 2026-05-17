/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D2B24
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D3FD0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x180081C90 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180152298 = 0LL;
    qword_180152290 = (__int64)UniqueThread;
    dword_18015228C = 1;
    dword_180152288 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18014C580 = 0LL;
    qword_18014C578 = (__int64)v2;
    dword_18014C570 = -2;
    dword_18014C574 = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
