/*
 * XREFs of or_first_4_wide_rotated_no_last @ 0x1C02D5980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall or_first_4_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 *v7; // r10
  __int64 v8; // r11
  _BYTE *v9; // r8
  int v10; // eax
  int v11; // edx
  unsigned int v12; // edx

  result = (unsigned int)(3 * a1);
  v7 = &a4[(int)result];
  if ( a4 != v7 )
  {
    v8 = a3;
    v9 = (_BYTE *)(a5 + 2);
    do
    {
      v10 = a4[2];
      v11 = (a4[1] | (*a4 << 8)) << 8;
      a4 += 3;
      v12 = (v10 | (unsigned int)v11) << 8 >> a2;
      v9[1] = v12;
      *(v9 - 2) |= HIBYTE(v12);
      *(v9 - 1) = BYTE2(v12);
      result = v12 >> 8;
      *v9 = BYTE1(v12);
      v9 += v8;
    }
    while ( a4 != v7 );
  }
  return result;
}
