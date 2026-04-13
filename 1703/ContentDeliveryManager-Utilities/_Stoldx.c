/*
 * XREFs of _Stoldx @ 0x18006BC08
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18002DCA0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002DCA0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x180061C70 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180061C70.c)
 * Callees:
 *     _Stopfx @ 0x18006BED8 (_Stopfx.c)
 *     _Stoflt @ 0x18006C00C (_Stoflt.c)
 *     _Stoxflt @ 0x18006C2A0 (_Stoxflt.c)
 *     _LDscale @ 0x18006DE0C (_LDscale.c)
 *     _LXp_addx @ 0x18006E16C (_LXp_addx.c)
 *     _LXp_mulx @ 0x18006E474 (_LXp_mulx.c)
 *     _LXp_setn @ 0x18006E578 (_LXp_setn.c)
 *     _LXp_setw @ 0x18006E598 (_LXp_setw.c)
 *     _LDtento @ 0x18006E6AC (_LDtento.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

__m128 __fastcall Stoldx(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // edi
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 i; // rdi
  __int64 v15; // r8
  double v16; // xmm0_8
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 j; // rdi
  __int64 v21; // r8
  __int64 v22; // [rsp+30h] [rbp-79h] BYREF
  double v23; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v25[3]; // [rsp+44h] [rbp-65h]
  long double v26[3]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v27[24]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v28[24]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE Src[48]; // [rsp+98h] [rbp-11h] BYREF

  v5 = a1;
  v22 = a1;
  v8 = Stopfx(&v22);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = Stoflt(v5, v22, a2, (unsigned int)&v24, 2);
      v12 = v11;
      LXp_setw(v27, 3LL);
      if ( (_DWORD)v12 )
      {
        LXp_setn(v26, 3LL, v25[0]);
        v13 = v12;
        for ( i = 1LL; i < v13; ++i )
        {
          LXp_mulx(v26, Src);
          v15 = (unsigned int)v25[i];
          LXp_setn(v28, 3LL, v15);
          LXp_addx(v26);
        }
      }
      else
      {
        LXp_setw(v26, 3LL);
      }
      LDtento(v26);
      break;
    case 2u:
      v16 = Stoxflt(v5, v22, a2, (unsigned int)&v24, 2);
      v18 = v17;
      LXp_setw(v28, 3LL);
      if ( (_DWORD)v18 )
      {
        LXp_setn(v26, 3LL, v25[0]);
        v19 = v18;
        for ( j = 1LL; j < v19; ++j )
        {
          LXp_mulx(v26, Src);
          v21 = (unsigned int)v25[j];
          LXp_setn(v27, 3LL, v21);
          LXp_addx(v26);
        }
      }
      else
      {
        LXp_setw(v26, 3LL);
      }
      LDtento(v26);
      v23 = v16;
      LDscale(&v23, v24);
      result = (__m128)*(unsigned __int64 *)&v23;
      break;
    case 3u:
      result = (__m128)*(unsigned __int64 *)&LInf._Double;
      break;
    case 4u:
      result = (__m128)*(unsigned __int64 *)&LNan._Double;
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)_xmm);
  return result;
}
