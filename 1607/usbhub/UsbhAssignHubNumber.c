/*
 * XREFs of UsbhAssignHubNumber @ 0x1C000A0C0
 * Callers:
 *     UsbhAddDevice @ 0x1C000A140 (UsbhAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

LONG __fastcall UsbhAssignHubNumber(__int64 a1)
{
  __int64 v1; // rbx
  void **CurrentIrp; // rax
  void ***v3; // rbx

  v1 = FdoExt(a1);
  *(_DWORD *)(v1 + 1376) = USBD_AllocateHubNumber();
  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  CurrentIrp = (void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  v3 = (void ***)(v1 + 5152);
  if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    __fastfail(3u);
  *v3 = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v3[1] = CurrentIrp;
  *CurrentIrp = v3;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = v3;
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
