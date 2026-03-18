/*
 * XREFs of UsbhSetPcqEventStatus @ 0x1C00258C0
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0004090 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004660 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0004880 (UsbhSignalDriverResetEvent.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000D740 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000E6F0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0012B60 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C00244C0 (Usbh_PCE_HardwareWake_Action.c)
 *     UsbhiSignalResumeEvent @ 0x1C0025544 (UsbhiSignalResumeEvent.c)
 *     UsbhSignalResumeEvent @ 0x1C00256AC (UsbhSignalResumeEvent.c)
 *     UsbhSetResumePending @ 0x1C0025840 (UsbhSetResumePending.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041CF8 (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_Close_Action @ 0x1C0042064 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0042268 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C00427CC (Usbh_PCE_SD_Resume_Action.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042D70 (UsbhiSignalSuspendEvent.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C00459A8 (Usbh_iSignalSyncDeviceReset.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
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
