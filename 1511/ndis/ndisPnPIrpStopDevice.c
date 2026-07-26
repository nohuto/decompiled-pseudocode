/*
 * XREFs of ndisPnPIrpStopDevice @ 0x1C00CE52C
 * Callers:
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0013C58 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BA80 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E0D84 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_qZ(0x2Cu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2, *(__int64 **)(a2 + 3912));
  NdisTraceLoggingDeviceRemoved((const struct _TlgProvider_t *)a2);
  ndisLogMiniportEvent(a2, 0x27u);
  ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 5);
  *(_DWORD *)(a2 + 124) &= ~0x10000u;
  *(_DWORD *)(a2 + 1520) = 3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(a2 + 1520) = 3;
  *(_QWORD *)(a2 + 1608) = &Event;
  ndisReferenceMiniport(a2);
  *(_DWORD *)(a2 + 124) |= 0x10u;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_(0x4Fu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids);
  ndisPnPRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_(0x50u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids);
  if ( *(_QWORD *)(a2 + 1608) )
  {
    ndisDereferenceMiniport(a2, 0x1Au);
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
      ndisDereferencePackage((__int64)&unk_1C0082098);
  }
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
