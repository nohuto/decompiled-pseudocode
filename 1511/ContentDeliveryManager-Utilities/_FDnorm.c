/*
 * XREFs of _FDnorm @ 0x180026FB0
 * Callers:
 *     _FDscale @ 0x180024DB0 (_FDscale.c)
 *     _FDunscale @ 0x1800271FC (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v1; // r11
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // r8

  v1 = a1[1] & 0x8000;
  v2 = 1;
  v3 = a1[1] & 0x7F;
  a1[1] = v3;
  if ( !v3 )
  {
    if ( !*a1 )
      goto LABEL_13;
    v2 = -15;
    a1[1] = *a1;
    *a1 = 0;
  }
  v4 = a1[1];
  if ( v4 < 0x80u )
  {
    v5 = *a1;
    do
    {
      v6 = (v5 >> 15) | (2 * v4);
      v5 *= 2;
      --v2;
      v4 = v6;
    }
    while ( v6 < 0x80u );
    a1[1] = v6;
    *a1 = v5;
  }
  v7 = a1[1];
  if ( v7 >= 0x100u )
  {
    v8 = *a1;
    do
    {
      ++v2;
      v8 = (v7 << 15) | (v8 >> 1);
      v7 >>= 1;
    }
    while ( v7 >= 0x100u );
    a1[1] = v7;
    *a1 = v8;
  }
  a1[1] &= 0x7Fu;
LABEL_13:
  a1[1] |= v1;
  return v2;
}
