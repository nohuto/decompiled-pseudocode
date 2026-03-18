/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00CC494
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00CC04C (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C00CC2F4 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A52C (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // r8

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)v2 >= *((_QWORD *)this + 18) )
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, 0LL, 0);
  }
  else
  {
    *v2 = *a2;
    *((_QWORD *)this + 17) += 8LL;
  }
}
