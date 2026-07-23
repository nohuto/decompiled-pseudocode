/*
 * XREFs of PiSwInterfaceFree @ 0x1406457FC
 * Callers:
 *     PiSwInterfaceCreate @ 0x140486FEC (PiSwInterfaceCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwFreeInterfaceList @ 0x1404878CC (PiSwFreeInterfaceList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1404E56C0 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiSwInterfaceFree(__int64 a1)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = *(char **)(a1 + 24);
  if ( v3 )
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 32), v3, 0x57706E50u);
  ExFreePoolWithTag((PVOID)a1, 0x57706E50u);
}
