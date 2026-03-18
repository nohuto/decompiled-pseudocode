/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1406912C0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140539E04 (PiSwDeviceFree.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406911C0 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x140539EAC (PiSwPnPInfoFree.c)
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
