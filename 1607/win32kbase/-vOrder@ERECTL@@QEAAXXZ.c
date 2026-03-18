/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0039950
 * Callers:
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 *     ?GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00C19A4 (-GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vOrder(ERECTL *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // eax

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this > v2 )
  {
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 2) = v1;
  }
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > v4 )
  {
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 3) = v3;
  }
}
