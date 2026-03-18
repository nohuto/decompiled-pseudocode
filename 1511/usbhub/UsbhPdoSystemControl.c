/*
 * XREFs of UsbhPdoSystemControl @ 0x1C001EC60
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C001EE40 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSystemControl(struct _DEVICE_OBJECT *BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int Status; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rbx
  NTSTATUS v9; // esi
  __int64 v10; // r9
  __int64 v11; // r8
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+48h] [rbp+10h] BYREF

  Status = BugCheckParameter4->IoStatus.Status;
  if ( (UsbhIncPdoIoCount(BugCheckParameter3, BugCheckParameter4, 1398362953LL, 0LL) & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    return Status;
  }
  else
  {
    v8 = PdoExt((__int64)BugCheckParameter3, v5, v6, v7);
    Log(*((_QWORD *)v8 + 147), 256, 1347898697, (__int64)BugCheckParameter4, 0LL);
    v9 = WmiSystemControl((PWMILIB_CONTEXT)(v8 + 332), BugCheckParameter3, BugCheckParameter4, &IrpDisposition);
    Log(*((_QWORD *)v8 + 147), 256, 1884769609, (__int64)BugCheckParameter4, v9);
    v11 = (unsigned int)IrpDisposition;
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotWmi )
        v9 = BugCheckParameter4->IoStatus.Status;
      BugCheckParameter4->IoStatus.Status = v9;
      IofCompleteRequest(BugCheckParameter4, 0);
    }
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v11, v10);
    return (unsigned int)v9;
  }
}
