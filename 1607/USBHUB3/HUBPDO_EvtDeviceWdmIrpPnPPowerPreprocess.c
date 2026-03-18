/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0012020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0011E24 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess @ 0x1C001239C (HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0012608 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0012910 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_DispatchWdmPnpPowerIrpSynchronously @ 0x1C0015634 (HUBPDO_DispatchWdmPnpPowerIrpSynchronously.c)
 *     HUBIDLE_AddEvent @ 0x1C0030148 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C00680F4 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_PublishDualRoleFeaturesProperty @ 0x1C0068304 (HUBPDO_PublishDualRoleFeaturesProperty.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C006B114 (HUBMISC_ReportPnPFailureProblem.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C006F36C (HUBREG_UpdateSqmEnumerationFailureCode.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v3; // rbp
  int Status; // r15d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  int v15; // edi
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Status = a2->IoStatus.Status;
  v7 = 2;
  if ( CurrentStackLocation->MajorFunction == 22 )
  {
    if ( CurrentStackLocation->MinorFunction == 2 && CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         a1,
                         off_1C0058070)
                     + 24);
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4 && *(_DWORD *)(v3 + 2444) == 3 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v13 < 0 )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
            3u,
            5u,
            0x2Eu,
            (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
            v13);
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C0058070);
        HUBIDLE_AddEvent(v14 + 72, 6008LL, 0LL);
      }
      v7 = 1;
      *(_DWORD *)(v3 + 2444) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    }
    goto LABEL_37;
  }
  if ( CurrentStackLocation->MajorFunction != 27 )
    goto LABEL_37;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      goto LABEL_27;
    case 2u:
      *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C0058070)
                + 64) = 0LL;
      break;
    case 8u:
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess(a1);
    case 0xBu:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
LABEL_23:
      a2->IoStatus.Status = Status;
LABEL_28:
      v7 = 0;
      break;
    case 0xCu:
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(a1);
    case 0x13u:
      HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(a1);
      break;
    case 0x14u:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      if ( a2->IoStatus.Information )
      {
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C0058070);
        v3 = *(_QWORD *)(v10 + 24);
        if ( *(_DWORD *)(v3 + 2416) )
        {
          HUBREG_UpdateSqmEnumerationFailureCode(*(_QWORD *)(v10 + 24));
          HUBMISC_ReportPnPFailureProblem(a1);
        }
        goto LABEL_28;
      }
      goto LABEL_23;
    case 0x17u:
LABEL_27:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      goto LABEL_28;
    case 0x19u:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      HUBPDO_QueryForD3ColdSupportInAcpi(a1);
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0058070);
      v9 = v8;
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 24) + 2616LL) )
        HUBPDO_PublishBillboardDetails(v8);
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 1616LL) & 0x40000) != 0 )
        HUBPDO_PublishDualRoleFeaturesProperty(v9);
      a2->IoStatus.Status = 0;
      goto LABEL_28;
  }
LABEL_37:
  if ( !v7 )
  {
    v12 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v12;
  }
  v15 = v7 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      return (unsigned int)-1073741823;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
  }
  else
  {
    v16 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v16->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v16[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v16->Parameters.QueryDeviceRelations + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v17 = a2->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion;
    v17[-1].Context = (void *)v3;
    v17[-1].Control = -32;
  }
  return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                         WdfDriverGlobals,
                         a1,
                         a2);
}
