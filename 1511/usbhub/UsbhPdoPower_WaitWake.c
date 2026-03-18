/*
 * XREFs of UsbhPdoPower_WaitWake @ 0x1C001ED50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C001EE40 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoPower_WaitWake(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int32 v10; // ebp
  unsigned int v11; // esi
  __int64 v13; // r8
  __int64 v14; // r9

  v6 = PdoExt(BugCheckParameter3, (__int64)BugCheckParameter4, a3, a4);
  FdoExt(*((_QWORD *)v6 + 147), v7, v8, v9);
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_DISPATCH, 0LL);
  v10 = _InterlockedIncrement(v6 + 586);
  v11 = UsbhIncPdoIoCount(BugCheckParameter3, BugCheckParameter4, 2004308036LL, 0LL);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v11);
    BugCheckParameter4->IoStatus.Status = v11;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    if ( (v6[353] & 0x100) != 0 )
    {
      if ( !v10 )
      {
        BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        Log(*((_QWORD *)v6 + 147), 16, 2004306249, 0LL, (__int64)BugCheckParameter4);
        IoCsqInsertIrp((PIO_CSQ)(v6 + 568), BugCheckParameter4, 0LL);
        return 259LL;
      }
      v11 = -2147483631;
    }
    else
    {
      v11 = -1073741637;
    }
    UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v11);
    BugCheckParameter4->IoStatus.Status = v11;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v13, v14);
  }
  _InterlockedDecrement(v6 + 586);
  return v11;
}
