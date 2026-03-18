/*
 * XREFs of ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0047794
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C00474E0 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00C1E20 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vBoundBox(struct _POINTFIX *a1, struct _RECTFX *a2)
{
  FIX x; // eax
  FIX v4; // r9d
  FIX v5; // ecx
  FIX v6; // eax
  FIX v7; // ecx
  FIX y; // ecx
  FIX v9; // eax
  FIX v10; // r9d
  FIX v11; // ecx
  FIX v12; // ecx
  FIX v13; // r9d
  FIX v14; // eax
  FIX v15; // r9d

  x = a1->x;
  v4 = a1[1].x;
  v5 = a1[2].x;
  if ( x < v4 )
  {
    v13 = a1[3].x;
    if ( v5 > v13 )
    {
      if ( x < v13 )
        v13 = x;
      a2->xLeft = v13;
      v7 = a1[2].x;
    }
    else
    {
      if ( x < v5 )
        v5 = x;
      a2->xLeft = v5;
      v7 = a1[3].x;
    }
    if ( a1[1].x > v7 )
      v7 = a1[1].x;
  }
  else
  {
    v6 = a1[3].x;
    if ( v5 < v6 )
    {
      if ( v4 < v5 )
        v5 = v4;
      a2->xLeft = v5;
      v7 = a1[3].x;
    }
    else
    {
      if ( v4 < v6 )
        v6 = v4;
      a2->xLeft = v6;
      v7 = a1[2].x;
    }
    if ( a1->x > v7 )
      v7 = a1->x;
  }
  a2->xRight = v7;
  y = a1->y;
  v9 = a1[1].y;
  if ( y < v9 )
  {
    v14 = a1[2].y;
    v15 = a1[3].y;
    if ( v14 > v15 )
    {
      if ( y < v15 )
        v15 = a1->y;
      a2->yTop = v15;
      v12 = a1[2].y;
    }
    else
    {
      if ( y < v14 )
        v14 = a1->y;
      a2->yTop = v14;
      v12 = a1[3].y;
    }
    if ( a1[1].y > v12 )
      v12 = a1[1].y;
  }
  else
  {
    v10 = a1[2].y;
    v11 = a1[3].y;
    if ( v10 < v11 )
    {
      if ( v9 < v10 )
        v10 = a1[1].y;
      a2->yTop = v10;
      v12 = a1[3].y;
    }
    else
    {
      if ( v9 < v11 )
        v11 = a1[1].y;
      a2->yTop = v11;
      v12 = a1[2].y;
    }
    if ( a1->y > v12 )
      v12 = a1->y;
  }
  a2->yBottom = v12;
}
