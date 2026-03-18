/*
 * XREFs of UsbhPdoDeviceControl @ 0x1C0028F10
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C00074E0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     KsPropertyHandleDrmSetContentId @ 0x1C0070844 (KsPropertyHandleDrmSetContentId.c)
 */

__int64 __fastcall UsbhPdoDeviceControl(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int LowPart; // esi
  __int64 v5; // rdx
  int Status; // edi
  __int64 v7; // r9
  __int64 v8; // r8
  _DWORD *v9; // rax
  _DWORD *v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9

  LowPart = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Status = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1145655107LL, LowPart);
  v8 = Status & 0xC0000000;
  if ( (_DWORD)v8 == -1073741824 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    v9 = PdoExt(BugCheckParameter3, v5, v8, v7);
    v10 = v9;
    if ( LowPart == 2952208 )
    {
      Status = -1073741637;
      Log(*((_QWORD *)v9 + 147), 256, 1885957938, (__int64)BugCheckParameter4, 0LL);
    }
    else if ( LowPart == 3080195 )
    {
      Status = KsPropertyHandleDrmSetContentId(BugCheckParameter4);
      Log(*((_QWORD *)v10 + 147), 256, 1885957937, (__int64)BugCheckParameter4, Status);
    }
    else
    {
      Log(*((_QWORD *)v9 + 147), 256, 1885957939, (__int64)BugCheckParameter4, BugCheckParameter4->IoStatus.Status);
      Status = BugCheckParameter4->IoStatus.Status;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v11, v12);
  }
  return (unsigned int)Status;
}
