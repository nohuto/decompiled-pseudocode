/*
 * XREFs of ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0131D10
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01318E0 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C02C7228 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02C7580 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0131A7C (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecInPerp(WIDENER *a1, _QWORD *a2)
{
  struct LINEDATA *v4; // rdx
  _QWORD *result; // rax

  v4 = (struct LINEDATA *)*((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 4) == 0 )
    WIDENER::vVecPerpCompute(a1, v4);
  result = a2;
  *a2 = *(_QWORD *)(*((_QWORD *)a1 + 88) + 64LL);
  return result;
}
