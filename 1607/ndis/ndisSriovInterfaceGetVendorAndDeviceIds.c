/*
 * XREFs of ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00DB6E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisSriovInterfaceGetVendorAndDeviceIds(void *a1, unsigned __int16 a2, _WORD *a3, _WORD *a4)
{
  int SetMiniport; // eax
  _BYTE v9[248]; // [rsp+30h] [rbp-D0h] BYREF
  _TBYTE v10; // [rsp+130h] [rbp+30h] BYREF

  memset(v9, 0, sizeof(v9));
  v10 = 0.0;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x61u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1);
  HIWORD(v10) = 0;
  LODWORD(v10) = 655744;
  DWORD1(v10) = a2;
  memset(v9, 0, sizeof(v9));
  *(_DWORD *)&v9[88] |= 8u;
  *(_DWORD *)&v9[8] = 0;
  *(_DWORD *)&v9[56] = 0;
  *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
  *(_DWORD *)v9 = 15466902;
  *(_QWORD *)&v9[40] = &v10;
  *(_DWORD *)&v9[4] = 12;
  *(_DWORD *)&v9[32] = 66135;
  *(_DWORD *)&v9[48] = 10;
  *(_DWORD *)&v9[52] = 10;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
  if ( !SetMiniport )
  {
    *a3 = WORD3(v10);
    *a4 = HIWORD(v10);
  }
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x62u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1, SetMiniport);
}
