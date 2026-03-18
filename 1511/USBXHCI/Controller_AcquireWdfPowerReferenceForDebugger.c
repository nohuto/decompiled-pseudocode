/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C001DD20
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C001ED30 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00079B0 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Template_pt @ 0x1C00200B8 (Template_pt.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 408) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01015 + 3504))(
           WdfDriverGlobals,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           8511,
           "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 408) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
        Template_pt(v4, v3, v5, a1, 1);
    }
    else
    {
      v6 = v2;
      WPP_RECORDER_SF_qd(a1[8], 2u, 3u, 0xF0u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, *a1, v6);
    }
  }
}
