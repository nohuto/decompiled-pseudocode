/*
 * XREFs of ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006D3B4
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006ADD0 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void VIDMM_GLOBAL::ReadUnusedAllocationConfiguration(void)
{
  __int64 *v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+4Ch] [rbp-B4h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v16[112]; // [rsp+70h] [rbp-90h] BYREF

  xmmword_1C002F1E0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  xmmword_1C002F200 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  xmmword_1C002F220 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v9 = 1;
  v1 = 1;
  xmmword_1C002F1F0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v13 = 15;
  v7 = 1000000;
  v6 = 1000000;
  v8 = 15;
  v10 = 15;
  qword_1C002F230 = 1000000LL;
  qword_1C002F2C8 = 15LL;
  xmmword_1C002F2D0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3 = 0;
  v5 = 45;
  v11 = 120;
  v15 = 0;
  v2 = 2;
  v4 = 5;
  v12 = 30;
  v14 = 30;
  xmmword_1C002F210 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  qword_1C002F2E0 = 30LL;
  memset(v16, 0, sizeof(v16));
  v16[0] = 0LL;
  LODWORD(v16[1]) = 288;
  LODWORD(v16[4]) = 67108868;
  v16[2] = L"UnusedTrimmingPeriod";
  LODWORD(v16[6]) = 4;
  v16[3] = &xmmword_1C002F1E0;
  v16[5] = &v9;
  v16[9] = L"Unused.MinimumThreshold";
  v16[10] = (char *)&xmmword_1C002F1E0 + 8;
  v16[12] = &v3;
  v16[16] = L"Unused.LowThreshold";
  v16[17] = &xmmword_1C002F1F0;
  v16[19] = &v13;
  v16[23] = L"Unused.NormalThreshold";
  v16[24] = (char *)&xmmword_1C002F1F0 + 8;
  v16[26] = &v5;
  v16[7] = 0LL;
  LODWORD(v16[8]) = 288;
  LODWORD(v16[11]) = 67108868;
  LODWORD(v16[13]) = 4;
  v16[14] = 0LL;
  LODWORD(v16[15]) = 288;
  LODWORD(v16[18]) = 67108868;
  LODWORD(v16[20]) = 4;
  v16[21] = 0LL;
  LODWORD(v16[22]) = 288;
  LODWORD(v16[25]) = 67108868;
  LODWORD(v16[27]) = 4;
  v16[30] = L"Unused.HighThreshold";
  v0 = &qword_1C002F2C8;
  v16[28] = 0LL;
  v16[31] = &xmmword_1C002F200;
  v16[33] = &v11;
  v16[37] = L"Unused.MaximumThreshold";
  v16[38] = (char *)&xmmword_1C002F200 + 8;
  v16[40] = &v7;
  v16[44] = L"Unused.SelfTrimMinimumThreshold";
  v16[45] = &xmmword_1C002F210;
  v16[47] = &v15;
  v16[51] = L"Unused.SelfTrimLowThreshold";
  v16[52] = (char *)&xmmword_1C002F210 + 8;
  v16[54] = &v1;
  v16[58] = L"Unused.SelfTrimNormalThreshold";
  v16[59] = &xmmword_1C002F220;
  v16[61] = &v2;
  v16[65] = L"Unused.SelfTrimHighThreshold";
  v16[66] = (char *)&xmmword_1C002F220 + 8;
  v16[68] = &v4;
  v16[72] = L"Unused.SelfTrimMaximumThreshold";
  v16[73] = &qword_1C002F230;
  v16[75] = &v6;
  v16[79] = L"Unused.EvictApertureOfferLowThreshold";
  v16[82] = &v8;
  LODWORD(v16[29]) = 288;
  LODWORD(v16[32]) = 67108868;
  LODWORD(v16[34]) = 4;
  v16[35] = 0LL;
  LODWORD(v16[36]) = 288;
  LODWORD(v16[39]) = 67108868;
  LODWORD(v16[41]) = 4;
  v16[42] = 0LL;
  LODWORD(v16[43]) = 288;
  LODWORD(v16[46]) = 67108868;
  LODWORD(v16[48]) = 4;
  v16[49] = 0LL;
  LODWORD(v16[50]) = 288;
  LODWORD(v16[53]) = 67108868;
  LODWORD(v16[55]) = 4;
  v16[56] = 0LL;
  LODWORD(v16[57]) = 288;
  LODWORD(v16[60]) = 67108868;
  LODWORD(v16[62]) = 4;
  v16[63] = 0LL;
  LODWORD(v16[64]) = 288;
  LODWORD(v16[67]) = 67108868;
  LODWORD(v16[69]) = 4;
  v16[70] = 0LL;
  LODWORD(v16[71]) = 288;
  LODWORD(v16[74]) = 67108868;
  LODWORD(v16[76]) = 4;
  v16[77] = 0LL;
  LODWORD(v16[78]) = 288;
  v16[80] = &qword_1C002F2C8;
  LODWORD(v16[81]) = 67108868;
  LODWORD(v16[83]) = 4;
  LODWORD(v16[85]) = 288;
  v16[86] = L"Unused.EvictApertureOfferNormalThreshold";
  LODWORD(v16[88]) = 67108868;
  v16[87] = &xmmword_1C002F2D0;
  v16[89] = &v10;
  v16[93] = L"Unused.EvictApertureOfferHighThreshold";
  v16[94] = (char *)&xmmword_1C002F2D0 + 8;
  v16[96] = &v12;
  v16[100] = L"Unused.EvictApertureOfferMaximumThreshold";
  v16[101] = &qword_1C002F2E0;
  LODWORD(v16[90]) = 4;
  LODWORD(v16[92]) = 288;
  LODWORD(v16[95]) = 67108868;
  LODWORD(v16[97]) = 4;
  LODWORD(v16[99]) = 288;
  LODWORD(v16[102]) = 67108868;
  LODWORD(v16[104]) = 4;
  v16[103] = &v14;
  v16[84] = 0LL;
  v16[91] = 0LL;
  v16[98] = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v16, 0LL, 0LL);
  *(_QWORD *)&xmmword_1C002F1E0 = 10000000 * xmmword_1C002F1E0;
  *((_QWORD *)&xmmword_1C002F1E0 + 1) *= 10000000LL;
  *(_QWORD *)&xmmword_1C002F1F0 = 10000000 * xmmword_1C002F1F0;
  *((_QWORD *)&xmmword_1C002F1F0 + 1) *= 10000000LL;
  *(_QWORD *)&xmmword_1C002F200 = 10000000 * xmmword_1C002F200;
  *((_QWORD *)&xmmword_1C002F200 + 1) *= 10000000LL;
  *(_QWORD *)&xmmword_1C002F210 = 10000000 * xmmword_1C002F210;
  *((_QWORD *)&xmmword_1C002F210 + 1) *= 10000000LL;
  *(_QWORD *)&xmmword_1C002F220 = 10000000 * xmmword_1C002F220;
  *((_QWORD *)&xmmword_1C002F220 + 1) *= 10000000LL;
  qword_1C002F230 *= 10000000LL;
  do
    *v0++ *= 10000000LL;
  while ( (__int64)v0 < (__int64)&qword_1C002F2E8 );
}
