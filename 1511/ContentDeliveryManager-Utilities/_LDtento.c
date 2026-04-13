/*
 * XREFs of _LDtento @ 0x1800261A8
 * Callers:
 *     _Stoldx @ 0x180023F40 (_Stoldx.c)
 * Callees:
 *     _LXp_mulx @ 0x180025F60 (_LXp_mulx.c)
 *     _LXp_setw @ 0x180026090 (_LXp_setw.c)
 *     _LXp_getw @ 0x18002696C (_LXp_getw.c)
 *     _Xp_movx @ 0x1800269F8 (_Xp_movx.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall LDtento(long double *a1, int a2, _DWORD *a3)
{
  int v4; // ebx
  double v6; // xmm0_8
  double v7[3]; // [rsp+30h] [rbp-98h] BYREF
  double v8[3]; // [rsp+48h] [rbp-80h] BYREF
  char Src[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  if ( !a2 || *a1 == 0.0 )
  {
    LXp_getw(a1, 3LL);
  }
  else
  {
    if ( a2 <= 0 )
    {
      v4 = -a2;
      Xp_movx(v7, 3LL, &unk_18002D550);
    }
    else
    {
      LXp_setw((__int64)v7, 3, 10.0);
    }
    while ( 1 )
    {
      if ( (v4 & 1) != 0 )
        LXp_mulx(a1, 3, v7, 3, Src);
      v4 >>= 1;
      if ( !v4 )
        break;
      Xp_movx(v8, 3LL, v7);
      LXp_mulx(v7, 3, v8, 3, Src);
    }
    v6 = LXp_getw(a1, 3LL);
    if ( v6 == 0.0 || v6 == LInf._Double || v6 == COERCE_DOUBLE(*(_QWORD *)&LInf._Double ^ _xmm) )
    {
      *_errno() = 34;
      if ( a3 )
        *a3 |= 1u;
    }
  }
}
