/*
 * XREFs of _Stofx @ 0x180054160
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800267D0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800267D0.c)
 * Callees:
 *     _Stopfx @ 0x1800553BC (_Stopfx.c)
 *     _Stoflt @ 0x1800554F4 (_Stoflt.c)
 *     _Stoxflt @ 0x18005578C (_Stoxflt.c)
 *     _FDscale @ 0x180055AA0 (_FDscale.c)
 *     _FXp_addx @ 0x180055FC8 (_FXp_addx.c)
 *     _FXp_mulx @ 0x1800562D8 (_FXp_mulx.c)
 *     _FXp_setn @ 0x1800563DC (_FXp_setn.c)
 *     _FXp_setw @ 0x180056464 (_FXp_setw.c)
 *     _FDtento @ 0x18005651C (_FDtento.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__m128 __fastcall Stofx(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // edi
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 i; // rdi
  double v14; // xmm0_8
  int v15; // eax
  __int64 v16; // r14
  __int64 j; // rdi
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  float v21[4]; // [rsp+48h] [rbp-41h] BYREF
  float v22[4]; // [rsp+58h] [rbp-31h] BYREF
  float v23[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE Src[24]; // [rsp+78h] [rbp-11h] BYREF

  v5 = a1;
  v20 = a1;
  v8 = Stopfx(&v20);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = Stoflt(v5, v20, a2, (unsigned int)&v18, 1);
      v12 = v11;
      FXp_setw(v22, 3LL);
      if ( (_DWORD)v12 )
      {
        FXp_setn(v21);
        for ( i = 1LL; i < v12; ++i )
        {
          FXp_mulx(v21, Src);
          FXp_setn(v23);
          FXp_addx(v21);
        }
      }
      else
      {
        FXp_setw(v21, 3LL);
      }
      FDtento(v21);
      break;
    case 2u:
      v14 = Stoxflt(v5, v20, a2, (unsigned int)&v18, 1);
      v16 = v15;
      FXp_setw(v23, 3LL);
      if ( (_DWORD)v16 )
      {
        FXp_setn(v21);
        for ( j = 1LL; j < v16; ++j )
        {
          FXp_mulx(v21, Src);
          FXp_setn(v22);
          FXp_addx(v21);
        }
      }
      else
      {
        FXp_setw(v21, 3LL);
      }
      FDtento(v21);
      v19 = LODWORD(v14);
      FDscale(&v19, v18);
      result = (__m128)v19;
      break;
    case 3u:
      result = (__m128)LODWORD(FInf._Float);
      break;
    case 4u:
      result = (__m128)LODWORD(FNan._Float);
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)_xmm);
  return result;
}
