/*
 * XREFs of Usbh_FDO_WaitPnpStop_CB @ 0x1C0021690
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAsyncStartComplete @ 0x1C0021734 (UsbhAsyncStartComplete.c)
 *     UsbhSetFdoPnpState @ 0x1C0021CB0 (UsbhSetFdoPnpState.c)
 *     UsbhModuleDispatch @ 0x1C00262CC (UsbhModuleDispatch.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0043DD0 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhAsyncStop @ 0x1C004AC0C (UsbhAsyncStop.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop_CB(_QWORD *Tag, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int started; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // edx

  Log(Tag[1], 2, 2001945410, (__int64)Tag, (int)a2);
  switch ( a2 )
  {
    case 2u:
      UsbhAsyncStop(Tag, 2LL);
      UsbhModuleDispatch(0, v14, Tag[1], 6, 0LL, (__int64)Tag);
      return Usbh_PnpRemove(Tag, 2LL);
    case 3u:
      UsbhAsyncStop(Tag, 3LL);
      UsbhModuleDispatch(0, v13, Tag[1], 6, 0LL, (__int64)Tag);
      v7 = 4LL;
      goto LABEL_6;
    case 5u:
      UsbhAsyncStop(Tag, 5LL);
      v7 = 7LL;
LABEL_6:
      UsbhSetFdoPnpState(Tag[1], v7, a2);
      UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag, v8, v9);
      return 0LL;
  }
  if ( a2 != 8 )
    UsbhTrapFatal_Dbg(Tag[1], Tag, v4, v5);
  started = UsbhAsyncStartComplete(Tag);
  v7 = 5LL;
  if ( (started & 0xC0000000) != 0xC0000000 )
    goto LABEL_6;
  UsbhSetFdoPnpState(Tag[1], 5LL, 8LL);
  UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag, v11, v12);
  UsbhNotifyPnpOfFailure_Action(Tag[1]);
  return started;
}
