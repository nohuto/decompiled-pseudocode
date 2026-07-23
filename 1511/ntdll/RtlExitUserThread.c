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

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
