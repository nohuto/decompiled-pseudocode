/*
 * XREFs of ExpandSbitToBytePerPixel @ 0x1C02D95F8
 * Callers:
 *     GetSbitComponent @ 0x1C02D9864 (GetSbitComponent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandSbitToBytePerPixel(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned __int16 v9; // r14
  unsigned __int16 v14; // r13
  char v15; // dl
  unsigned __int16 v16; // r12
  __int16 v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // r10
  __int64 v24; // r15
  _BYTE *v25; // rdi
  _BYTE *v26; // r11
  __int16 v27; // si
  unsigned __int16 v28; // r8
  bool v29; // zf
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]
  unsigned __int16 v33; // [rsp+70h] [rbp+28h]

  v9 = a1;
  v14 = (1 << a5) - 1;
  if ( !a1 || !a2 )
    return 0LL;
  v15 = 2;
  if ( a5 == 2 )
  {
    v16 = 3;
    v17 = 2 * ((a2 - 1) & 3);
    goto LABEL_9;
  }
  if ( a5 == 4 )
  {
    v16 = 15;
    v15 = 1;
    v17 = 4 * ((a2 - 1) & 1);
    goto LABEL_9;
  }
  if ( a5 != 8 )
    return 0LL;
  v16 = 255;
  v15 = 0;
  v17 = 0;
LABEL_9:
  v31 = a4;
  v18 = (unsigned int)a1 - 1;
  v19 = v18 * a4;
  if ( v19 <= 0xFFFFFFFF )
  {
    v20 = v19 + a2;
    if ( v20 >= (unsigned int)v19 && v20 <= a8 )
    {
      v32 = a3;
      v21 = v18 * a3;
      if ( v21 <= 0xFFFFFFFF && (unsigned int)v21 <= a6 )
      {
        v22 = a7 + a6;
        v23 = (_BYTE *)(a7 + (v9 - 1) * a3 + ((__int64)(a2 - 1) >> v15));
        v24 = a2 - 1 + a9 + (v9 - 1) * a4;
        while ( 1 )
        {
          v25 = (_BYTE *)v24;
          v26 = v23;
          v27 = v17;
          if ( (unsigned __int64)v23 >= v22 || (unsigned __int64)v23 < a7 )
            break;
          v33 = a2;
          v28 = a2;
          *v23 >>= 8 - v17 - a5;
          if ( a2 )
          {
            while ( 1 )
            {
              if ( *v25 )
              {
                v28 = v33;
                *v25 = v14 - (v14 - (unsigned __int8)*v25) * (v16 & (v14 - (unsigned __int8)*v26)) / v14;
              }
              else
              {
                *v25 = v16 & *v26;
              }
              v22 = a7 + a6;
              if ( (unsigned __int64)v26 >= v22 || (unsigned __int64)v26 < a7 )
                return 6656LL;
              --v25;
              *v26 >>= a5;
              if ( !v27 )
              {
                v27 = 8;
                --v26;
              }
              v27 -= a5;
              v29 = v28-- == 1;
              v33 = v28;
              if ( v29 )
                goto LABEL_28;
            }
          }
          v22 = a7 + a6;
LABEL_28:
          v24 -= v31;
          v23 -= v32;
          if ( !--v9 )
            return 0LL;
        }
      }
    }
  }
  return 6656LL;
}
