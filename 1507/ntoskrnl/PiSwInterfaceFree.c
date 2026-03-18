/*
 * XREFs of PiSwInterfaceFree @ 0x140691080
 * Callers:
 *     PiSwInterfaceCreate @ 0x14045A278 (PiSwInterfaceCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwFreeInterfaceList @ 0x14045B83C (PiSwFreeInterfaceList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
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
