/*
 * XREFs of DxgkSqmInit @ 0x1C00D5FAC
 * Callers:
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 DxgkSqmInit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  PVOID PoolWithTag; // rax
  __int64 v5; // rcx
  PIO_WORKITEM WorkItem; // rax
  char *v7; // rcx
  char *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &`anonymous namespace'::Microsoft_Windows_DxgKrnlSqm);
  if ( pDxgkSqmControl )
  {
    v10 = WdLogNewEntry5_WdAssertion(v1, v0, v2, v3);
    *(_QWORD *)(v10 + 24) = 1168LL;
    WdLogEvent5_WdAssertion(v10);
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA8uLL, 0x4B677844u);
  pDxgkSqmControl = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA8uLL);
    WorkItem = IoAllocateWorkItem(g_pDeviceObject);
    v7 = (char *)pDxgkSqmControl;
    *(_QWORD *)pDxgkSqmControl = WorkItem;
    if ( WorkItem )
    {
      KeInitializeTimer((PKTIMER)(v7 + 8));
      KeInitializeEvent((PRKEVENT)pDxgkSqmControl + 3, NotificationEvent, 0);
      KeInitializeDpc((PRKDPC)((char *)pDxgkSqmControl + 96), (PKDEFERRED_ROUTINE)DxgkSqmDpc, 0LL);
      v8 = (char *)pDxgkSqmControl;
      *((_DWORD *)pDxgkSqmControl + 40) = 0;
      KeSetTimerEx((PKTIMER)(v8 + 8), (LARGE_INTEGER)-216000000000LL, 21600000, (PKDPC)(v8 + 96));
      return 0LL;
    }
    v12 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v12 + 24) = 1181LL;
    WdLogEvent5_WdLowResource(v12);
    ExFreePoolWithTag(pDxgkSqmControl, 0);
    pDxgkSqmControl = 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v11 + 24) = 1173LL;
    WdLogEvent5_WdLowResource(v11);
  }
  return 3221225495LL;
}
