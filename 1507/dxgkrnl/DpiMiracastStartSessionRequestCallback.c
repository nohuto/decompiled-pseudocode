/*
 * XREFs of DpiMiracastStartSessionRequestCallback @ 0x1C016A410
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStartSessionRequestCallback(__int64 a1, int *a2)
{
  char *v3; // rdi

  v3 = *(char **)a1;
  if ( *a2 < 0 )
    DpiMiracastTearDownAssociation(*(char **)a1, *(_DWORD *)(a1 + 8), -2147483647, 1u, 0);
  DpiMiracastReleaseMiracastDeviceContext((int *)v3, (unsigned int)v3);
  ExFreePoolWithTag((PVOID)a1, 0);
}
