/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x140468674
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspEnforceLimits @ 0x140468418 (PspEnforceLimits.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140469C10 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspFreezeJobTree @ 0x140489E4C (PspFreezeJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404D1E00 (PspAddSchedulingGroupToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404DB784 (PspQueryJobHierarchyProcessIdList.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404E2F28 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x1404E96C0 (PspSetBackgroundJobTree.c)
 *     PspSetJobIoAttribution @ 0x1404F206C (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1404F2250 (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1404F22AC (PspRemoveIoAttribution.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EEF4 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140680614 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1406807A8 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14068082C (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x140680A28 (PspSetJobRateControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextChildJob @ 0x1404687F4 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x140468F58 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(_QWORD *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  int v7; // r15d
  int v8; // r12d
  int v9; // eax
  unsigned int v11; // ebp
  _QWORD *v12; // rbx
  int v13; // r14d
  __int64 NextChildJob; // rax
  _QWORD *v15; // r15

  v6 = a6;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( (a6 & 8) != 0 )
  {
    v6 = a6 | 1;
    v11 = a6 | 1;
  }
  else
  {
    v11 = a6 & 0xFFFFFFFE;
  }
  v12 = a1;
  v13 = 0;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v13 = PspCallJobHierarchyCallbacks((_DWORD)v12, v9, v8, v7, a5, v6);
      if ( v13 < 0 )
        goto LABEL_11;
      v6 = v11;
    }
    NextChildJob = PspGetNextChildJob(v12, 0LL);
    if ( !NextChildJob )
    {
      v15 = (_QWORD *)v12[132];
      if ( v12 != a1 )
      {
        while ( 1 )
        {
          if ( (v6 & 2) != 0 )
          {
            v13 = PspCallJobHierarchyCallbacks((_DWORD)v12, a2, a3, a4, a5, v11);
            if ( v13 < 0 )
              goto LABEL_11;
          }
          NextChildJob = PspGetNextChildJob(v15, v12);
          if ( !NextChildJob )
          {
            v12 = v15;
            v15 = (_QWORD *)v15[132];
            if ( v12 != a1 )
              continue;
          }
          v8 = a3;
          break;
        }
      }
      v7 = a4;
    }
    v12 = (_QWORD *)NextChildJob;
    if ( !NextChildJob )
      break;
    v9 = a2;
  }
  if ( (v6 & 2) == 0 )
    return (unsigned int)v13;
  v13 = PspCallJobHierarchyCallbacks((_DWORD)a1, a2, v8, v7, a5, v6);
LABEL_11:
  if ( v12 )
  {
    while ( v12 != a1 )
    {
      ObfDereferenceObjectWithTag(v12, 0x6E457350u);
      v12 = (_QWORD *)v12[132];
    }
  }
  return (unsigned int)v13;
}
