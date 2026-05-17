/*
 * XREFs of RtlExitUserThread @ 0x180052930
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     RtlUserThreadStart @ 0x180051D50 (RtlUserThreadStart.c)
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     DbgUiRemoteBreakin @ 0x1800D0480 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D5780 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D5870 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA040 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x180052990 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A6E80 (NtTerminateThread.c)
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
  JUMPOUT(0x180052985LL);
}
