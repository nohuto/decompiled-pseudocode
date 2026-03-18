/*
 * XREFs of UsbhAssignHubNumber @ 0x1C000A13C
 * Callers:
 *     UsbhAddDevice @ 0x1C00094A0 (UsbhAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

LONG __fastcall UsbhAssignHubNumber(__int64 a1)
{
  __int64 v1; // rbx
  struct _DEVICE_OBJECT **CurrentIrp; // rax
  void ***v3; // rbx

  v1 = FdoExt(a1);
  *(_DWORD *)(v1 + 1376) = USBD_AllocateHubNumber();
  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  CurrentIrp = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  v3 = (void ***)(v1 + 5152);
  *v3 = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v3[1] = (void **)CurrentIrp;
  if ( *CurrentIrp != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    __fastfail(3u);
  *CurrentIrp = (struct _DEVICE_OBJECT *)v3;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = v3;
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
