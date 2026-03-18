/*
 * XREFs of ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC42C
 * Callers:
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C00CB9B0 (-bValid@WIDENER@@QEAAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC3EC (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02C861C (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WIDEPATHOBJ::bValid(WIDEPATHOBJ *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 1) )
    return *((_DWORD *)this + 32) == 0;
  return result;
}
