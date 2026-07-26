/*
 * XREFs of ndisAddWoLMagicPacket @ 0x1C00246F4
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00C4500 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(KSPIN_LOCK *MiniportAdapterHandle)
{
  KSPIN_LOCK v2; // rsi
  unsigned int v3; // edi
  KIRQL v4; // dl
  KSPIN_LOCK v5; // rax
  unsigned int v6; // eax
  struct _NDIS_OID_REQUEST Request; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v9[52]; // [rsp+130h] [rbp+30h] BYREF

  v2 = 0LL;
  memset(&Request, 0, 248);
  v3 = 0;
  memset(v9, 0, 196);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(84LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, MiniportAdapterHandle);
  v4 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v5 = MiniportAdapterHandle[121];
  *((_DWORD *)MiniportAdapterHandle + 464) = 2758169;
  while ( v5 )
  {
    v2 = v5;
    if ( *(_DWORD *)(v5 + 60) == 2 )
      break;
    v5 = *(_QWORD *)v5;
    v2 = 0LL;
  }
  MiniportAdapterHandle[65] = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock(MiniportAdapterHandle + 12, v4);
  if ( !v2 )
  {
    v9[0] = 12845440;
    v9[3] = 2;
    LOWORD(v9[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v9[4] + 2, 0x80uLL, Src, MagicPacketStr.Length);
    memset(&Request, 0, 0xF8uLL);
    Request.PortNumber = 0;
    *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
    Request.DATA.QUERY_INFORMATION.InformationBuffer = v9;
    Request.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Request.NdisReserved[16] |= 0x100008u;
    Request.DATA.QUERY_INFORMATION.Oid = -50265846;
    Request.RequestType = NdisRequestSetInformation;
    Request.DATA.QUERY_INFORMATION.InformationBufferLength = 196;
    v6 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    v3 = v6;
    if ( v6 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_d(85LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v6);
    }
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(86LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, MiniportAdapterHandle, v3);
  return v3;
}
