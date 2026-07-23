/*
 * XREFs of KeLeaveCriticalRegionThread @ 0x140069C20
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     MiUnlockImageSection @ 0x140081C64 (MiUnlockImageSection.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     PspUnlockThreadSecurityShared @ 0x1400920C8 (PspUnlockThreadSecurityShared.c)
 *     PspUnlockProcessThreadListShared @ 0x140095498 (PspUnlockProcessThreadListShared.c)
 *     ExpUnlockHandleTableExclusive @ 0x1400A6FC4 (ExpUnlockHandleTableExclusive.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     MiFlushAllPages @ 0x1401136F8 (MiFlushAllPages.c)
 *     PspUnlockQuotaListExclusive @ 0x14014C90C (PspUnlockQuotaListExclusive.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C63E8 (IoUpdateDumpPhysicalRanges.c)
 *     PsReferenceImpersonationTokenEx @ 0x140410FE0 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140427A30 (PspSetProcessDefaultHardErrorMode.c)
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PspCreateThread @ 0x140457BE8 (PspCreateThread.c)
 *     ExpRemoveHandleTable @ 0x14045E128 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x14045E200 (ExSweepHandleTable.c)
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MiLockImageSection @ 0x1404AEF68 (MiLockImageSection.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     KeRundownApcQueues @ 0x1404EE9DC (KeRundownApcQueues.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404F0140 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     DbgkpRemoveErrorPort @ 0x14061A2C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 *     DbgkpSuspendProcess @ 0x14061AE68 (DbgkpSuspendProcess.c)
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
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
