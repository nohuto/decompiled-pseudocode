/*
 * XREFs of PopCheckpointSystemSleep @ 0x1403CEBA4
 * Callers:
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x1403CDE5C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 *     PopHiberChecksumHiberFileData @ 0x1403CEA54 (PopHiberChecksumHiberFileData.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 *     PopNotifyCallbacksPreSleep @ 0x14052FE18 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchSuperfetchNotification @ 0x14052FE74 (PopDispatchSuperfetchNotification.c)
 *     PopResumeServices @ 0x14052FEE4 (PopResumeServices.c)
 *     PopResumeApps @ 0x14052FF58 (PopResumeApps.c)
 *     PopSuspendServices @ 0x14052FFC8 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x14053001C (PopSuspendApps.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159290 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1403DFAF0 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  v2 = __rdtsc();
  if ( PopCheckpointSystemSleepEnabled )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, a1, 1uLL, 0LL);
      if ( off_1402F2650() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, a1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  if ( (_DWORD)v1 == 41 )
    PopCheckpointSystemSleepEnabled = 0;
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_1403038B0 += result;
  return result;
}
