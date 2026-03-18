/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C016CD3C
 * Callers:
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C016DD50 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C0046DD8);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExDeleteNPagedLookasideList(&stru_1C0046D40);
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
  if ( qword_1C0046F80 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C0046F80);
    qword_1C0046F80 = 0LL;
  }
}
