/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A02C
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C003EC38 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0080EC8 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00B2E1C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

__int64 __fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rdx
  __int64 v2; // rdx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *this;
  v4 = 0LL;
  HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v4, v1, 0, 0, 4u);
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v4);
  return v2;
}
