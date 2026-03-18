/*
 * XREFs of fsc_OverscaleToSubPixel @ 0x1C00BF2EC
 * Callers:
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_OverscaleToSubPixel(__int16 *a1, __int64 a2, __int16 *a3)
{
  unsigned int v3; // r11d
  __int16 *v4; // r15
  unsigned int v5; // r10d
  __int64 result; // rax
  char v7; // r13
  int v8; // edx
  int v9; // r9d
  _BYTE *v10; // rsi
  unsigned __int8 *v11; // rbx
  unsigned __int8 *v12; // r12
  _BYTE *v13; // rsi
  unsigned __int8 *v14; // r14
  __int64 v15; // rbp
  char v16; // bl
  char v17; // cl
  unsigned __int16 v18; // di
  __int16 v19; // r9
  __int16 v21; // [rsp+48h] [rbp+10h]
  char v22; // [rsp+50h] [rbp+18h]

  v3 = 0;
  v4 = a1;
  v19 = a1[4] % 6 + (a1[4] % 6 < 0 ? 6 : 0);
  v5 = a3[6] - a3[4];
  result = (unsigned int)a3[2];
  if ( a3[1] != (_DWORD)result )
  {
    v7 = v19 + 2;
    v22 = v19 + 2;
    v8 = (14 - v19) % 8;
    v21 = v8;
    do
    {
      LOWORD(v9) = v8;
      v10 = (_BYTE *)(*((_QWORD *)a3 + 5) + v3 * *a3);
      v11 = (unsigned __int8 *)(*((_QWORD *)v4 + 5) + v3 * *v4);
      v12 = &v11[*v4];
      *v10 = ajRGBToWeight222[(unsigned __int64)*v11 >> v7];
      v13 = v10 + 1;
      if ( v5 > 1 )
      {
        v14 = v11 + 1;
        v15 = v5 - 1;
        do
        {
          v16 = 0;
          v17 = 2 - v9;
          if ( (__int16)(2 - v9) < 0 )
          {
            v17 = 0;
            v16 = v9 - 2;
          }
          v18 = (unsigned __int8)((unsigned __int8)(*(v14 - 1) & ajRGBToWeightMask[(unsigned __int16)v9]) >> v17) << v16;
          if ( v14 < v12 )
            v18 += (unsigned __int8)(*v14 >> (10 - v9));
          LOWORD(v9) = v9 + 6;
          *v13++ = ajRGBToWeight222[v18];
          if ( (unsigned __int16)v9 >= 8u )
          {
            ++v14;
            v9 = (unsigned __int16)v9 % 8;
          }
          --v15;
        }
        while ( v15 );
        v4 = a1;
        v7 = v22;
        LOWORD(v8) = v21;
      }
      ++v3;
      result = (unsigned int)a3[2];
    }
    while ( v3 < a3[1] - (int)result );
  }
  return result;
}
