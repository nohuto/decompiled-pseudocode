/*
 * XREFs of ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00AB22C
 * Callers:
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00CDF90 (ndisFDevicePnPEventNotifyInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeDevicePnPEventNotifyHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebp

  v2 = *(_QWORD *)(a1 + 3816);
  v4 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0xE0u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v4);
  if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    ndisVerifierNdisDispatch->NdisMiniportDevicePnPEventNotifyHandler(
      *(void **)(a1 + 24),
      (_NET_DEVICE_PNP_EVENT *)a2,
      (void *)a1,
      *(void **)(a1 + 5024),
      *(void (__fastcall **)(void *, _NET_DEVICE_PNP_EVENT *))(v2 + 224));
  else
    (*(void (__fastcall **)(_QWORD, __int64))(v2 + 224))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0xE1u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v4);
}
