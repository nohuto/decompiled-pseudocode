/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140415378 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140415AF0 (PspQueryJobHierarchyProcessIdList.c)
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspEnforceLimits @ 0x140506688 (PspEnforceLimits.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSetBackgroundJobTree @ 0x1405550AC (PspSetBackgroundJobTree.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406C4754 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406C4A58 (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextChildJob @ 0x1405069DC (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x140506AD8 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  int v8; // r14d
  int v9; // r15d
  int v10; // ebp
  _QWORD *v12; // rbx
  __int64 NextChildJob; // rax
  _QWORD *v14; // r14

  v6 = a6;
  v8 = a3;
  v9 = a2;
  v10 = 0;
  v12 = a1;
  do
  {
    if ( (v6 & 2) == 0 )
    {
      v10 = PspCallJobHierarchyCallbacks((_DWORD)v12, v9, v8, a4, a5, v6);
      if ( v10 < 0 )
        goto LABEL_9;
      v6 = a6 & 0xFFFFFFFE;
    }
    NextChildJob = PspGetNextChildJob(v12, 0LL);
    if ( !NextChildJob )
    {
      v14 = (_QWORD *)v12[133];
      if ( v12 != a1 )
      {
        while ( 1 )
        {
          if ( (v6 & 2) != 0 )
          {
            v10 = PspCallJobHierarchyCallbacks((_DWORD)v12, a2, a3, a4, a5, a6 & 0xFFFFFFFE);
            if ( v10 < 0 )
              goto LABEL_9;
          }
          NextChildJob = PspGetNextChildJob(v14, v12);
          if ( !NextChildJob )
          {
            v12 = v14;
            v14 = (_QWORD *)v14[133];
            if ( v12 != a1 )
              continue;
          }
          v9 = a2;
          break;
        }
      }
      v8 = a3;
    }
    v12 = (_QWORD *)NextChildJob;
  }
  while ( NextChildJob );
  if ( (v6 & 2) == 0 )
    return (unsigned int)v10;
  v10 = PspCallJobHierarchyCallbacks((_DWORD)a1, v9, v8, a4, a5, v6);
LABEL_9:
  if ( v12 )
  {
    while ( v12 != a1 )
    {
      ObfDereferenceObjectWithTag(v12, 0x6E457350u);
      v12 = (_QWORD *)v12[133];
    }
  }
  return (unsigned int)v10;
}
