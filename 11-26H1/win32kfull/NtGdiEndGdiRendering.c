/*
 * XREFs of NtGdiEndGdiRendering @ 0x1400A5A40
 * Callers:
 *     <none>
 * Callees:
 *     GreEndGdiRenderingToDxSurface @ 0x1400A6500 (GreEndGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiEndGdiRendering(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v5; // ebx
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v5 = GreEndGdiRenderingToDxSurface(a1, a2, a4, &v8);
  if ( a3 )
  {
    v7[0] = v8;
    GreProbeAndWriteToUntrustedVa(a3, 4uLL, v7, 4uLL, 1uLL);
  }
  return v5;
}
