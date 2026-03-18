/*
 * XREFs of UsbhFdoSubmitPdoIdleNotification @ 0x1C003F07C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhIdleIrp_Event @ 0x1C00555F4 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhFdoSubmitPdoIdleNotification(int a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+48h] [rbp-10h]

  if ( dword_1C0067640 )
  {
    v6 = -1073741637;
    BugCheckParameter4->IoStatus.Status = -1073741637;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v7, v8);
  }
  else
  {
    Parameters = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
    {
      return (unsigned int)UsbhIdleIrp_Event(a1, BugCheckParameter3, (_DWORD)BugCheckParameter4, 1, 0);
    }
    else
    {
      v6 = -1073741224;
      BugCheckParameter4->IoStatus.Status = -1073741224;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v10, v11);
      LOBYTE(v13) = 0;
      UsbhException(a1, 0, 122, 0, 0, -1073741224, 0, usbfile_dioctl_c, 1148, v13);
    }
  }
  return v6;
}
