/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00CC04C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C00CC3A0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC3EC (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00CC494 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  int v4; // ebx
  int v5; // r8d
  __int64 v6; // rax
  struct _POINTFIX *v7; // rbx
  struct _POINTFIX *v8; // rsi
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 < 576 )
  {
    v4 = 0;
  }
  else if ( v3 < 1600 )
  {
    v4 = 1;
  }
  else if ( v3 >= 3136 )
  {
    v4 = v3 >= 5184 ? (v3 >= 7744) + 4 : 3;
  }
  else
  {
    v4 = 2;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v6 = 2LL * v4;
  v7 = (struct _POINTFIX *)*(&WIDEPENOBJ::ahob + 2 * v4);
  v8 = &v7[*((unsigned int *)&WIDEPENOBJ::ahob + 2 * v6 + 2)];
  while ( v7 < v8 )
    WIDEPATHOBJ::vAddPoint(this, v7++, v5);
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 40) = 1;
  return result;
}
