/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C019A104
 * Callers:
 *     DxgkUnload @ 0x1C0165770 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C019C1F0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C0057018);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExDeleteNPagedLookasideList(&stru_1C0056F80);
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
  if ( qword_1C00571C0 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C00571C0);
    qword_1C00571C0 = 0LL;
  }
}
