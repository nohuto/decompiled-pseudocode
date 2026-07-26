/*
 * XREFs of ndisPnPIrpStartDevice @ 0x1C009DE9C
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0012B7C (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisScheduleStartDeviceWorkItem @ 0x1C009E034 (ndisScheduleStartDeviceWorkItem.c)
 *     ndisStartDeviceSynchronous @ 0x1C009EAEC (ndisStartDeviceSynchronous.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4, _BYTE *a5)
{
  unsigned int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  int started; // edi
  unsigned __int8 v12; // al
  _IO_STACK_LOCATION *v13; // rax
  int v14; // eax
  int v16; // eax

  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
    WPP_SF_qZ(0x21u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2, *(unsigned __int16 **)(a2 + 3912));
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
      WPP_SF_q(0xC5u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _IRP *))(*(_QWORD *)(a2 + 3816) + 808LL))(*(_QWORD *)(a2 + 4168), a3);
    v10 = v16;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xC6u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v16);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC7u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
    v10 = 0;
  }
  if ( v10 )
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
    v12 = *(_BYTE *)(a2 + 32);
    if ( v12 <= 6u && (v12 != 6 || *(_BYTE *)(a2 + 33) < 0x1Eu) || ndisStartDeviceSync )
    {
      v8 = 4;
      started = ndisStartDeviceSynchronous((PVOID)a2);
    }
    else
    {
      v13 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v8 = 4;
      v13->Control |= 1u;
      v14 = ndisScheduleStartDeviceWorkItem(a2, a3);
      if ( !v14 )
        goto LABEL_15;
      if ( (unsigned __int8)byte_1C00895D4 >= 2u )
        WPP_SF_qD(0x22u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2, v14);
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_15:
  NdisTraceLoggingDeviceStarted((const struct _TlgProvider_t *)a2, v8, started);
  *a5 = 0;
  return (unsigned int)started;
}
