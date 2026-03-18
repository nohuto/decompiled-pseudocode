/*
 * XREFs of Usbh_FDO_WaitPnpStop_CB @ 0x1C0025940
 * Callers:
 *     <none>
 * Callees:
 *     UsbhModuleDispatch @ 0x1C0004C80 (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1C000B850 (UsbhSetFdoPnpState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAsyncStartComplete @ 0x1C00259E4 (UsbhAsyncStartComplete.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0044240 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhAsyncStop @ 0x1C004B25C (UsbhAsyncStop.c)
 *     Usbh_PnpRemove @ 0x1C004C400 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop_CB(_QWORD *Tag, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int started; // esi
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx

  Log(Tag[1], 2, 2001945410, (__int64)Tag, a2);
  switch ( a2 )
  {
    case 2:
      UsbhAsyncStop(Tag, 2LL);
      UsbhModuleDispatch(0, v14, (_LIST_ENTRY *)Tag[1], 6, 0LL, (__int64)Tag);
      return Usbh_PnpRemove(Tag, 2LL);
    case 3:
      UsbhAsyncStop(Tag, 3LL);
      UsbhModuleDispatch(0, v13, (_LIST_ENTRY *)Tag[1], 6, 0LL, (__int64)Tag);
      v7 = 4;
      goto LABEL_6;
    case 5:
      UsbhAsyncStop(Tag, 5LL);
      v7 = 7;
LABEL_6:
      UsbhSetFdoPnpState(Tag[1], v7, a2);
      UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag, v8, v9);
      return 0LL;
  }
  if ( a2 != 8 )
    UsbhTrapFatal_Dbg(Tag[1], Tag, v4, v5);
  started = UsbhAsyncStartComplete(Tag);
  v7 = 5;
  if ( (started & 0xC0000000) != 0xC0000000 )
    goto LABEL_6;
  UsbhSetFdoPnpState(Tag[1], 5, 8);
  UsbhReleaseFdoPnpLock(Tag[1], (__int64)Tag, v11, v12);
  UsbhNotifyPnpOfFailure_Action(Tag[1]);
  return started;
}
