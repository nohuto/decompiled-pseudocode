/*
 * XREFs of MiCopyPfnEntry @ 0x14005A620
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiTradeActivePage @ 0x1400FCE2C (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x14011FF4C (MiSwapStackPageNoDpc.c)
 *     MiSwitchKstackPages @ 0x140134ADC (MiSwitchKstackPages.c)
 *     MiSwapHardFaultPage @ 0x140217428 (MiSwapHardFaultPage.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCopyPfnEntry(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int128 v3; // xmm2
  unsigned __int64 v4; // r10
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
  BYTE2(v7) = *(_BYTE *)(a1 + 34) ^ (v2.m128i_i8[2] ^ *(_BYTE *)(a1 + 34)) & 0x3F;
  result = 0x3FC00CFFFFFFFFFLL;
  *((_QWORD *)&v7 + 1) = v4 & 0x3FC00CFFFFFFFFFLL | *(_QWORD *)(a1 + 40) & 0x3FF0000000000LL | (((*(_QWORD *)(a1 + 40) >> 36) & 3LL | (*(_QWORD *)(a1 + 40) >> 58 << 22)) << 36);
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
