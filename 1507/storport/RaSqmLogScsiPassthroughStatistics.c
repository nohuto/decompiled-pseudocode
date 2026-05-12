/*
 * XREFs of RaSqmLogScsiPassthroughStatistics @ 0x1C00263E0
 * Callers:
 *     RaSqmLogStatistics @ 0x1C00264AC (RaSqmLogStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     StorSqmAddToStream @ 0x1C003B488 (StorSqmAddToStream.c)
 */

void *RaSqmLogScsiPassthroughStatistics()
{
  _DWORD v1[32]; // [rsp+20h] [rbp-39h] BYREF

  memset(&v1[2], 0, 0x78uLL);
  v1[2] = g_RaidSqmPassthroughCdbs[0];
  v1[6] = dword_1C00446FC;
  v1[10] = dword_1C0044700;
  v1[14] = dword_1C0044704;
  v1[18] = dword_1C0044708;
  v1[22] = dword_1C004470C;
  v1[26] = dword_1C0044710;
  v1[30] = dword_1C0044714;
  v1[0] = 1;
  v1[4] = 1;
  v1[8] = 1;
  v1[12] = 1;
  v1[16] = 1;
  v1[20] = 1;
  v1[24] = 1;
  v1[28] = 1;
  StorSqmAddToStream(1LL, 5464LL, 8LL, v1);
  return memset(g_RaidSqmPassthroughCdbs, 0, 0x20uLL);
}
