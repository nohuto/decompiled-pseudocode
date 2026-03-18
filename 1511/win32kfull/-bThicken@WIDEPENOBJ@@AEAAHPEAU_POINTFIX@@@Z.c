/*
 * XREFs of ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C0131364
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C013103C (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0131EE4 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0131F30 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0131FD8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C013249C (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
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
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  struct _POINTFIX v24; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTFIX v25; // [rsp+28h] [rbp-8h] BYREF
  struct _POINTFIX v26; // [rsp+68h] [rbp+38h] BYREF
  struct _POINTFIX v27; // [rsp+70h] [rbp+40h] BYREF

  v24 = *a2;
  v25 = a2[1];
  vHalve((struct EVECTORFX *)&v24);
  vHalve((struct EVECTORFX *)&v25);
  x = v24.x;
  if ( v24.x < 0 )
    x = -v24.x;
  y = v24.y;
  if ( v24.y < 0 )
    y = -v24.y;
  v5 = v25.x;
  if ( v25.x < 0 )
    v5 = -v25.x;
  v6 = v25.y;
  if ( v25.y < 0 )
    v6 = -v25.y;
  if ( ((x | y | v5 | v6) & 0xFFFFF000) != 0 )
    return 0LL;
  v7 = v24.x * v25.y;
  v8 = v24.x * v24.x + v24.y * v24.y;
  v9 = v24.y * v25.x;
  v10 = v25.x * v25.x + v25.y * v25.y;
  if ( v8 > v10 )
  {
    if ( 16LL * v8 < (v7 - v9) * (__int64)(v7 - v9) )
      return 0LL;
    v12 = v24;
  }
  else
  {
    if ( 16LL * v10 < (v9 - v7) * (__int64)(v9 - v7) )
      return 0LL;
    v12 = v25;
    v8 = v25.x * v25.x + v25.y * v25.y;
  }
  v27 = v12;
  v13 = 8;
  if ( v8 >= 64 )
  {
    v15 = v27.y;
    v14 = v27.x;
  }
  else
  {
    v14 = 8;
    v27 = (struct _POINTFIX)8LL;
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
  v22 = v14;
  if ( v14 < 0 )
    v22 = -v14;
  if ( v22 <= -v15 )
  {
    v17 = -8;
    v26.x = -8;
    v13 = 0;
    goto LABEL_24;
  }
  v23 = v15;
  if ( v15 < 0 )
    v23 = -v15;
  if ( v23 <= -v14 )
  {
LABEL_23:
    v17 = 0;
    v26.x = 0;
LABEL_24:
    v26.y = v13;
    goto LABEL_25;
  }
  v17 = 8;
  v26 = (struct _POINTFIX)8LL;
  v13 = 0;
LABEL_25:
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  WIDEPATHOBJ::vAddPoint(this, &v27, v18);
  WIDEPATHOBJ::vAddPoint(this, &v26, v19);
  v27.x = -v14;
  v27.y = -v15;
  v26.x = -v17;
  v26.y = -v13;
  WIDEPATHOBJ::vAddPoint(this, &v27, v20);
  WIDEPATHOBJ::vAddPoint(this, &v26, v21);
  WIDEPATHOBJ::vEndFigure(this);
  return 1LL;
}
