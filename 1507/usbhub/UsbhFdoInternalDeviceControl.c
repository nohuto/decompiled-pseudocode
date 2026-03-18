/*
 * XREFs of UsbhFdoInternalDeviceControl @ 0x1C00278D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C0027914 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhFdoChainIrp @ 0x1C0029C78 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoInternalDeviceControl(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 CurrentStackLocation; // r8

  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  switch ( *(_DWORD *)(CurrentStackLocation + 24) )
  {
    case 0x220447:
    case 0x22044B:
      a2->IoStatus.Status = -1073741637;
      IofCompleteRequest(a2, 0);
      return 3221225659LL;
    case 0x220FA3:
      return UsbhInternalIoctlPropagateResume(a1, a2);
    case 0x220FA7:
      FdoExt(
        (__int64)a1,
        (__int64)a2,
        CurrentStackLocation,
        (unsigned int)(*(_DWORD *)(CurrentStackLocation + 24) - 2232227))[1054] = 2;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    default:
      return UsbhFdoChainIrp(a1, a2);
  }
}
