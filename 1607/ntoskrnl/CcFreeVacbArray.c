/*
 * XREFs of CcFreeVacbArray @ 0x1405F905C
 * Callers:
 *     CcDereferenceVacbArray @ 0x140018314 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall CcFreeVacbArray(_DWORD *a1)
{
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x235uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExFreePoolWithTag(a1, 0x61566356u);
}
