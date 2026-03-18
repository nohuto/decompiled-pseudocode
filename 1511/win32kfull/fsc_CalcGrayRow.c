/*
 * XREFs of fsc_CalcGrayRow @ 0x1C00FB530
 * Callers:
 *     fsc_CalcGrayMap @ 0x1C0106668 (fsc_CalcGrayMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_CalcGrayRow(char **a1)
{
  char *v1; // r10
  char *v2; // rbx
  __int16 v4; // di
  __int16 v5; // cx
  __int16 v6; // si
  __int16 v7; // r11
  unsigned __int16 v8; // r9
  __int16 v9; // dx
  char *i; // r10

  v1 = a1[1];
  v2 = *a1;
  v4 = *((_WORD *)a1 + 9);
  v5 = *((_WORD *)a1 + 10);
  v6 = 255 >> (8 - v4);
  v7 = 8 - v5;
  v8 = (unsigned __int16)*v2 >> v5;
  v9 = *((_WORD *)a1 + 8) - 1;
  *v1 += byte_1C02E85C0[v6 & v8];
  for ( i = v1 - 1; v9 > 0; --i )
  {
    v7 -= v4;
    if ( v7 )
    {
      v8 >>= v4;
    }
    else
    {
      --v2;
      v7 = 8;
      v8 = *v2;
    }
    --v9;
    *i += byte_1C02E85C0[v6 & v8];
  }
  return 0LL;
}
