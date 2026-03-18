/*
 * XREFs of DxgkSqmShutdown @ 0x1C014BA84
 * Callers:
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkSqmShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  __int64 v10; // rax
  PVOID v11; // rcx

  v4 = (char *)pDxgkSqmControl;
  if ( !pDxgkSqmControl )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 1206LL;
    WdLogEvent5_WdAssertion(v5);
    v4 = (char *)pDxgkSqmControl;
  }
  KeCancelTimer((PKTIMER)(v4 + 8));
  KeFlushQueuedDpcs();
  KeResetEvent((PRKEVENT)pDxgkSqmControl + 3);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)pDxgkSqmControl + 40, 0, 0) )
    KeWaitForSingleObject((char *)pDxgkSqmControl + 72, Executive, 0, 0, 0LL);
  v9 = pDxgkSqmControl;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)pDxgkSqmControl + 40, 0, 0) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v6, v7, v8);
    *(_QWORD *)(v10 + 24) = 1216LL;
    WdLogEvent5_WdAssertion(v10);
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)pDxgkSqmControl);
  v11 = pDxgkSqmControl;
  *(_QWORD *)pDxgkSqmControl = 0LL;
  ExFreePoolWithTag(v11, 0);
  pDxgkSqmControl = 0LL;
  if ( `anonymous namespace'::Microsoft_Windows_DxgKrnlSqm )
  {
    EtwUnregister(`anonymous namespace'::Microsoft_Windows_DxgKrnlSqm);
    `anonymous namespace'::Microsoft_Windows_DxgKrnlSqm = 0LL;
  }
}
