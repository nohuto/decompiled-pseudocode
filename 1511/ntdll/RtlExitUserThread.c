/*
 * XREFs of RtlExitUserThread @ 0x18005C5F0
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x18005C580 (RtlUserThreadStart.c)
 *     DbgUiRemoteBreakin @ 0x1800C8FE0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800CD7D0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800CD8C0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800E0EE0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x18005C650 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A5B20 (NtTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v6, 4LL, 0LL) < 0 || !v6 )
  {
    LdrShutdownThread(v3, v2, v4, v5);
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  JUMPOUT(0x18005C645LL);
}
