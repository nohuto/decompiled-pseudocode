/*
 * XREFs of HvlResetCoverageVector @ 0x1401BAB24
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  __int64 v1; // r8
  __int64 v2; // rdx
  _BYTE v4[24]; // [rsp+20h] [rbp-8F8h] BYREF
  __int64 v5; // [rsp+38h] [rbp-8E0h]
  _BYTE v6[24]; // [rsp+40h] [rbp-8D8h] BYREF
  __int64 v7; // [rsp+58h] [rbp-8C0h]
  _BYTE v8[144]; // [rsp+60h] [rbp-8B8h] BYREF
  _BYTE v9[2064]; // [rsp+F0h] [rbp-828h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1LL, v9, 1032LL);
  HvlpAcquireHypercallPage(v6, 2LL, v8, 72LL);
  v1 = v7;
  v2 = v5;
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallCodeVa(147LL, v2, v1) == 0;
  HvlpReleaseHypercallPage(v4);
  HvlpReleaseHypercallPage(v6);
  return (char)v0;
}
