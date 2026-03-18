/*
 * XREFs of ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A52C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C00CC3A0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC3EC (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00CC494 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C011A668 (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bThicken(WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  int x; // r8d
  int y; // r11d
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  int v10; // r11d
  struct _POINTFIX v12; // rax
  FIX v13; // ebx
  FIX v14; // esi
  FIX v15; // edi
  int v16; // eax
  int v17; // r14d
  int v18; // eax
  int v19; // ecx
  struct _POINTFIX v20; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTFIX v21; // [rsp+28h] [rbp-8h] BYREF
  struct _POINTFIX v22; // [rsp+68h] [rbp+38h] BYREF
  struct _POINTFIX v23; // [rsp+70h] [rbp+40h] BYREF

  v20 = *a2;
  v21 = a2[1];
  vHalve((struct EVECTORFX *)&v20);
  vHalve((struct EVECTORFX *)&v21);
  x = v20.x;
  if ( v20.x < 0 )
    x = -v20.x;
  y = v20.y;
  if ( v20.y < 0 )
    y = -v20.y;
  v5 = v21.x;
  if ( v21.x < 0 )
    v5 = -v21.x;
  v6 = v21.y;
  if ( v21.y < 0 )
    v6 = -v21.y;
  if ( ((x | y | v5 | v6) & 0xFFFFF000) != 0 )
    return 0LL;
  v7 = v20.x * v21.y;
  v8 = v20.x * v20.x + v20.y * v20.y;
  v9 = v20.y * v21.x;
  v10 = v21.x * v21.x + v21.y * v21.y;
  if ( v8 > v10 )
  {
    if ( 16LL * v8 < (v7 - v9) * (__int64)(v7 - v9) )
      return 0LL;
    v12 = v20;
  }
  else
  {
    if ( 16LL * v10 < (v9 - v7) * (__int64)(v9 - v7) )
      return 0LL;
    v12 = v21;
    v8 = v21.x * v21.x + v21.y * v21.y;
  }
  v23 = v12;
  v13 = 8;
  if ( v8 >= 64 )
  {
    v15 = v23.y;
    v14 = v23.x;
  }
  else
  {
    v14 = 8;
    v23 = (struct _POINTFIX)8LL;
    v15 = 0;
  }
  v16 = v15;
  if ( v15 < 0 )
    v16 = -v15;
  if ( v16 <= v14 )
  {
    v13 = -8;
    goto LABEL_23;
  }
  v18 = v14;
  if ( v14 < 0 )
    v18 = -v14;
  if ( v18 <= -v15 )
  {
    v17 = -8;
    v22.x = -8;
    v13 = 0;
    goto LABEL_24;
  }
  v19 = v15;
  if ( v15 < 0 )
    v19 = -v15;
  if ( v19 <= -v14 )
  {
LABEL_23:
    v17 = 0;
    v22.x = 0;
LABEL_24:
    v22.y = v13;
    goto LABEL_25;
  }
  v17 = 8;
  v22 = (struct _POINTFIX)8LL;
  v13 = 0;
LABEL_25:
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  WIDEPATHOBJ::vAddPoint(this, &v23);
  WIDEPATHOBJ::vAddPoint(this, &v22);
  v23.x = -v14;
  v23.y = -v15;
  v22.x = -v17;
  v22.y = -v13;
  WIDEPATHOBJ::vAddPoint(this, &v23);
  WIDEPATHOBJ::vAddPoint(this, &v22);
  WIDEPATHOBJ::vEndFigure(this);
  return 1LL;
}
