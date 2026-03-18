/*
 * XREFs of UsbhPdoSuccess @ 0x1C00549C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C001EE40 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSuccess(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1346654035LL, 0LL);
  BugCheckParameter4->IoStatus.Status = v4;
  IofCompleteRequest(BugCheckParameter4, 0);
  if ( (v4 & 0xC0000000) != 0xC0000000 )
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v5, v6);
  return v4;
}
