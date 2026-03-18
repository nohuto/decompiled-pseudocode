/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8
 * Callers:
 *     PspEnforceLimits @ 0x1403E9998 (PspEnforceLimits.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1403EAFE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 *     PspSetBackgroundJobTree @ 0x1404867B0 (PspSetBackgroundJobTree.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404B6734 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140642204 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1406423B4 (PspRemoveRateControl.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406424AC (PspSendNoWakeChargeLimitNotification.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextChildJob @ 0x1403EB804 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1403EB8F8 (PspCallJobHierarchyCallbacks.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(
        _QWORD *Object,
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
  v12 = Object;
  do
  {
    if ( (v6 & 2) == 0 )
    {
      v10 = PspCallJobHierarchyCallbacks((_DWORD)v12, v9, v8, a4, a5, v6);
      if ( v10 < 0 )
        goto LABEL_16;
      v6 = a6 & 0xFFFFFFFE;
    }
    NextChildJob = PspGetNextChildJob(v12, 0LL);
    if ( !NextChildJob )
    {
      v14 = (_QWORD *)v12[133];
      if ( v12 != Object )
      {
        while ( 1 )
        {
          if ( (v6 & 2) != 0 )
          {
            v10 = PspCallJobHierarchyCallbacks((_DWORD)v12, a2, a3, a4, a5, a6 & 0xFFFFFFFE);
            if ( v10 < 0 )
              goto LABEL_16;
          }
          NextChildJob = PspGetNextChildJob(v14, v12);
          if ( !NextChildJob )
          {
            v12 = v14;
            v14 = (_QWORD *)v14[133];
            if ( v12 != Object )
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
  v10 = PspCallJobHierarchyCallbacks((_DWORD)Object, v9, v8, a4, a5, v6);
LABEL_16:
  if ( v12 )
  {
    while ( v12 != Object )
    {
      ObfDereferenceObjectWithTag(v12, 0x6E457350u);
      v12 = (_QWORD *)v12[133];
    }
  }
  return (unsigned int)v10;
}
