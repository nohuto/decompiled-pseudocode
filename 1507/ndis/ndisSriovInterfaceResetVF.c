/*
 * XREFs of ndisSriovInterfaceResetVF @ 0x1C00DC450
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceResetVF(void *a1, __int16 a2)
{
  int SetMiniport; // eax
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+34h] [rbp-CCh]
  _BYTE v9[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v9, 0, sizeof(v9));
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0x60u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, (__int64)a1);
  v7 = 393600;
  v8 = a2;
  memset(v9, 0, sizeof(v9));
  *(_DWORD *)&v9[88] |= 8u;
  *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
  *(_DWORD *)v9 = 15466902;
  *(_QWORD *)&v9[40] = &v7;
  *(_DWORD *)&v9[32] = 66133;
  *(_QWORD *)&v9[4] = 1LL;
  *(_DWORD *)&v9[48] = 6;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
  v5 = SetMiniport;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(0x61u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, (__int64)a1, SetMiniport);
  return v5;
}
