/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C0013940
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C00139E8 (ndisIovFindSwitchBySwitchId.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisIovDeleteNicSwitch @ 0x1C0063E90 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C0063F30 (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

__int64 __fastcall ndisIovDeleteDefaultNicSwitch(_DWORD *MiniportAdapterHandle)
{
  unsigned int v2; // edi
  __int64 result; // rax
  struct _NDIS_OID_REQUEST Request; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v5[4]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  memset(&Request, 0, 248);
  memset(v5, 0, 12);
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(81LL, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, MiniportAdapterHandle);
  result = ndisIovFindSwitchBySwitchId(MiniportAdapterHandle, 0LL);
  if ( result )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(MiniportAdapterHandle, 0LL);
    if ( (MiniportAdapterHandle[30] & 4) == 0 )
    {
      v5[0] = 786816;
      v5[2] = 0;
      memset(&Request, 0, 0xF8uLL);
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = v5;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.Oid = 66105;
      *(_QWORD *)&Request.RequestType = 1LL;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = 12;
      v2 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    }
    result = ndisIovDeleteNicSwitch(MiniportAdapterHandle, 0LL);
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    return WPP_SF_qD(82LL, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, MiniportAdapterHandle, v2);
  return result;
}
