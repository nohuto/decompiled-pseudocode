/*
 * XREFs of ndisSriovInterfaceSetVfPowerState @ 0x1C00DBDF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceSetVfPowerState(void *a1, __int16 a2, int a3, char a4)
{
  int SetMiniport; // eax
  unsigned int v9; // ebx
  _BYTE v11[248]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[13]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v13; // [rsp+13Dh] [rbp+3Dh]
  char v14; // [rsp+13Fh] [rbp+3Fh]

  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v14 = 0;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x65u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1);
  *(_DWORD *)v12 = 1048960;
  *(_WORD *)&v12[4] = a2;
  *(_DWORD *)&v12[8] = a3;
  v12[12] = a4;
  memset(v11, 0, sizeof(v11));
  *(_DWORD *)&v11[88] |= 8u;
  *(_DWORD *)&v11[8] = 0;
  *(_QWORD *)&v11[104] = &ndisIntReqGeneric;
  *(_DWORD *)v11 = 15466902;
  *(_QWORD *)&v11[40] = v12;
  *(_DWORD *)&v11[32] = 66134;
  *(_DWORD *)&v11[4] = 1;
  *(_DWORD *)&v11[48] = 16;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v11, 0LL, 0LL);
  v9 = SetMiniport;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x66u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1, SetMiniport);
  return v9;
}
