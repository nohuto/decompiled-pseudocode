/*
 * XREFs of ?UmfdEscEngFntCacheLookUp@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A46A8
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A519C (UmfdDispatchEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdEscEngFntCacheLookUp(volatile void **a1)
{
  char *v1; // rbx

  v1 = (char *)(a1 + 1);
  ProbeForWrite(a1[2], 8uLL, 8u);
  **((_DWORD **)v1 + 1) = 0;
  *(_QWORD *)v1 = 0LL;
}
