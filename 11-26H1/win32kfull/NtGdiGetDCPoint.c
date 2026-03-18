/*
 * XREFs of NtGdiGetDCPoint @ 0x1401D0E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetDCPoint(HDC a1, unsigned int a2, void *a3)
{
  unsigned int DCPoint; // ebx
  struct _POINTL v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  DCPoint = GreGetDCPoint(a1, a2, &v6);
  if ( DCPoint )
    GreProbeAndWriteToUntrustedVa(a3, 8uLL, &v6, 8uLL, 1uLL);
  return DCPoint;
}
