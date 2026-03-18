/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CB4A8 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C00CA900 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00CC04C (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC42C (-bValid@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A3D8 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A52C (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C011A668 (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall WIDEPENOBJ::bPolygonizePen(WIDEPENOBJ *this, struct EXFORMOBJ *a2, unsigned int a3)
{
  FIX x; // ecx
  FIX y; // edx
  FIX v6; // eax
  FIX v7; // r8d
  int v9; // eax
  int v10; // ebx
  int v11; // r11d
  int v12; // r10d
  int v13; // r9d
  struct _POINTFIX v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  struct _POINTFIX v16; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-38h]
  int v18; // [rsp+3Ch] [rbp-34h]
  int v19; // [rsp+40h] [rbp-30h]
  int v20; // [rsp+44h] [rbp-2Ch]
  __int64 v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+54h] [rbp-1Ch]
  int v24; // [rsp+58h] [rbp-18h]
  int v25; // [rsp+5Ch] [rbp-14h]
  int v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+64h] [rbp-Ch]

  LODWORD(v15) = 0;
  v14 = (struct _POINTFIX)a3;
  HIDWORD(v15) = -a3;
  EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v14, (struct _VECTORFX *)&v14, 2uLL);
  x = v14.x;
  y = v14.y;
  if ( v14 == __PAIR64__(-(int)v15, HIDWORD(v15)) || v14 == __PAIR64__(v15, -HIDWORD(v15)) )
  {
    v6 = v14.x;
    if ( v14.x < 0 )
      v6 = -v14.x;
    v7 = v14.y;
    if ( v14.y < 0 )
      v7 = -v14.y;
    if ( v6 <= v7 )
    {
      if ( v14.y < 0 )
        y = -v14.y;
      x = y;
    }
    else if ( v14.x < 0 )
    {
      x = -v14.x;
    }
    if ( x < 104 )
    {
      if ( (unsigned int)WIDEPENOBJ::bHobbyize(this, (struct EVECTORFX *const)&v14) )
        return 1LL;
      if ( !(unsigned int)WIDEPATHOBJ::bValid(this) )
        return 0LL;
    }
  }
  if ( (unsigned int)WIDEPENOBJ::bThicken(this, &v14) )
    return 1LL;
  if ( !(unsigned int)WIDEPATHOBJ::bValid(this) )
    return 0LL;
  LOBYTE(v9) = bTurnLeftRandom((struct EVECTORFX *)&v14, (struct EVECTORFX *)&v15);
  if ( !v9 )
  {
    LODWORD(v15) = -(int)v15;
    HIDWORD(v15) = -HIDWORD(v15);
  }
  vHalve((struct EVECTORFX *)&v14);
  vHalve((struct EVECTORFX *)&v15);
  v10 = v14.x - ((unsigned __int64)(1922922357LL * v14.x) >> 32);
  v11 = v14.y - ((unsigned __int64)(1922922357LL * v14.y) >> 32);
  v27 = -v14.y;
  v23 = HIDWORD(v15) - v11;
  v20 = v11 + HIDWORD(v15);
  v21 = v15;
  v12 = v15 - ((unsigned __int64)(1922922357LL * (int)v15) >> 32);
  v16 = v14;
  v13 = HIDWORD(v15) - ((unsigned __int64)(1922922357LL * SHIDWORD(v15)) >> 32);
  v18 = v13 + v14.y;
  v26 = -v14.x;
  v25 = v13 - v14.y;
  v24 = v12 - v14.x;
  v22 = v15 - v10;
  v19 = v15 + v10;
  v17 = v14.x + v12;
  return WIDEPENOBJ::bPenFlatten(this, &v16);
}
