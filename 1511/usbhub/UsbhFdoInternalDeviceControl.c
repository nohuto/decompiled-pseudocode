/*
 * XREFs of UsbhFdoInternalDeviceControl @ 0x1C0026AB0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C0026AF4 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhFdoChainIrp @ 0x1C0028C38 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoInternalDeviceControl(__int64 a1, IRP *a2)
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
      return UsbhInternalIoctlPropagateResume();
    case 0x220FA7:
      FdoExt(a1, (__int64)a2, CurrentStackLocation, (unsigned int)(*(_DWORD *)(CurrentStackLocation + 24) - 2232227))[1054] = 2;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    default:
      return UsbhFdoChainIrp(a1, a2);
  }
}
