/*
 * XREFs of PiSwInterfaceFree @ 0x14061130C
 * Callers:
 *     PiSwFreeInterfaceList @ 0x140494DDC (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x1404E3ABC (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x1404E3EBC (PiSwInterfaceCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
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
