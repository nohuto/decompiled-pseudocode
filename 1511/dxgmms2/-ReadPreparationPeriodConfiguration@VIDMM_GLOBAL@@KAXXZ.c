/*
 * XREFs of ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006D1A0
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006ADD0 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void VIDMM_GLOBAL::ReadPreparationPeriodConfiguration(void)
{
  int v0; // [rsp+30h] [rbp-D0h] BYREF
  int v1; // [rsp+34h] [rbp-CCh] BYREF
  int v2; // [rsp+38h] [rbp-C8h] BYREF
  int v3; // [rsp+3Ch] [rbp-C4h] BYREF
  int v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v6[56]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = 1;
  v0 = 1;
  qword_1C002F1C0 = 1LL;
  dword_1C002F1D0 = 1;
  v5 = 4;
  v3 = 64;
  v2 = 32;
  dword_1C002F1CC = 64;
  dword_1C002F1D4 = 32;
  v4 = 0x7FFFFFFF;
  dword_1C002F1C8 = 4;
  dword_1C002F1D8 = 0x7FFFFFFF;
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[6]) = 4;
  v6[0] = 0LL;
  LODWORD(v6[1]) = 288;
  LODWORD(v6[4]) = 67108868;
  v6[2] = L"PreparationPeriod";
  v6[3] = &qword_1C002F1C0;
  v6[5] = &v1;
  v6[9] = L"Period.MinimumPolicyHeldPeriod";
  v6[10] = &dword_1C002F1C8;
  v6[12] = &v5;
  v6[16] = L"Period.MaximumPolicyHeldPeriod";
  v6[17] = &dword_1C002F1CC;
  v6[19] = &v3;
  v6[23] = L"Period.AlwaysForceMemReset";
  v6[24] = &dword_1C002F1D0;
  v6[26] = &v0;
  v6[30] = L"Period.EvictionThresholdForMemReset";
  v6[31] = &dword_1C002F1D4;
  v6[33] = &v2;
  v6[37] = L"Period.NbOfAllocationsThresholdToMRU";
  v6[38] = &dword_1C002F1D8;
  v6[7] = 0LL;
  LODWORD(v6[8]) = 288;
  LODWORD(v6[11]) = 67108868;
  LODWORD(v6[13]) = 4;
  v6[14] = 0LL;
  LODWORD(v6[15]) = 288;
  LODWORD(v6[18]) = 67108868;
  LODWORD(v6[20]) = 4;
  v6[21] = 0LL;
  LODWORD(v6[22]) = 288;
  LODWORD(v6[25]) = 67108868;
  LODWORD(v6[27]) = 4;
  v6[28] = 0LL;
  LODWORD(v6[29]) = 288;
  LODWORD(v6[32]) = 67108868;
  LODWORD(v6[34]) = 4;
  v6[35] = 0LL;
  LODWORD(v6[36]) = 288;
  LODWORD(v6[39]) = 67108868;
  v6[40] = &v4;
  LODWORD(v6[41]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v6, 0LL, 0LL);
  qword_1C002F1C0 *= 10000000LL;
  dword_1C002F1D4 <<= 20;
}
