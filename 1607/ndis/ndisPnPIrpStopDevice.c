/*
 * XREFs of ndisPnPIrpStopDevice @ 0x1C00D44EC
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0012C54 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6D5C (ndisDeQueueMiniportOnDriver.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
    WPP_SF_qZ(0x2Cu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2, *(unsigned __int16 **)(a2 + 3912));
  NdisTraceLoggingDeviceRemoved((const struct _TlgProvider_t *)a2);
  ndisLogMiniportEvent(a2, 0x27u);
  ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 5);
  *(_DWORD *)(a2 + 124) &= ~0x10000u;
  *(_DWORD *)(a2 + 1520) = 3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(a2 + 1520) = 3;
  *(_QWORD *)(a2 + 1608) = &Event;
  ndisReferenceMiniport(a2, 0x1Cu);
  *(_DWORD *)(a2 + 124) |= 0x10u;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_(0x4Fu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
  ndisPnPRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_(0x50u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
  if ( *(_QWORD *)(a2 + 1608) )
  {
    ndisDereferenceMiniport(a2);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 1608) = 0LL;
  }
  v7 = *(_QWORD *)(a2 + 504);
  if ( v7 && *(_DWORD *)(v7 + 72) == 1 && (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v7 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, *(_QWORD *)(a2 + 3816));
    ndisDereferenceDriver(*(_QWORD *)(a2 + 3816), 0);
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
      ndisDereferencePackage((__int64)&unk_1C0088068);
  }
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
