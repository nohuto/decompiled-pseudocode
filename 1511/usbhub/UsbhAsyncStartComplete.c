/*
 * XREFs of UsbhAsyncStartComplete @ 0x1C0020E84
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFinishStart @ 0x1C001B760 (UsbhFinishStart.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhAsyncStartComplete(_QWORD *Tag, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v6; // esi
  __int64 v7; // r8

  v5 = FdoExt(Tag[1], a2, a3, a4);
  Log(Tag[1], 2, 1634957635, Tag[1], (__int64)Tag);
  v6 = UsbhFinishStart(Tag[1], (__int64)Tag);
  v7 = 5LL;
  if ( v6 < 0 )
    v7 = 9LL;
  UsbhDispatch_BusEvent(Tag[1], Tag, v7);
  *((_QWORD *)v5 + 639) = MEMORY[0xFFFFF78000000014];
  KeSetEvent((PRKEVENT)(v5 + 644), 0, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Tag, 0x20u);
  return (unsigned int)v6;
}
