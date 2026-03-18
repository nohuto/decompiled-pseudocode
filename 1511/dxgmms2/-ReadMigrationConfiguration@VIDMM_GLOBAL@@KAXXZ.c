/*
 * XREFs of ?ReadMigrationConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006CF94
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006ADD0 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void VIDMM_GLOBAL::ReadMigrationConfiguration(void)
{
  int v0; // [rsp+30h] [rbp-D0h] BYREF
  int v1; // [rsp+34h] [rbp-CCh] BYREF
  int v2; // [rsp+38h] [rbp-C8h] BYREF
  int v3; // [rsp+3Ch] [rbp-C4h] BYREF
  int v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v6[50]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = 1;
  dword_1C002F240 = 1;
  v0 = 2;
  v5 = 5;
  dword_1C002F244 = 5;
  v3 = 32;
  v2 = 2;
  v4 = 2;
  qword_1C002F248 = 32LL;
  dword_1C002F250 = 2;
  dword_1C002F254 = 2;
  dword_1C002F258 = 2;
  memset(v6, 0, 0x188uLL);
  v6[0] = 0LL;
  LODWORD(v6[1]) = 288;
  LODWORD(v6[4]) = 67108868;
  v6[2] = L"Migration.Period";
  v6[3] = &dword_1C002F240;
  v6[5] = &v1;
  v6[9] = L"Migration.TableSize";
  v6[10] = &dword_1C002F244;
  v6[12] = &v5;
  v6[16] = L"Migration.MaxBytesMigrated";
  v6[17] = &qword_1C002F248;
  v6[19] = &v3;
  v6[23] = L"Migration.DisabledPeriodAfterFailure";
  v6[24] = &dword_1C002F250;
  v6[26] = &v0;
  v6[30] = L"Migration.DisabledPeriodAfterMemoryPressure";
  v6[31] = &dword_1C002F254;
  v6[33] = &v2;
  v6[37] = L"Migration.DisabledPeriodAfterTrashing";
  v6[38] = &dword_1C002F258;
  LODWORD(v6[6]) = 4;
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
  LODWORD(v6[41]) = 4;
  v6[40] = &v4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v6, 0LL, 0LL);
  qword_1C002F248 <<= 20;
}
