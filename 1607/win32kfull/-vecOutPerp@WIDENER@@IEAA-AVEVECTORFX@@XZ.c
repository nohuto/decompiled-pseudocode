/*
 * XREFs of ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C001399C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00135B4 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CAC80 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C02CAEB8 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0013750 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecOutPerp(WIDENER *a1, _QWORD *a2)
{
  struct LINEDATA *v4; // rdx
  _QWORD *result; // rax

  v4 = (struct LINEDATA *)*((_QWORD *)a1 + 89);
  if ( (*(_DWORD *)v4 & 4) == 0 )
    WIDENER::vVecPerpCompute(a1, v4);
  result = a2;
  *a2 = *(_QWORD *)(*((_QWORD *)a1 + 89) + 64LL);
  return result;
}
