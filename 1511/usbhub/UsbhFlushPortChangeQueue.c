/*
 * XREFs of UsbhFlushPortChangeQueue @ 0x1C001D114
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003E90 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0013310 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0017DA0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C001AA70 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C001D074 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0041D2C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041F30 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C00422A4 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0042494 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00425DC (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFlushPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx
  __int64 **v7; // rdi
  __int64 *v8; // r8
  __int64 v9; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6, a3, a4);
  v7 = (__int64 **)(a2 + 456);
  while ( *v7 != (__int64 *)v7 )
  {
    v8 = *v7;
    v9 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = (__int64 *)v9;
    LOBYTE(a4) = 1;
    *(_QWORD *)(v9 + 8) = v7;
    UsbhFreePortChangeQueueObject(a1, a2, v8 - 2, a4);
  }
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
}
