/*
 * XREFs of DpiMiracastStopSessionRequestCallback @ 0x1C016ECD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStopSessionRequestCallback(PVOID P, int *a2)
{
  if ( *a2 < 0 )
    DpiMiracastTearDownAssociation((char *)P, *((_DWORD *)P + 80), -2147483647, 0x83u, 0);
  DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
}
