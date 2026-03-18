/*
 * XREFs of DxgkSqmShutdown @ 0x1C01507D4
 * Callers:
 *     DxgkUnload @ 0x1C0142B60 (DxgkUnload.c)
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkSqmShutdown()
{
  char *v0; // rcx
  __int64 v1; // rax
  PVOID v2; // rcx
  __int64 v3; // rax
  PVOID v4; // rcx

  v0 = (char *)pDxgkSqmControl;
  if ( !pDxgkSqmControl )
  {
    v1 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v1 + 24) = 1206LL;
    WdLogEvent5_WdAssertion(v1);
    v0 = (char *)pDxgkSqmControl;
  }
  KeCancelTimer((PKTIMER)(v0 + 8));
  KeFlushQueuedDpcs();
  KeResetEvent((PRKEVENT)pDxgkSqmControl + 3);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)pDxgkSqmControl + 40, 0, 0) )
    KeWaitForSingleObject((char *)pDxgkSqmControl + 72, Executive, 0, 0, 0LL);
  v2 = pDxgkSqmControl;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)pDxgkSqmControl + 40, 0, 0) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 1216LL;
    WdLogEvent5_WdAssertion(v3);
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)pDxgkSqmControl);
  v4 = pDxgkSqmControl;
  *(_QWORD *)pDxgkSqmControl = 0LL;
  ExFreePoolWithTag(v4, 0);
  pDxgkSqmControl = 0LL;
  if ( `anonymous namespace'::Microsoft_Windows_DxgKrnlSqm )
  {
    EtwUnregister(`anonymous namespace'::Microsoft_Windows_DxgKrnlSqm);
    `anonymous namespace'::Microsoft_Windows_DxgKrnlSqm = 0LL;
  }
}
