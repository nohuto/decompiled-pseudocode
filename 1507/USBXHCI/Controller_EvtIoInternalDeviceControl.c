/*
 * XREFs of Controller_EvtIoInternalDeviceControl @ 0x1C0014CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_EvtIoInternalDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  __int64 v5; // rsi
  unsigned int v6; // ebx

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  if ( LowPart == 2232247 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 64), 4u, 3u, 0xBFu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    v6 = 0;
    Controller_ReportFatalError(v5, 2, 4159, 0, 0LL, 0LL);
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(unsigned int (__fastcall **)(_LIST_ENTRY *, __int64, IRP *))(WdfFunctions_01015 + 272))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a1,
             a2);
  }
  return v6;
}
