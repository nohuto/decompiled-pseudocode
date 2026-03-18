/*
 * XREFs of ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0002754
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C02C84B4 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C00CB940 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecOutDraw(WIDENER *a1, _QWORD *a2)
{
  struct LINEDATA *v4; // rdx
  _QWORD *result; // rax

  v4 = (struct LINEDATA *)*((_QWORD *)a1 + 89);
  if ( (*(_DWORD *)v4 & 8) == 0 )
    WIDENER::vVecDrawCompute(a1, v4);
  result = a2;
  *a2 = *(_QWORD *)(*((_QWORD *)a1 + 89) + 72LL);
  return result;
}
