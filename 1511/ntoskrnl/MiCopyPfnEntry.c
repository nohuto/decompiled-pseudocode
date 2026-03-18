/*
 * XREFs of MiCopyPfnEntry @ 0x140071D80
 * Callers:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSwitchKstackPages @ 0x1400D85D0 (MiSwitchKstackPages.c)
 *     MiSwapStackPageNoDpc @ 0x1400D8BB0 (MiSwapStackPageNoDpc.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiSwapHardFaultPage @ 0x1401D54F0 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCopyPfnEntry(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int128 v3; // xmm2
  unsigned __int64 v4; // r11
  unsigned __int64 result; // rax
  __int128 v6; // [rsp+10h] [rbp-28h]
  __int128 v7; // [rsp+20h] [rbp-18h]

  v2 = *(__m128i *)(a2 + 32);
  v3 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)&v6 = v3;
  *(_QWORD *)&v7 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 40);
  BYTE3(v7) = *(_BYTE *)(a1 + 35) ^ (_mm_cvtsi128_si32(_mm_srli_si128(v2, 3)) ^ *(_BYTE *)(a1 + 35)) & 0x3F;
  if ( (((unsigned __int64)v2.m128i_i64[1] >> 54) & 7) == 3 )
    v4 = v2.m128i_i64[1] & 0xFE3FFFFFFFFFFFFFuLL;
  result = 0x3FC00CFFFFFFFFFLL;
  BYTE2(v7) = *(_BYTE *)(a1 + 34) ^ (v2.m128i_i8[2] ^ *(_BYTE *)(a1 + 34)) & 0x3F;
  *((_QWORD *)&v7 + 1) = v4 & 0x3FC00CFFFFFFFFFLL | (((*(_QWORD *)(a1 + 40) >> 36) & 3LL | (16
                                                                                          * ((*(_QWORD *)(a1 + 40) >> 58 << 18) | (*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))) << 36);
  if ( (BYTE2(v7) & 7) != 6 )
  {
    result = (*((_QWORD *)&v3 + 1) ^ ((unsigned __int64)*(unsigned __int8 *)(a1 + 31) << 56)) & 0xF00000000000000LL ^ *((_QWORD *)&v3 + 1);
    *((_QWORD *)&v6 + 1) = result;
    v3 = v6;
  }
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v7;
  return result;
}
