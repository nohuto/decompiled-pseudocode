/*
 * XREFs of ndisQueryMediaStatus @ 0x1C00D525C
 * Callers:
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisQueryMediaStatus(void *a1)
{
  int v2; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v3[248]; // [rsp+40h] [rbp-118h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x89u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)&v3[40] = &v2;
  *(_DWORD *)v3 = 15466902;
  *(_QWORD *)&v3[104] = &ndisIntReqGeneric;
  *(_DWORD *)&v3[32] = 65812;
  *(_DWORD *)&v3[48] = 4;
  ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v3, 0LL, 0LL);
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x8Au, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a1);
}
