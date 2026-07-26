/*
 * XREFs of ndisSriovInterfaceResetVF @ 0x1C00DBCD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceResetVF(void *a1, __int16 a2)
{
  int SetMiniport; // eax
  unsigned int v5; // edi
  _DWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v7, 0, 6);
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x63u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1);
  v7[0] = 393600;
  LOWORD(v7[1]) = a2;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)&v8[88] |= 8u;
  *(_DWORD *)&v8[8] = 0;
  *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
  *(_DWORD *)v8 = 15466902;
  *(_QWORD *)&v8[40] = v7;
  *(_DWORD *)&v8[32] = 66133;
  *(_DWORD *)&v8[4] = 1;
  *(_DWORD *)&v8[48] = 6;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
  v5 = SetMiniport;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x64u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, (__int64)a1, SetMiniport);
  return v5;
}
