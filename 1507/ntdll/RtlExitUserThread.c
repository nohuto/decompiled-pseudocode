/*
 * XREFs of RtlExitUserThread @ 0x180009FA0
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x180009F30 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     DbgUiRemoteBreakin @ 0x1800BC2C0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800C4180 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800C4380 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800D8EF0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     TpCheckTerminateWorker @ 0x18000A000 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x180093E30 (NtTerminateThread.c)
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
