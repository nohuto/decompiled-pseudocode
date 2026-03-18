/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4
 * Callers:
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0036DD8 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     GreExcludeClipRect @ 0x1C00D8918 (GreExcludeClipRect.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2)
{
  __int64 result; // rax

  result = EXFORMOBJ::bXform(this, a2, 2uLL);
  if ( *((_DWORD *)this + 3) )
  {
    ++a2->x;
    ++a2[1].x;
  }
  return result;
}
