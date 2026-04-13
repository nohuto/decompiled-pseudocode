/*
 * XREFs of sub_180019320 @ 0x180019320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 */

__int64 __fastcall sub_180019320(__int64 a1, int a2, int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18000E724(a1 + 8);
  return (unsigned int)a3;
}
