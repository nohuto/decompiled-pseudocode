/*
 * XREFs of UsbhPdoPower_Sequence @ 0x1C00466F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C00074E0 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoPower_Sequence(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1934643031LL, 0LL);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = v4;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v4;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = 0;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v6, v7);
    return 0LL;
  }
}
