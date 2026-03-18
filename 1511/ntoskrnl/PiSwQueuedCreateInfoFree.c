/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1406114FC
 * Callers:
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140494D34 (PiSwDeviceFree.c)
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406113FC (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x140494DF8 (PiSwPnPInfoFree.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(void *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)a1 = 0LL;
  }
  PiSwPnPInfoFree((__int64)a1 + 8);
  v3 = (void *)*((_QWORD *)a1 + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  v4 = (char *)*((_QWORD *)a1 + 8);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)a1 + 18), v4, 0x57706E50u);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
