/*
 * XREFs of UsbhReleaseBusStateLock @ 0x1C0021A9C
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C0003CAC (Usbh_BS_BusSuspend.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusPause @ 0x1C0021994 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusRun @ 0x1C0021B4C (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusInit @ 0x1C0021C60 (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusStop @ 0x1C0021CE4 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusRemove @ 0x1C003F48C (Usbh_BS_BusRemove.c)
 * Callees:
 *     UsbhBusSuspend_Action @ 0x1C0004A20 (UsbhBusSuspend_Action.c)
 *     UsbhBusResume_Action @ 0x1C0016350 (UsbhBusResume_Action.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhReleaseBusStateLock(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int *DeviceExtension; // rbx
  __int64 v7; // rax

  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
  if ( DeviceExtension[610] != (_DWORD)a3 )
  {
    DeviceExtension[610] = a3;
    *(_DWORD *)(a2 + 80) = a3;
    if ( (_DWORD)a3 == 3 )
    {
      UsbhBusResume_Action(a1, a2, a3, a4);
    }
    else if ( (_DWORD)a3 == 5 )
    {
      UsbhBusSuspend_Action((__int64)a1, a2);
    }
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v7 = DeviceExtension[208];
  *((_QWORD *)DeviceExtension + 167) = 0LL;
  DeviceExtension[8 * v7 + 137] = v4;
  KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 612), 16, 1, 0);
  return v4;
}
