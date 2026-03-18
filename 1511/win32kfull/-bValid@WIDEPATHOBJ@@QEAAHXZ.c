/*
 * XREFs of ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0131F70
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C013103C (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C0131C6C (-bValid@WIDENER@@QEAAHXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0131F30 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02C7920 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
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
