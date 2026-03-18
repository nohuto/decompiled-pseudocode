/*
 * XREFs of Controller_EvtIoInternalDeviceControl @ 0x1C001E320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_EvtIoInternalDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // ebx

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  if ( LowPart == 2232247 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 64), 4u, 3u, 0xC1u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
    v7 = 0;
    Controller_ReportFatalError(v5, 2, 4159, 0, 0LL, 0LL);
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    v6 = WdfFunctions_01015;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(v6 + 272))(WdfDriverGlobals, a1, a2);
  }
  return v7;
}
