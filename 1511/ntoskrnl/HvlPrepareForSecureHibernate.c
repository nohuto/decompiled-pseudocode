/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x1401B2A10
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int8 v5[8]; // [rsp+40h] [rbp-88h] BYREF
  LONGLONG v6; // [rsp+48h] [rbp-80h]

  v2 = (_OWORD *)HvlpAcquireHypercallPage(v4, 1, 0LL, 88LL);
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  v6 = v4[3].QuadPart >> 12;
  LODWORD(a1) = HvlpEnterIumSecureMode(1u, 234, 0, v5);
  HvlpReleaseHypercallPage((__int64)v4);
  return (unsigned int)a1;
}
