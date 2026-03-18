/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 *     GreExcludeClipRect @ 0x1C0033214 (GreExcludeClipRect.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0097490 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
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
