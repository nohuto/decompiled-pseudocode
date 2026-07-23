/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspEnforceLimits @ 0x1404672E8 (PspEnforceLimits.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140468AE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404BED88 (PspQueryJobHierarchyProcessIdList.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404C5E8C (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x1404CB7B0 (PspSetBackgroundJobTree.c)
 *     PspSetJobIoAttribution @ 0x1404D4800 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1404D49E4 (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1404D4A40 (PspRemoveIoAttribution.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406806F8 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x14068088C (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140680910 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x140680B0C (PspSetJobRateControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextChildJob @ 0x1404676C4 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x140467E28 (PspCallJobHierarchyCallbacks.c)
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
