/*
 * XREFs of ndisMSwapOpenHandlers @ 0x1C001FB1C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00114C4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMProcessResetRequested @ 0x1C005E698 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C00203E4 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void (__stdcall *__fastcall ndisMSwapOpenHandlers(
        __int64 a1,
        __int64 a2,
        __int64 a3))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  char v3; // di
  _QWORD *v5; // rcx
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 (__fastcall *v7)(); // rax

  v3 = a2;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(90LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, (unsigned __int8)a2);
  *(_BYTE *)(a1 + 930) |= v3;
  ndisUpdateMiniportFakeStatus(a1, a2, a3);
  v5 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 656) = ndisMFakeSendNetBufferLists;
  result = ndisFakeMiniportCancelSendPackets;
  *(_QWORD *)(a1 + 184) = ndisFakeMiniportCancelSendPackets;
  *(_DWORD *)(a1 + 2676) = 3;
  while ( v5 )
  {
    if ( *(_DWORD *)(a1 + 464) != 3 || (v7 = ndisMFakeWanSend, (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
      v7 = ndisMFakeSend;
    v5[12] = v7;
    v5[21] = ndisMFakeSendPackets;
    result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeReset;
    v5[22] = ndisMFakeReset;
    if ( (*(_BYTE *)(a1 + 930) & 0xFD) != 0 )
    {
      v5[23] = ndisMFakeRequest;
      v5[24] = ndisMFakeOidRequest;
      result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeDirectOidRequest;
      v5[103] = ndisMFakeDirectOidRequest;
    }
    v5[37] = 0LL;
    v5 = (_QWORD *)v5[49];
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_SF_q(
                                                                                   91LL,
                                                                                   &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
                                                                                   a1);
  return result;
}
