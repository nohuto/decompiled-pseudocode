/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0016138
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0013D64 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C00CAB80 (NtGdiCreateRoundRectRgn.c)
 *     CLIPOBJ_GetRgn @ 0x1C025B370 (CLIPOBJ_GetRgn.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C0291A50 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C02A57F0 (NtGdiPathToRegion.c)
 * Callees:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct HOBJ__ *v2; // rbx
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
  v2 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v4, *this, 0, 0, 4);
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
  return v2;
}
