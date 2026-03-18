/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0011BD0 (GreCreateRectRgn.c)
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ?GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00B3E28 (-GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z.c)
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
