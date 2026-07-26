/*
 * XREFs of ndisSriovGetResourceForBar @ 0x1C00D5580
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovGetResourceForBar(void *a1, __int16 a2, __int16 a3, __int64 a4)
{
  int SetMiniport; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  _BYTE v12[248]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v13[2]; // [rsp+130h] [rbp+30h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x6Bu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, (__int64)a1);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[0]) = 786816;
  DWORD2(v13[0]) = 12;
  WORD2(v13[0]) = a2;
  WORD3(v13[0]) = a3;
  memset(v12, 0, sizeof(v12));
  *(_DWORD *)&v12[88] |= 8u;
  *(_DWORD *)&v12[8] = 0;
  *(_DWORD *)&v12[56] = 0;
  *(_QWORD *)&v12[104] = &ndisIntReqGeneric;
  *(_DWORD *)v12 = 15466902;
  *(_QWORD *)&v12[40] = v13;
  *(_DWORD *)&v12[4] = 12;
  *(_DWORD *)&v12[32] = 66137;
  *(_DWORD *)&v12[48] = 32;
  *(_DWORD *)&v12[52] = 32;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v12, 0LL, 0LL);
  v9 = SetMiniport;
  if ( !SetMiniport )
  {
    v10 = DWORD2(v13[0]);
    *(_OWORD *)a4 = *(_OWORD *)((char *)v13 + DWORD2(v13[0]));
    *(_DWORD *)(a4 + 16) = *(_DWORD *)((char *)&v13[1] + v10);
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qD(0x6Cu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, (__int64)a1, SetMiniport);
  return v9;
}
