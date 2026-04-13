/*
 * XREFs of _Stodx @ 0x180054C14
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800266E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800266E0.c)
 * Callees:
 *     _Stopfx @ 0x1800553BC (_Stopfx.c)
 *     _Stoflt @ 0x1800554F4 (_Stoflt.c)
 *     _Stoxflt @ 0x18005578C (_Stoxflt.c)
 *     _Dscale @ 0x1800566F0 (_Dscale.c)
 *     _Xp_addx @ 0x180056CD4 (_Xp_addx.c)
 *     _Xp_mulx @ 0x180056FF8 (_Xp_mulx.c)
 *     _Xp_setn @ 0x180057100 (_Xp_setn.c)
 *     _Xp_setw @ 0x180057128 (_Xp_setw.c)
 *     _Dtento @ 0x180057240 (_Dtento.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__m128 __fastcall Stodx(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // edi
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 i; // rdi
  __int64 v14; // r8
  double v15; // xmm0_8
  int v16; // eax
  __int64 v17; // r14
  __int64 j; // rdi
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-79h] BYREF
  double v21; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v23[3]; // [rsp+44h] [rbp-65h]
  double v24[3]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v25[24]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE Src[48]; // [rsp+98h] [rbp-11h] BYREF

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
      *(double *)result.m128_u64 = Stoflt(v5, v20, a2, (unsigned int)&v22, 2);
      v12 = v11;
      Xp_setw(v25, 3LL);
      if ( (_DWORD)v12 )
      {
        Xp_setn(v24, 3LL, v23[0]);
        for ( i = 1LL; i < v12; ++i )
        {
          Xp_mulx(v24, Src);
          v14 = (unsigned int)v23[i];
          Xp_setn(v26, 3LL, v14);
          Xp_addx(v24);
        }
      }
      else
      {
        Xp_setw(v24, 3LL);
      }
      Dtento(v24);
      break;
    case 2u:
      v15 = Stoxflt(v5, v20, a2, (unsigned int)&v22, 2);
      v17 = v16;
      Xp_setw(v26, 3LL);
      if ( (_DWORD)v17 )
      {
        Xp_setn(v24, 3LL, v23[0]);
        for ( j = 1LL; j < v17; ++j )
        {
          Xp_mulx(v24, Src);
          v19 = (unsigned int)v23[j];
          Xp_setn(v25, 3LL, v19);
          Xp_addx(v24);
        }
      }
      else
      {
        Xp_setw(v24, 3LL);
      }
      Dtento(v24);
      v21 = v15;
      Dscale(&v21, v22);
      result = (__m128)*(unsigned __int64 *)&v21;
      break;
    case 3u:
      result = (__m128)*(unsigned __int64 *)&Inf._Double;
      break;
    case 4u:
      result = (__m128)*(unsigned __int64 *)&Nan._Double;
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)_xmm);
  return result;
}
