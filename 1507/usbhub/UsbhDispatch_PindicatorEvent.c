/*
 * XREFs of UsbhDispatch_PindicatorEvent @ 0x1C0029550
 * Callers:
 *     UsbhEnablePortIndicators @ 0x1C0021F14 (UsbhEnablePortIndicators.c)
 *     UsbhDisablePortIndicators @ 0x1C003D71C (UsbhDisablePortIndicators.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003DC9C (UsbhDeviceOvercurrentPopup.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     Usbh_PIND_Enable_Action @ 0x1C00295EC (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003D86C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003D930 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003D9F4 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DAD4 (Usbh_PIND_Timeout_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhDispatch_PindicatorEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  v5 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_2b88037d15597a26bc3d8f7fc80400b3_Traceguids,
      a3);
  Log(a1, 0x8000, 1718371670, a4, v5);
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            Usbh_PIND_Enable_Action(a1, a2, a4);
        }
        else
        {
          Usbh_PIND_SetBlink_Action(a1, a2, a4);
        }
      }
      else
      {
        Usbh_PIND_SetAuto_Action(a1, a2, a4);
      }
    }
    else
    {
      Usbh_PIND_Disable_Action(a1, a2, a4);
    }
  }
  else
  {
    Usbh_PIND_Timeout_Action(a1, a2, a4);
  }
}
