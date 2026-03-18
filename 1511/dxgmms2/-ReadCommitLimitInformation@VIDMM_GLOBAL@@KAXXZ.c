/*
 * XREFs of ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAXXZ @ 0x1C006DA60
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C006ADD0 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void VIDMM_GLOBAL::ReadCommitLimitInformation(void)
{
  unsigned __int64 v0; // rcx
  __int64 v1; // r9
  unsigned int v2; // eax
  unsigned int v3; // r10d
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v10[36]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = 0;
  v9 = 0;
  qword_1C002F120 = 0LL;
  qword_1C002F128 = 0LL;
  v6 = 0;
  v7 = 0;
  memset(v10, 0, 0x118uLL);
  v10[0] = 0LL;
  LODWORD(v10[1]) = 288;
  LODWORD(v10[4]) = 67108868;
  LODWORD(v10[6]) = 4;
  v10[2] = L"SystemMemoryCommitLimit";
  LODWORD(v10[8]) = 288;
  LODWORD(v10[11]) = 67108868;
  v10[3] = &qword_1C002F120;
  LODWORD(v10[13]) = 4;
  v10[5] = &v8;
  LODWORD(v10[15]) = 288;
  v10[9] = L"PinnedBackingStoreLimit";
  v10[10] = &qword_1C002F128;
  v10[12] = &v9;
  v10[16] = L"MinimumSystemMemoryCommitLimit";
  v10[17] = &v6;
  v10[23] = L"SmallSystemMemorySize";
  LODWORD(v10[22]) = 288;
  v10[24] = &v7;
  v10[7] = 0LL;
  v10[14] = 0LL;
  LODWORD(v10[18]) = 0x4000000;
  v10[19] = 0LL;
  LODWORD(v10[20]) = 0;
  v10[21] = 0LL;
  LODWORD(v10[25]) = 0x4000000;
  v10[26] = 0LL;
  LODWORD(v10[27]) = 0;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v10, 0LL, 0LL);
  v0 = qword_1C002F120 << 20;
  v1 = qword_1C002F128 << 20;
  v2 = v6 << 20;
  v3 = v7 << 20;
  qword_1C002F120 <<= 20;
  qword_1C002F128 <<= 20;
  if ( (unsigned int)(v6 << 20) <= 0x4000000 )
    v2 = 0x4000000;
  v4 = v2;
  if ( v0 < v2 )
  {
    if ( qword_1C002F118 <= (unsigned __int64)v3 )
    {
      qword_1C002F120 = v2;
    }
    else
    {
      v5 = (qword_1C002F118 - (unsigned __int64)v3) >> 1;
      if ( v4 > v5 )
        v5 = v4;
      qword_1C002F120 = v5;
    }
  }
  if ( !v1 )
    qword_1C002F128 = (unsigned __int64)qword_1C002F118 >> 3;
}
