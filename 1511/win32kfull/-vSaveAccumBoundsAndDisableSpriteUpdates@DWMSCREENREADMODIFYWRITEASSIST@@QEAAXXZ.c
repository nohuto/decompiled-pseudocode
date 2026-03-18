/*
 * XREFs of ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291454
 * Callers:
 *     GrePolyPolygon @ 0x1C000FFD0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1C00FC010 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C013BC60 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291780 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C0292BB0 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C0293310 (GrePolyPolyline.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  int Bounds; // eax
  DC **v4; // rcx
  struct EPOINTL *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  BOOL v9; // edx
  BOOL v10; // r8d

  v1 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)v1 )
  {
    *(_DWORD *)(*(_QWORD *)v1 + 504LL) = 0;
    Bounds = GreGetBounds(***((_QWORD ***)this + 3), (char *)this + 4, 4LL);
    v4 = (DC **)*((_QWORD *)this + 3);
    *(_DWORD *)this = Bounds;
    v5 = DC::eptlOrigin(*v4);
    *((_DWORD *)this + 1) -= *(_DWORD *)v5;
    *((_DWORD *)this + 3) -= *(_DWORD *)v5;
    *((_DWORD *)this + 2) -= *((_DWORD *)v5 + 1);
    *((_DWORD *)this + 4) -= *((_DWORD *)v5 + 1);
    v6 = (_QWORD *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = *(unsigned __int8 *)(*(_QWORD *)(*v6 + 80LL) + 72LL);
    v7 = *(_QWORD *)(*v6 + 80LL);
    if ( (*(_DWORD *)(v7 + 8) & 0x1000) != 0 )
    {
      *((_QWORD *)this + 5) = *(_QWORD *)(v7 + 16);
      GreDCSelectBrush(*v6, *(&gahStockObjects + 5));
    }
    else
    {
      *((_QWORD *)this + 5) = GreDCSelectBrush(*v6, *(&gahStockObjects + 5));
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 80LL) + 72LL) = 11;
    v8 = *((_QWORD *)this + 3);
    v9 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 80LL) + 8LL) & 0x100) == 0;
    *((_DWORD *)this + 16) = v9;
    v10 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 80LL) + 8LL) & 0x200) == 0;
    *((_DWORD *)this + 17) = v10;
    if ( v9 )
      *((_QWORD *)this + 6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 80LL) + 76LL);
    if ( v10 )
      *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 80LL) + 84LL);
  }
}
