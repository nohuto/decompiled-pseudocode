/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00368D0
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C00168A0 (NtGdiCreateRoundRectRgn.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0036538 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     CLIPOBJ_GetRgn @ 0x1C025B090 (CLIPOBJ_GetRgn.c)
 *     GreGetDxRgn @ 0x1C0260F50 (GreGetDxRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C02915D0 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C02A5260 (NtGdiPathToRegion.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025AE90 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025AEA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

__int64 __fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rdx
  __int64 v2; // rdx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *this;
  v4 = 0LL;
  HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v4, v1, 0, 0, 4);
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v4);
  return v2;
}
