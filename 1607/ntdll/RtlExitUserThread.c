/*
 * XREFs of RtlExitUserThread @ 0x180052920
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     RtlUserThreadStart @ 0x180051D40 (RtlUserThreadStart.c)
 *     EtwpLogger @ 0x180052AE0 (EtwpLogger.c)
 *     DbgUiRemoteBreakin @ 0x1800D0480 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D5840 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D5930 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA100 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x180052980 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A6E80 (NtTerminateThread.c)
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
