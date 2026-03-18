/*
 * XREFs of ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0291644
 * Callers:
 *     GrePolyBezier @ 0x1C0007490 (GrePolyBezier.c)
 *     NtGdiRectangle @ 0x1C00A2B10 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C00CA940 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C00E62C0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0291C00 (NtGdiInvertRgn.c)
 *     GrePolyPolyline @ 0x1C0293850 (GrePolyPolyline.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019A20 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  DWMSCREENREADMODIFYWRITEASSIST *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = this;
  v2 = **((_QWORD **)this + 3);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
    {
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) &= 0xFFFFFCFF;
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 76LL) = *((_DWORD *)this + 12);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 80LL) = *((_DWORD *)this + 13);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 84LL) = *((_DWORD *)this + 14);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 88LL) = *((_DWORD *)this + 15);
      v3 = *(_QWORD *)(**((_QWORD **)this + 3) + 80LL);
      if ( *((_DWORD *)this + 17) )
        *(_DWORD *)(v3 + 8) |= 0x100u;
      else
        *(_DWORD *)(v3 + 8) |= 0x200u;
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 80LL) + 72LL) = *((_BYTE *)this + 32);
    v4 = *(_QWORD *)(**((_QWORD **)this + 3) + 80LL);
    v5 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)(v4 + 16) != v5 )
    {
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(*(_QWORD *)(**((_QWORD **)v1 + 3) + 80LL) + 8LL) |= 0x1000u;
    }
    if ( *(_DWORD *)v1 )
      XDCOBJ::vAccumulateTight(*((XDCOBJ **)v1 + 3), (DWMSCREENREADMODIFYWRITEASSIST *)((char *)v1 + 4));
    *(_DWORD *)(**((_QWORD **)v1 + 3) + 504LL) = 1;
  }
}
