/*
 * XREFs of Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     UsbhSetFdoPnpState @ 0x1C000A3F0 (UsbhSetFdoPnpState.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhAsyncStartComplete @ 0x1C0020E84 (UsbhAsyncStartComplete.c)
 *     UsbhModuleDispatch @ 0x1C0025134 (UsbhModuleDispatch.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0043F00 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop_CB(_QWORD *Tag, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int started; // esi
  int v7; // edx
  int v9; // edx
  int v10; // edx

  Log(Tag[1], 2, 2001945410, (__int64)Tag, a2);
  switch ( a2 )
  {
    case 2:
      UsbhAsyncStop(Tag, 2LL);
      UsbhModuleDispatch(0, v10, Tag[1], 6, 0LL, (__int64)Tag);
      return Usbh_PnpRemove(Tag, 2LL);
    case 3:
      UsbhAsyncStop(Tag, 3LL);
      UsbhModuleDispatch(0, v9, Tag[1], 6, 0LL, (__int64)Tag);
      v7 = 4;
      goto LABEL_6;
    case 5:
      UsbhAsyncStop(Tag, 5LL);
      v7 = 7;
LABEL_6:
      UsbhSetFdoPnpState(Tag[1], v7, a2);
      UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag);
      return 0LL;
  }
  if ( a2 != 8 )
    UsbhTrapFatal_Dbg(Tag[1], Tag, v4, v5);
  started = UsbhAsyncStartComplete(Tag);
  v7 = 5;
  if ( (started & 0xC0000000) != 0xC0000000 )
    goto LABEL_6;
  UsbhSetFdoPnpState(Tag[1], 5, 8);
  UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag);
  UsbhNotifyPnpOfFailure_Action(Tag[1]);
  return started;
}
