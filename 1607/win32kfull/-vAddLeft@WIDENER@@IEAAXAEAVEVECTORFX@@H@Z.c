/*
 * XREFs of ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C0013980
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00135B4 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CAC80 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692), a2, 1);
}
