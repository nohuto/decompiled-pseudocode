/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1406459FC
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PiSwDeviceFree @ 0x140483DD0 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406458EC (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwPnPInfoFree @ 0x140483E58 (PiSwPnPInfoFree.c)
 *     PnpFreeDevPropertyArray @ 0x1404E56C0 (PnpFreeDevPropertyArray.c)
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
  v4 = (char *)*((_QWORD *)a1 + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)a1 + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
