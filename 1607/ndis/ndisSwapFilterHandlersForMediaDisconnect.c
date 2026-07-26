/*
 * XREFs of ndisSwapFilterHandlersForMediaDisconnect @ 0x1C00593D4
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C00203E4 (ndisUpdateMiniportFakeStatus.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C00256BC (ndisUpdateFilterFakeStatus.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 */

void __fastcall ndisSwapFilterHandlersForMediaDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rcx
  __int64 (__fastcall *v7)(); // rax

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qqq(0x53u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, a2, a3);
  if ( a3 )
  {
    *(_BYTE *)(a3 + 376) |= 1u;
    ndisUpdateFilterFakeStatus(a3);
  }
  else
  {
    *(_BYTE *)(a1 + 930) |= 2u;
    ndisUpdateMiniportFakeStatus(a1);
  }
  if ( a2 )
  {
    *(_QWORD *)(a2 + 632) = ndisFakeFilterReceiveHandler;
  }
  else
  {
    *(_BYTE *)(a1 + 2672) = 0;
    *(_QWORD *)(a1 + 432) = ndisMDummyIndicatePacket;
  }
  if ( a3 )
  {
    *(_QWORD *)(a3 + 624) = ndisFakeFilterSendHandler;
    *(_QWORD *)(a3 + 640) = ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 656) = ndisMFakeSendNetBufferLists;
    *(_QWORD *)(a1 + 184) = ndisFakeMiniportCancelSendPackets;
    *(_DWORD *)(a1 + 2676) = 3;
    while ( v6 )
    {
      if ( *(_DWORD *)(a1 + 464) != 3 || (v7 = ndisMFakeWanSend, (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
        v7 = ndisMFakeSend;
      v6[37] = 0LL;
      v6[12] = v7;
      v6[21] = ndisMFakeSendPackets;
      v6[22] = ndisMFakeReset;
      v6 = (_QWORD *)v6[49];
    }
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qqq(0x54u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, a2, a3);
}
