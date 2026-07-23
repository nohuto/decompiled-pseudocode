/*
 * XREFs of MiDeliverPicoExceptionForProbedPage @ 0x1401E2AFC
 * Callers:
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MiDeliverPicoExceptionForProbedPage(__int64 a1, int a2)
{
  __int64 v4; // rax
  char v6; // [rsp+20h] [rbp-C8h]
  _QWORD v7[20]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v7, 0, 0x98uLL);
  v4 = v7[4];
  LODWORD(v7[0]) = -1073741819;
  LODWORD(v7[3]) = 2;
  if ( a2 )
    v4 = 1LL;
  v7[5] = a1;
  v7[4] = v4;
  v6 = 0;
  return (unsigned __int8)xmmword_1403013C0(v7, 0LL, 0LL, 0LL, v6) == 0 ? 0xC0000005 : 0;
}
