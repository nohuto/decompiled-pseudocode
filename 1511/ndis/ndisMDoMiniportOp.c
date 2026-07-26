/*
 * XREFs of ndisMDoMiniportOp @ 0x1C00ABE78
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisMNotifyMachineName @ 0x1C00ABD20 (ndisMNotifyMachineName.c)
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisMDoMiniportOp(void *a1, char a2, int a3, __int64 a4, int a5, unsigned int a6, char a7)
{
  unsigned int v11; // edi
  int v12; // ecx
  int SetMiniport; // eax
  _BYTE v15[248]; // [rsp+30h] [rbp-D0h] BYREF

  v11 = 0;
  memset(v15, 0, sizeof(v15));
  v12 = *(_DWORD *)&v15[88];
  if ( a2 )
  {
    v12 = *(_DWORD *)&v15[88] | 0x80;
    *(_DWORD *)&v15[4] = 0;
    *(_DWORD *)&v15[88] |= 0x80u;
  }
  else
  {
    *(_DWORD *)&v15[4] = 1;
  }
  *(_DWORD *)&v15[48] = a5;
  *(_QWORD *)&v15[104] = &ndisIntReqGeneric;
  *(_DWORD *)v15 = 15466902;
  *(_DWORD *)&v15[32] = a3;
  *(_QWORD *)&v15[40] = a4;
  if ( a7 )
    *(_DWORD *)&v15[88] = v12 | 0x8000;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v15, 0LL, 0LL);
  if ( SetMiniport )
  {
    v11 = a6;
    if ( SetMiniport != -1 )
      return a6 + 1;
  }
  return v11;
}
