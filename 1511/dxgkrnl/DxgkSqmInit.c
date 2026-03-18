/*
 * XREFs of DxgkSqmInit @ 0x1C00CD850
 * Callers:
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 DxgkSqmInit()
{
  __int64 v0; // rcx
  PVOID PoolWithTag; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PIO_WORKITEM WorkItem; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx
  char *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &`anonymous namespace'::Microsoft_Windows_DxgKrnlSqm);
  if ( pDxgkSqmControl )
  {
    v13 = WdLogNewEntry5_WdAssertion(v0);
    *(_QWORD *)(v13 + 24) = 1168LL;
    WdLogEvent5_WdAssertion(v13);
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA8uLL, 0x4B677844u);
  pDxgkSqmControl = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA8uLL);
    WorkItem = IoAllocateWorkItem(g_pDeviceObject);
    v10 = (char *)pDxgkSqmControl;
    *(_QWORD *)pDxgkSqmControl = WorkItem;
    if ( WorkItem )
    {
      KeInitializeTimer((PKTIMER)(v10 + 8));
      KeInitializeEvent((PRKEVENT)pDxgkSqmControl + 3, NotificationEvent, 0);
      KeInitializeDpc((PRKDPC)((char *)pDxgkSqmControl + 96), (PKDEFERRED_ROUTINE)DxgkSqmDpc, 0LL);
      v11 = (char *)pDxgkSqmControl;
      *((_DWORD *)pDxgkSqmControl + 40) = 0;
      KeSetTimerEx((PKTIMER)(v11 + 8), (LARGE_INTEGER)-216000000000LL, 21600000, (PKDPC)(v11 + 96));
      return 0LL;
    }
    v15 = WdLogNewEntry5_WdLowResource(v10, v7, v8, v9);
    *(_QWORD *)(v15 + 24) = 1181LL;
    WdLogEvent5_WdLowResource(v15);
    ExFreePoolWithTag(pDxgkSqmControl, 0);
    pDxgkSqmControl = 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v3, v2, v4, v5);
    *(_QWORD *)(v14 + 24) = 1173LL;
    WdLogEvent5_WdLowResource(v14);
  }
  return 3221225495LL;
}
