/*
 * XREFs of PiSwInterfaceFree @ 0x140645718
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x1404C6888 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x1404C6C98 (PiSwFreeInterfaceList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140502730 (PnpFreeDevPropertyArray.c)
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
