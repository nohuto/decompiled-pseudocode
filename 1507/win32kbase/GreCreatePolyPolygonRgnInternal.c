/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C0068CF0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0025650 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00402CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00690C8 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     bPolyPolygon @ 0x1C00690F0 (bPolyPolygon.c)
 *     ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C0069200 (--0EXFORMOBJ@@QEAA@KK@Z.c)
 */

struct HOBJ__ *__fastcall GreCreatePolyPolygonRgnInternal(
        struct _POINTL *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5)
{
  struct HOBJ__ *v5; // rbx
  struct _RECTL *v9; // r9
  __int16 *v11; // [rsp+38h] [rbp-51h] BYREF
  int v12; // [rsp+40h] [rbp-49h]
  _BYTE v13[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v14; // [rsp+50h] [rbp-39h]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v13);
    if ( v14 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)&v11, 1u, 8u);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v13, (struct EXFORMOBJ *)&v11, a1, a3, a5) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11, (struct EPATHOBJ *)v13, a4, v9);
        if ( v11 )
        {
          v5 = RGNOBJ::hrgnAssociate((struct OBJECT **)&v11);
          if ( !v5 )
            RGNOBJ::vDeleteRGNOBJ(&v11);
        }
        if ( v12 == 1 )
          RGNOBJ::vDeleteRGNOBJ(&v11);
      }
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v13);
  }
  return v5;
}
