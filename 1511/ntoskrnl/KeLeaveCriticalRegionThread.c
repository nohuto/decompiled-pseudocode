/*
 * XREFs of KeLeaveCriticalRegionThread @ 0x140042380
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     PspUnlockProcessThreadListShared @ 0x140014364 (PspUnlockProcessThreadListShared.c)
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     ExpUnlockHandleTableExclusive @ 0x14009642C (ExpUnlockHandleTableExclusive.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     PspUnlockQuotaListExclusive @ 0x140142608 (PspUnlockQuotaListExclusive.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401B875C (IoUpdateDumpPhysicalRanges.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 *     DbgkFlushErrorPort @ 0x1403E7698 (DbgkFlushErrorPort.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     KeRundownApcQueues @ 0x1403EFBC4 (KeRundownApcQueues.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PsCallImageNotifyRoutines @ 0x1403F69B0 (PsCallImageNotifyRoutines.c)
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 *     SeDefaultObjectMethod @ 0x14042E060 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404520A4 (PspSetProcessDefaultHardErrorMode.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     DbgkpSuspendProcess @ 0x1404A46AC (DbgkpSuspendProcess.c)
 *     ExpRemoveHandleTable @ 0x1404AE40C (ExpRemoveHandleTable.c)
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     DbgkpRemoveErrorPort @ 0x1405F0618 (DbgkpRemoveErrorPort.c)
 *     ObpAuditObjectAccess @ 0x14062DC14 (ObpAuditObjectAccess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
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
