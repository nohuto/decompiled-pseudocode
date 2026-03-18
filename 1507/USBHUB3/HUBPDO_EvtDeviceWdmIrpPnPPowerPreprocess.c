/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0011940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0011744 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess @ 0x1C0011BE8 (HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0011E54 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C001215C (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_DispatchWdmPnpPowerIrpSynchronously @ 0x1C0014F54 (HUBPDO_DispatchWdmPnpPowerIrpSynchronously.c)
 *     HUBIDLE_AddEvent @ 0x1C002F1B8 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C0069460 (HUBMISC_ReportPnPFailureProblem.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C006D6BC (HUBREG_UpdateSqmEnumerationFailureCode.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int Status; // ebp
  __int64 v6; // rax
  unsigned int v8; // edi
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  if ( CurrentStackLocation->MajorFunction == 22 )
  {
    if ( CurrentStackLocation->MinorFunction == 2 && CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      v9 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         a1,
                         off_1C00570C0)
                     + 24);
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4 && *(_DWORD *)(v9 + 2444) == 3 )
      {
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v10 < 0 )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 1432LL),
            3u,
            5u,
            0x2Eu,
            (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
            v10);
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C00570C0);
        HUBIDLE_AddEvent(v11 + 72, 6008LL, 0LL);
      }
      *(_DWORD *)(v9 + 2444) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    }
    goto LABEL_32;
  }
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
LABEL_32:
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                           WdfDriverGlobals,
                           a1,
                           a2);
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
LABEL_22:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      goto LABEL_23;
    case 2u:
      *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C00570C0)
                + 64) = 0LL;
      goto LABEL_32;
    case 8u:
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess(a1);
    case 0xBu:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
LABEL_19:
      a2->IoStatus.Status = Status;
      goto LABEL_23;
    case 0xCu:
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(a1);
    case 0x13u:
      HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(a1);
      goto LABEL_32;
    case 0x14u:
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      if ( a2->IoStatus.Information )
      {
        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               a1,
               off_1C00570C0);
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 24) + 2416LL) )
        {
          HUBREG_UpdateSqmEnumerationFailureCode(*(_QWORD *)(v6 + 24));
          HUBMISC_ReportPnPFailureProblem(a1);
        }
        goto LABEL_23;
      }
      goto LABEL_19;
    case 0x17u:
      goto LABEL_22;
  }
  if ( CurrentStackLocation->MinorFunction != 25 )
    goto LABEL_32;
  HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
  HUBPDO_QueryForD3ColdSupportInAcpi(a1);
  a2->IoStatus.Status = 0;
LABEL_23:
  v8 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v8;
}
