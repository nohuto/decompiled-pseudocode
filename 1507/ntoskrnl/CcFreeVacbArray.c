/*
 * XREFs of CcFreeVacbArray @ 0x14064FD30
 * Callers:
 *     CcDereferenceVacbArray @ 0x140086C14 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall CcFreeVacbArray(_DWORD *a1)
{
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x235uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExFreePoolWithTag(a1, 0x61566356u);
}
