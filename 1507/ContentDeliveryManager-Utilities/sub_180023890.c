/*
 * XREFs of sub_180023890 @ 0x180023890
 * Callers:
 *     sub_180023A78 @ 0x180023A78 (sub_180023A78.c)
 *     sub_180023B7C @ 0x180023B7C (sub_180023B7C.c)
 * Callees:
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_18002340C @ 0x18002340C (sub_18002340C.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     unknown_libname_10 @ 0x180025554 (unknown_libname_10.c)
 *     sub_1800255A0 @ 0x1800255A0 (sub_1800255A0.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180023890(__int64 a1, int a2, float a3)
{
  __int16 v5; // ax
  __int16 v6; // si
  int v7; // r13d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  char *v11; // r12
  float *v12; // rcx
  float v13; // xmm0_4
  __int64 i; // rax
  float v15; // xmm0_4
  float v17; // [rsp+20h] [rbp-40h] BYREF
  __int16 v18; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h]
  float v20[4]; // [rsp+30h] [rbp-30h] BYREF

  if ( a2 > 0 )
  {
    v20[0] = a3 * *(float *)a1;
    v5 = unknown_libname_10(v20);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( v5 == 2 )
        sub_180025520(1LL);
      *(float *)a1 = v20[0];
      if ( v6 > 0 && a2 > 1 )
        *(_DWORD *)(a1 + 4) = 0;
      return a1;
    }
    *(_DWORD *)a1 = 0;
  }
  v7 = 0;
  v8 = 1;
  if ( a2 > 0 )
  {
    v9 = 0LL;
    v10 = 1LL;
    v19 = 0LL;
    v11 = (char *)v20 - a1;
    do
    {
      if ( v8 < 4 )
      {
        v12 = (float *)(a1 + 4 * (v10 + v9));
        while ( v8 + v7 < a2 )
        {
          v13 = *v12;
          if ( *v12 == 0.0 )
            break;
          *v12 = 0.0;
          ++v8;
          ++v10;
          *(float *)((char *)v12++ + (_QWORD)v11) = v13 * a3;
          if ( v8 >= 4 )
            goto LABEL_18;
        }
        v20[v10] = 0.0;
        v10 = 8LL;
        v8 = 8;
      }
LABEL_18:
      if ( v20[0] == 0.0 )
        break;
      v17 = v20[0];
      sub_18002567C(&v18, &v17);
      sub_1800255A0(&v17, 12LL);
      sub_180023230((unsigned __int16 *)&v17, v18);
      sub_18002340C(a1, a2, v17);
      sub_18002340C(a1, a2, v20[0] - v17);
      for ( i = 1LL; i < v10; ++i )
      {
        v15 = v20[i];
        v20[i - 1] = v15;
        if ( v15 == 0.0 )
          break;
      }
      ++v7;
      v9 = v19 + 1;
      v11 -= 4;
      --v8;
      ++v19;
      --v10;
    }
    while ( v7 < a2 );
  }
  return a1;
}
