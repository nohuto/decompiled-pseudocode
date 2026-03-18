/*
 * XREFs of KeLeaveCriticalRegionThread @ 0x14006A0A0
 * Callers:
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     MiUnlockImageSection @ 0x140083B04 (MiUnlockImageSection.c)
 *     MiReleaseResourceLite @ 0x140084C14 (MiReleaseResourceLite.c)
 *     PspUnlockThreadSecurityShared @ 0x140087058 (PspUnlockThreadSecurityShared.c)
 *     PspUnlockProcessThreadListShared @ 0x140095C98 (PspUnlockProcessThreadListShared.c)
 *     ExpUnlockHandleTableExclusive @ 0x1400A8A44 (ExpUnlockHandleTableExclusive.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     MiPrefetchVirtualMemory @ 0x1400BFCA0 (MiPrefetchVirtualMemory.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     MiFlushAllPages @ 0x140113188 (MiFlushAllPages.c)
 *     PspUnlockQuotaListExclusive @ 0x14014C39C (PspUnlockQuotaListExclusive.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C6548 (IoUpdateDumpPhysicalRanges.c)
 *     PsReferenceImpersonationTokenEx @ 0x140412120 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140428B60 (PspSetProcessDefaultHardErrorMode.c)
 *     PsCallImageNotifyRoutines @ 0x140429240 (PsCallImageNotifyRoutines.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     PsQueryStatisticsProcess @ 0x14044EBC0 (PsQueryStatisticsProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     PspCreateThread @ 0x140458D18 (PspCreateThread.c)
 *     ExpRemoveHandleTable @ 0x14045F258 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x14045F330 (ExSweepHandleTable.c)
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     MmReleaseLoadLock @ 0x140483400 (MmReleaseLoadLock.c)
 *     MiLockImageSection @ 0x140499ABC (MiLockImageSection.c)
 *     PsTerminateProcess @ 0x1404EC470 (PsTerminateProcess.c)
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     KeRundownApcQueues @ 0x14050BA4C (KeRundownApcQueues.c)
 *     ObpCloseHandle @ 0x14050C774 (ObpCloseHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14050D1B0 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x14050DBE0 (ExCreateHandleEx.c)
 *     PsGetNextProcessThread @ 0x140510350 (PsGetNextProcessThread.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     MiPrefetchControlArea @ 0x140527654 (MiPrefetchControlArea.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     DbgkpRemoveErrorPort @ 0x14061A210 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 *     DbgkpSuspendProcess @ 0x14061ADB4 (DbgkpSuspendProcess.c)
 *     ObpAuditObjectAccess @ 0x140665D20 (ObpAuditObjectAccess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall KeLeaveCriticalRegionThread(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 484))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result && !*(_WORD *)(a1 + 486) )
      return KiCheckForKernelApcDelivery(a1);
  }
  return result;
}
