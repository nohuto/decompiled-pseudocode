/*
 * XREFs of ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C00CA900
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall bTurnLeftRandom(struct EVECTORFX *a1, struct EVECTORFX *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  bool v6; // sf
  bool v7; // of

  v2 = *((int *)a1 + 1);
  v3 = *(int *)a1;
  v4 = *((int *)a2 + 1);
  if ( (int)(v2 ^ v4 ^ v3 ^ *(_DWORD *)a2) < 0 )
  {
    v7 = 0;
    v6 = (int)(v4 ^ v3) < 0;
  }
  else
  {
    v5 = v2 * *(int *)a2;
    v7 = __OFSUB__(v4 * v3, v5);
    v6 = v4 * v3 - v5 < 0;
  }
  return v6 ^ v7;
}
