/*
 * XREFs of _FDscale @ 0x180024DB0
 * Callers:
 *     _Stofx @ 0x1800235F0 (_Stofx.c)
 *     _FXp_addh @ 0x180024F8C (_FXp_addh.c)
 *     _FXp_mulh @ 0x180025410 (_FXp_mulh.c)
 *     _FXp_setw @ 0x180025784 (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x180026FB0 (_FDnorm.c)
 */

__int64 __fastcall FDscale(unsigned __int16 *a1, int a2)
{
  __int16 v4; // cx
  __int64 result; // rax
  float Float; // xmm0_4
  int v7; // r10d
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // bp
  unsigned __int16 v10; // si
  __int16 v11; // r10
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // cx

  v4 = (unsigned __int8)(a1[1] >> 7);
  if ( v4 == 255 )
  {
    if ( (a1[1] & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a1 )
      return 2LL;
    return result;
  }
  if ( !v4 )
  {
    v4 = FDnorm(a1);
    if ( v4 > 0 )
      return 0LL;
  }
  if ( a2 <= 0 || 255 - v4 > a2 )
  {
    if ( -v4 < a2 )
    {
      a1[1] &= 0x807Fu;
      a1[1] |= (v4 + (_WORD)a2) << 7;
      return 0xFFFFFFFFLL;
    }
    v7 = v4 + a2 - 1;
    v8 = a1[1] & 0x7F | 0x80;
    v9 = a1[1] & 0x8000;
    a1[1] = v8;
    if ( (unsigned int)(v7 + 24) > 0x17 )
    {
      a1[1] = v9;
      *a1 = 0;
    }
    else
    {
      v10 = 0;
      if ( (__int16)v7 <= -16 )
      {
        v10 = *a1;
        LOWORD(v7) = v7 + 16;
        *a1 = v8;
        a1[1] = 0;
      }
      v11 = -(__int16)v7;
      if ( v11 )
      {
        v12 = a1[1];
        v10 = (v10 != 0) | (unsigned __int16)(*a1 << (16 - v11));
        v13 = (v12 << (16 - v11)) | (*a1 >> v11);
        a1[1] = v12 >> v11;
        *a1 = v13;
      }
      a1[1] |= v9;
      v14 = a1[1];
      if ( (v10 > 0x8000u || v10 == 0x8000 && (*(_BYTE *)a1 & 1) != 0) && (*a1)++ == 0xFFFF )
      {
        a1[1] = v14 + 1;
        return 0xFFFFFFFFLL;
      }
      if ( v14 != v9 || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  Float = FInf._Float;
  if ( (a1[1] & 0x8000u) != 0 )
    LODWORD(Float) = LODWORD(FInf._Float) ^ _xmm;
  *(float *)a1 = Float;
  return 1LL;
}
