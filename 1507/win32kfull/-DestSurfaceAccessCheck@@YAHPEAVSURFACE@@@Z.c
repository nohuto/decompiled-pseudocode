/*
 * XREFs of ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC0C
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009A640 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DestSurfaceAccessCheck(struct SURFACE *a1)
{
  if ( ((*((_DWORD *)a1 + 29) & 8) != 0 || *((_QWORD *)a1 + 27)) && (*((_WORD *)a1 + 51) & 0x200) != 0 )
    return 0LL;
  else
    return _SurfaceAccessCheck(a1);
}
