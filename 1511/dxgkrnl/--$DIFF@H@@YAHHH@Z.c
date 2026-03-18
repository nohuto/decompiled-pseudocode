/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x1C000CD98
 * Callers:
 *     sub_1C00A07D0 @ 0x1C00A07D0 (sub_1C00A07D0.c)
 *     sub_1C00A1AD0 @ 0x1C00A1AD0 (sub_1C00A1AD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<int>(int a1, int a2)
{
  if ( a1 > a2 )
    return (unsigned int)(a1 - a2);
  else
    return (unsigned int)(a2 - a1);
}
