/*
 * XREFs of sub_180004EB4 @ 0x180004EB4
 * Callers:
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 * Callees:
 *     sub_180004E78 @ 0x180004E78 (sub_180004E78.c)
 */

int __fastcall sub_180004EB4(__int64 a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 40);
  if ( result )
    return sub_180004E78(a1);
  return result;
}
