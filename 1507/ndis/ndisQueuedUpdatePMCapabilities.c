/*
 * XREFs of ndisQueuedUpdatePMCapabilities @ 0x1C00CB0E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001B8C8 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C001BF64 (ndisAddWoLMagicPacket.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     ndisIndicatePMCapabilities @ 0x1C00C9C28 (ndisIndicatePMCapabilities.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, char *MiniportAdapterHandle)
{
  int SetMiniport; // eax
  char v5; // al
  _BYTE v6[248]; // [rsp+30h] [rbp-D0h] BYREF

  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x75u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisUpdatePMCurrentCapabilities((__int64)MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (*(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 477) + 120LL) & 8) != 0 )
    {
      memset(v6, 0, sizeof(v6));
      *(_DWORD *)&v6[8] = 0;
      *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
      *(_DWORD *)&v6[88] |= 0x100008u;
      *(_DWORD *)v6 = 15466902;
      *(_DWORD *)&v6[32] = -50265847;
      *(_DWORD *)&v6[4] = 1;
      *(_QWORD *)&v6[40] = MiniportAdapterHandle + 1120;
      *(_DWORD *)&v6[48] = 20;
      SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v6, 0LL, 0LL);
      if ( SetMiniport )
      {
        if ( (unsigned __int8)byte_1C0085315 >= 2u )
          WPP_SF_d(0x76u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, SetMiniport);
      }
    }
    v5 = MiniportAdapterHandle[32];
    if ( ((unsigned __int8)v5 > 6u || v5 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x14u)
      && (*((_DWORD *)MiniportAdapterHandle + 281) & 2) != 0 )
    {
      ndisAddWoLMagicPacket((KSPIN_LOCK *)MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x10u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x77u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, (__int64)MiniportAdapterHandle);
}
