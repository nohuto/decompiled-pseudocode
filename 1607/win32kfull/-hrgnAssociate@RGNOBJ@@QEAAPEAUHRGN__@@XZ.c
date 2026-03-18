/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C004A118
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C0013A20 (NtGdiCreateRoundRectRgn.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0052ADC (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     CLIPOBJ_GetRgn @ 0x1C02584B0 (CLIPOBJ_GetRgn.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C0290560 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C02A6400 (NtGdiPathToRegion.c)
 * Callees:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
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
