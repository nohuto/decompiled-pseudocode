/*
 * XREFs of ?vLoadAndConvertRGB32ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02C04E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB32ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned int *v4; // r10
  unsigned __int8 *v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  signed __int64 v9; // r8
  unsigned int v10; // [rsp+18h] [rbp+18h]

  v4 = a1;
  v5 = &a2[4 * a3];
  v6 = a4;
  v7 = 0LL;
  v8 = (unsigned __int64)(4 * v6 + 3) >> 2;
  if ( v5 > &v5[4 * v6] )
    v8 = 0LL;
  if ( v8 )
  {
    HIBYTE(v10) = -1;
    v9 = v5 - (unsigned __int8 *)a1;
    do
    {
      ++v7;
      BYTE2(v10) = *(unsigned int *)((char *)v4 + v9);
      BYTE1(v10) = BYTE1(*(unsigned int *)((char *)v4 + v9));
      LOBYTE(v10) = BYTE2(*(unsigned int *)((char *)v4 + v9));
      *v4++ = v10;
    }
    while ( v7 != v8 );
  }
}
