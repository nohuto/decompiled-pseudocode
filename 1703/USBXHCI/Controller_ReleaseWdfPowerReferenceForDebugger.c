/*
 * XREFs of Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C001B6A0
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C001B580 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C00544D0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Template_pt @ 0x1C001C9B8 (Template_pt.c)
 */

__int64 __fastcall Controller_ReleaseWdfPowerReferenceForDebugger(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 416) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(_QWORD *), __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)a1,
      Controller_AcquireWdfPowerReferenceForDebugger,
      8650LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    *(_BYTE *)(a1 + 416) = 0;
    result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
      return Template_pt(v3, v2, v4, a1, 0);
  }
  return result;
}
