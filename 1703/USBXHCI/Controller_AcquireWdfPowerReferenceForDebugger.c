/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C001A510
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C001B580 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Template_pt @ 0x1C001C9B8 (Template_pt.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 416) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01015 + 3504))(
           WdfDriverGlobals,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           8617,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 416) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
        Template_pt(v4, v3, v5, a1, 1);
    }
    else
    {
      v6 = v2;
      WPP_RECORDER_SF_qd(a1[8], 2u, 3u, 0xF2u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, *a1, v6);
    }
  }
}
