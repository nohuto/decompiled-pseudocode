/*
 * XREFs of ndisPnPIrpStartDevice @ 0x1C009BC58
 * Callers:
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C00183D0 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisScheduleStartDeviceWorkItem @ 0x1C009BBD8 (ndisScheduleStartDeviceWorkItem.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AA688 (ndisStartDeviceSynchronous.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4, _BYTE *a5)
{
  unsigned int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // eax
  int v11; // edi
  int started; // edi
  unsigned __int8 v13; // al
  _IO_STACK_LOCATION *v14; // rax
  int v15; // eax

  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_qZ(0x21u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2, *(__int64 **)(a2 + 3912));
  ndisLogMiniportEvent(a2, 0x20u);
  v8 = 4;
  *(_DWORD *)(a2 + 124) = *(_DWORD *)(a2 + 124) & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                             + 24);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 3816) + 808LL) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC5u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _IRP *))(*(_QWORD *)(a2 + 3816) + 808LL))(*(_QWORD *)(a2 + 4168), a3);
    v11 = v10;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xC6u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v10);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC7u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
    v11 = 0;
  }
  if ( v11 )
  {
    started = -1073741823;
  }
  else
  {
    v8 = 9;
    started = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3896), a3);
  }
  if ( started >= 0 )
  {
    v13 = *(_BYTE *)(a2 + 32);
    if ( v13 <= 6u && (v13 != 6 || *(_BYTE *)(a2 + 33) < 0x1Eu) || ndisStartDeviceSync )
    {
      v8 = 4;
      started = ndisStartDeviceSynchronous((struct _NDIS_MINIPORT_BLOCK *)a2);
    }
    else
    {
      v14 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v8 = 4;
      v14->Control |= 1u;
      v15 = ndisScheduleStartDeviceWorkItem((_LIST_ENTRY *)a2, (_LIST_ENTRY *)a3);
      if ( !v15 )
        goto LABEL_16;
      if ( (unsigned __int8)byte_1C0083714 >= 2u )
        WPP_SF_qD(0x22u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a2, v15);
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_16:
  NdisTraceLoggingDeviceStarted((const struct _TlgProvider_t *)a2, v8, started);
  *a5 = 0;
  return (unsigned int)started;
}
