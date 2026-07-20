/*
 * XREFs of sub_1400081A4 @ 0x1400081A4
 * Callers:
 *     sub_140007D9C @ 0x140007D9C (sub_140007D9C.c)
 *     sub_140009228 @ 0x140009228 (sub_140009228.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400081A4(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  char result; // al
  unsigned __int64 v4; // r8

  v2 = *a1;
  result = 0;
  v4 = *a2;
  if ( (unsigned __int64)*a1 > 0xFFFFFFFF000LL )
  {
    result = 1;
    v2 = 0xFFFFFFFF000LL;
  }
  if ( v4 > 0xFFFFFFFF000LL )
  {
    result = 1;
    v4 = 0xFFFFFFFF000LL;
  }
  if ( result )
  {
    *a1 = v2;
    *a2 = v4;
  }
  return result;
}
