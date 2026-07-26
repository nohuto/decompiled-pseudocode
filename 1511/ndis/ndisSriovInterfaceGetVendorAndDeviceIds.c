/*
 * XREFs of ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00D57A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisSriovInterfaceGetVendorAndDeviceIds(void *a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  int SetMiniport; // eax
  _BYTE v9[248]; // [rsp+30h] [rbp-D0h] BYREF
  _TBYTE v10; // [rsp+130h] [rbp+30h] BYREF

  memset(v9, 0, sizeof(v9));
  v10 = 0.0;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x61u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, (__int64)a1);
  *(_DWORD *)((char *)&v10 + 6) = 0;
  LODWORD(v10) = 655744;
  WORD2(v10) = a2;
  memset(v9, 0, sizeof(v9));
  *(_DWORD *)&v9[88] |= 8u;
  *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
  *(_DWORD *)v9 = 15466902;
  *(_QWORD *)&v9[40] = &v10;
  *(_QWORD *)&v9[4] = 12LL;
  *(_DWORD *)&v9[32] = 66135;
  *(_QWORD *)&v9[52] = 10LL;
  *(_DWORD *)&v9[48] = 10;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
  if ( !SetMiniport )
  {
    *a3 = WORD3(v10);
    *a4 = HIWORD(v10);
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qD(0x62u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, (__int64)a1, SetMiniport);
}
