/*
 * XREFs of UsbhAssignHubNumber @ 0x1C001E58C
 * Callers:
 *     UsbhAddDevice @ 0x1C001D8F0 (UsbhAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

LONG __fastcall UsbhAssignHubNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  struct _DEVICE_OBJECT **CurrentIrp; // rax
  void ***v6; // rbx

  v4 = FdoExt(a1, a2, a3, a4);
  v4[344] = USBD_AllocateHubNumber();
  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  CurrentIrp = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  v6 = (void ***)(v4 + 1288);
  *v6 = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v6[1] = (void **)CurrentIrp;
  if ( *CurrentIrp != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    __fastfail(3u);
  *CurrentIrp = (struct _DEVICE_OBJECT *)v6;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = v6;
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
