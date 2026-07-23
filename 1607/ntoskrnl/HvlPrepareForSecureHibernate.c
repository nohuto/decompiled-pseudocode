/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x1401BF244
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v5[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-80h]

  v2 = (_OWORD *)HvlpAcquireHypercallPage(v4, 1, 0LL, 88LL);
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  v6 = (unsigned __int64)v4[3].QuadPart >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(1, 235LL, 0LL, (__int64)v5);
  HvlpReleaseHypercallPage((__int64)v4);
  return (unsigned int)a1;
}
