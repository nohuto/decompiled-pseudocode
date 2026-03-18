/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1C0080EC8
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C0080C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A02C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C002AE80 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C006F530 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     bPolyPolygon @ 0x1C0081180 (bPolyPolygon.c)
 *     ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C0081400 (--0EXFORMOBJ@@QEAA@KK@Z.c)
 */

__int64 __fastcall GreCreatePolyPolygonRgnInternal(struct _POINTL *a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  __int16 *v10; // [rsp+38h] [rbp-51h] BYREF
  int v11; // [rsp+40h] [rbp-49h]
  _BYTE v12[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v13; // [rsp+50h] [rbp-39h]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
    if ( v13 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)&v10, 1u, 8u);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v12, (struct EXFORMOBJ *)&v10, a1, a3, a5) )
      {
        v11 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, (struct EPATHOBJ *)v12, a4, 0LL);
        if ( v10 )
        {
          v5 = RGNOBJ::hrgnAssociate((struct OBJECT **)&v10);
          if ( !v5 )
            RGNOBJ::vDeleteRGNOBJ(&v10);
        }
        if ( v11 == 1 )
          RGNOBJ::vDeleteRGNOBJ(&v10);
      }
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
  }
  return v5;
}
