/*
 * XREFs of or_all_1_wide_unrotated @ 0x1C00E9330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall or_all_1_wide_unrotated(int a1, __int64 a2, int a3, char *a4, _BYTE *a5)
{
  __int64 v5; // rdx
  char *v7; // rdx
  char result; // al

  v5 = a1;
  v7 = &a4[v5];
  do
  {
    result = *a4++;
    *a5 |= result;
    a5 += a3;
  }
  while ( a4 != v7 );
  return result;
}
