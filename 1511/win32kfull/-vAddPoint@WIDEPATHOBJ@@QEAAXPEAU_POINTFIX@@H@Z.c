/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0131FD8
 * Callers:
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C0131364 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C0131448 (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01318E0 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C0131E38 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02C7580 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
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
