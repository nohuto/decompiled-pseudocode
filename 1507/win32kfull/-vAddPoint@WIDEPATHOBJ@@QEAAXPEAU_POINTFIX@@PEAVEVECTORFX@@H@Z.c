/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00CC444
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C00CB9F8 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C02C815C (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02C82EC (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C02C84B4 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  _DWORD *v4; // r11
  int v6; // ecx

  v4 = (_DWORD *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)v4 >= *((_QWORD *)this + 18) )
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, a3, a4);
  }
  else
  {
    if ( a4 )
    {
      *v4 = a2->x - *(_DWORD *)a3;
      v6 = a2->y - *((_DWORD *)a3 + 1);
    }
    else
    {
      *v4 = *(_DWORD *)a3 + a2->x;
      v6 = *((_DWORD *)a3 + 1) + a2->y;
    }
    *(_DWORD *)(*((_QWORD *)this + 17) + 4LL) = v6;
    *((_QWORD *)this + 17) += 8LL;
  }
}
