/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002DC70
 * Callers:
 *     GreIntersectClipRect @ 0x1C0014D20 (GreIntersectClipRect.c)
 *     NtGdiCreateRectRgn @ 0x1C005D500 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0069800 (GreCreateRectRgn.c)
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
