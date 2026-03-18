/*
 * XREFs of ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C00CB9F8
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692), a2, 1);
}
