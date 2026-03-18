/*
 * XREFs of ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0015A94
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0012F38 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00135B4 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CAC80 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall bTurnLeftRandom(struct EVECTORFX *a1, struct EVECTORFX *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // sf
  bool v6; // of
  __int64 v8; // rcx

  v2 = *((int *)a1 + 1);
  v3 = *(int *)a1;
  v4 = *((int *)a2 + 1);
  if ( (int)(v2 ^ v4 ^ v3 ^ *(_DWORD *)a2) >= 0 )
  {
    v8 = v2 * *(int *)a2;
    v6 = __OFSUB__(v4 * v3, v8);
    v5 = v4 * v3 - v8 < 0;
  }
  else
  {
    v6 = 0;
    v5 = (int)(v4 ^ v3) < 0;
  }
  return v5 ^ v6;
}
