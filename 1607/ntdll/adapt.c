/*
 * XREFs of adapt @ 0x1800020C8
 * Callers:
 *     punycode_encode @ 0x180053550 (punycode_encode.c)
 *     punycode_decode @ 0x180056848 (punycode_decode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adapt(int a1, int a2, char a3)
{
  int v3; // r9d
  int v4; // r8d
  int i; // r8d

  v3 = 0;
  if ( a3 )
    v4 = a1 / 700;
  else
    v4 = a1 / 2;
  for ( i = v4 / a2 + v4; i > 455; i /= 35 )
    v3 += 36;
  return (unsigned int)(v3 + 36 * i / (i + 38));
}
