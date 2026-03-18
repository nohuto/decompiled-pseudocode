/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C017154C
 * Callers:
 *     DxgkUnload @ 0x1C0142B60 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C0172580 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C0046E58);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExDeleteNPagedLookasideList(&stru_1C0046DC0);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C0047000 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C0047000);
    qword_1C0047000 = 0LL;
  }
}
