/*
 * XREFs of KeBugCheckUnicodeToAnsi @ 0x1402026A4
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall KeBugCheckUnicodeToAnsi(unsigned __int16 *a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  char *v4; // r8
  _BYTE *i; // rcx
  char v6; // al

  v3 = *a1 >> 1;
  if ( v3 >= a3 )
    v3 = a3 - 1;
  v4 = (char *)*((_QWORD *)a1 + 1);
  for ( i = a2; v3; --v3 )
  {
    v6 = *v4;
    v4 += 2;
    *i++ = v6;
  }
  *i = 0;
  return a2;
}
