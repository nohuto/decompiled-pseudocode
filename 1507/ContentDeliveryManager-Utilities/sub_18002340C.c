/*
 * XREFs of sub_18002340C @ 0x18002340C
 * Callers:
 *     sub_180023768 @ 0x180023768 (sub_180023768.c)
 *     sub_180023890 @ 0x180023890 (sub_180023890.c)
 *     sub_180023B7C @ 0x180023B7C (sub_180023B7C.c)
 * Callees:
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     unknown_libname_10 @ 0x180025554 (unknown_libname_10.c)
 *     sub_1800255A0 @ 0x1800255A0 (sub_1800255A0.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 */

__int64 __fastcall sub_18002340C(__int64 a1, int a2, float a3)
{
  __int64 v4; // rsi
  __int16 v5; // ax
  __int16 v6; // ax
  int v7; // r12d
  int v8; // ebx
  __int64 v9; // r15
  float *v10; // r13
  float *v11; // r14
  __int16 v12; // ax
  float v13; // xmm1_4
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  __int64 i; // rdx
  float v18; // xmm1_4
  int v19; // ecx
  float *v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rdx
  float v23; // xmm0_4
  int v24; // ecx
  float *v25; // rax
  float v26; // xmm0_4
  int v27; // r12d
  unsigned __int16 *v28; // rbx
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v32; // [rsp+20h] [rbp-28h] BYREF
  int v33; // [rsp+24h] [rbp-24h]
  __int16 v34; // [rsp+90h] [rbp+48h] BYREF
  __int16 v35; // [rsp+98h] [rbp+50h] BYREF
  float v36; // [rsp+A0h] [rbp+58h] BYREF
  float v37; // [rsp+A8h] [rbp+60h] BYREF

  v36 = a3;
  v37 = a3;
  v4 = a2;
  if ( !a2 )
    return a1;
  v5 = sub_18002567C(&v34, &v37);
  if ( v5 <= 0 )
  {
    if ( v5 >= 0 )
      return a1;
    v7 = 256;
    v8 = 0;
    if ( (int)v4 <= 0 )
      return a1;
    v9 = 0LL;
    v10 = (float *)(a1 - 4);
    v11 = (float *)a1;
    while ( 1 )
    {
      v32 = *v11;
      v12 = sub_18002567C(&v35, &v32);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        *(float *)(a1 + 4LL * v8) = v36;
        if ( v8 + 1 < (int)v4 )
          *(_DWORD *)(a1 + 4LL * v8 + 4) = 0;
        return a1;
      }
      v13 = v36;
      v14 = v35 - v34;
      if ( v14 > -12 || v36 == 0.0 )
      {
        if ( v14 < 12 || v36 == 0.0 )
        {
          v18 = v36 + *v11;
          *v11 = v18;
          if ( v18 == 0.0 )
          {
            v19 = v8;
            v20 = v11;
            do
            {
              ++v19;
              ++v20;
              if ( v19 >= (int)v4 )
                break;
              v21 = *v20;
              *(v20 - 1) = *v20;
            }
            while ( v21 != 0.0 );
            *(_DWORD *)(a1 + 4 * v4 - 4) = 0;
            v18 = *v11;
            if ( *v11 == 0.0 )
              return a1;
          }
          v36 = v18;
          sub_18002567C(&v34, &v36);
          v22 = (unsigned int)v34;
          if ( v7 - 12 < (int)v22 )
          {
            LOWORD(v22) = v34 - v7 + 12;
            sub_1800255A0(&v36, v22);
            sub_180023230((unsigned __int16 *)&v36, v34);
            v23 = *v11 - v36;
            *v11 = v23;
            if ( v23 == 0.0 )
            {
              v24 = v8;
              v25 = v11;
              do
              {
                ++v24;
                ++v25;
                if ( v24 >= (int)v4 )
                  break;
                v26 = *v25;
                *(v25 - 1) = *v25;
              }
              while ( v26 != 0.0 );
              *(_DWORD *)(a1 + 4 * v4 - 4) = 0;
            }
            --v9;
            --v10;
            --v11;
            if ( --v8 )
            {
              v37 = *v10;
              sub_18002567C(&v35, &v37);
              v7 = v35;
            }
            else
            {
              v7 = 256;
            }
            goto LABEL_50;
          }
          v27 = v8 + 1;
          if ( v8 + 1 == (_DWORD)v4 )
            return a1;
          v36 = *v11;
          v28 = (unsigned __int16 *)(a1 + 4LL * v8);
          sub_18002567C(&v35, v28);
          sub_1800255A0(v28, 12LL);
          sub_180023230(v28, v35);
          v29 = *v11;
          v30 = v36 - v29;
          v33 = v35;
          v36 = v36 - v29;
          if ( v36 == 0.0 )
            v37 = v29;
          else
            v37 = v30;
          sub_18002567C(&v34, &v37);
          v8 = v27;
          v7 = v33;
        }
        else
        {
          v7 = v35;
          ++v8;
        }
        ++v9;
        ++v10;
        ++v11;
      }
      else
      {
        v15 = v8;
        v16 = v9;
        do
        {
          ++v15;
          ++v16;
        }
        while ( v16 < v4 && *(float *)(a1 + 4 * v16) != 0.0 );
        if ( v15 >= (int)v4 - 1 )
        {
          if ( v15 == (_DWORD)v4 )
            --v15;
        }
        else
        {
          ++v15;
        }
        for ( i = v15; i > v9; --i )
          *(_DWORD *)(a1 + 4 * i) = *(_DWORD *)(a1 + 4 * i - 4);
        v36 = 0.0;
        *v11 = v13;
      }
LABEL_50:
      if ( v8 >= (int)v4 )
        return a1;
    }
  }
  if ( v5 == 2 || (v6 = unknown_libname_10(a1), v6 <= 0) )
  {
    *(float *)a1 = v36;
  }
  else if ( v6 != 2 && ((HIWORD(v36) ^ *(_WORD *)(a1 + 2)) & 0x8000u) != 0 )
  {
    sub_180025520(1LL);
    *(_DWORD *)a1 = dword_18003A020;
    if ( (int)v4 > 1 )
      *(_DWORD *)(a1 + 4) = 0;
  }
  return a1;
}
