/*
 * XREFs of UsbhSetPcqEventStatus @ 0x1C001F9D0
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003E90 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004460 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0004680 (UsbhSignalDriverResetEvent.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0013310 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0014370 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0017DA0 (Usbh_PCE_wDone_Action.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     UsbhSetResumePending @ 0x1C001F950 (UsbhSetResumePending.c)
 *     UsbhiSignalResumeEvent @ 0x1C001FC60 (UsbhiSignalResumeEvent.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0023B00 (Usbh_PCE_HardwareWake_Action.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_Close_Action @ 0x1C0041D2C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041F30 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0042494 (Usbh_PCE_SD_Resume_Action.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045668 (Usbh_iSignalSyncDeviceReset.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 */

void __fastcall UsbhSetPcqEventStatus(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r11d
  __int64 v6; // r10
  _DWORD *v7; // r8
  int v8; // r11d
  int v9; // r11d

  Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v7 = (_DWORD *)(v6 + 32 * (*(unsigned int *)(v6 + 2400) + 43LL));
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v7[7] = a4;
      }
      else
      {
        v7[6] = a4;
      }
    }
    else
    {
      v7[5] = a4;
    }
  }
  else
  {
    v7[4] = a4;
  }
}
