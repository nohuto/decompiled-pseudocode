/*
 * XREFs of sub_180004970 @ 0x180004970
 * Callers:
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180004C1C @ 0x180004C1C (sub_180004C1C.c)
 * Callees:
 *     sub_180004ED0 @ 0x180004ED0 (sub_180004ED0.c)
 */

bool sub_180004970()
{
  char v0; // dl

  v0 = 0;
  if ( *(&hObject + 1) )
    return (unsigned __int8)sub_180004ED0(*(&hObject + 1), 0LL) != 0;
  return v0;
}
