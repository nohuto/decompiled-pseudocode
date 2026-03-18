/*
 * XREFs of Usbh_FDO_WaitPnpStop @ 0x1C004BC00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncBusPause @ 0x1C0002610 (UsbhSyncBusPause.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00089C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     UsbhSetFdoPnpState @ 0x1C000A3F0 (UsbhSetFdoPnpState.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhModuleDispatch @ 0x1C0025134 (UsbhModuleDispatch.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0044908 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x1C004685C (UsbhDisableHardReset.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 *     UsbhSshDisabled @ 0x1C0056334 (UsbhSshDisabled.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop(ULONG_PTR a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  int v11; // ebp
  __int64 v12; // r9
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  Log(*(_QWORD *)(a1 + 8), 2, 2001949776, a1, a2);
  if ( a2 == 2 )
  {
    UsbhModuleDispatch(0, v4, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    return Usbh_PnpRemove(a1, 2LL);
  }
  else
  {
    if ( a2 == 3 )
    {
      v11 = UsbhFdoCheckUpstreamConnectionState(*(_QWORD *)(a1 + 8), &v14, v5, v6);
      if ( v11 >= 0 )
        Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6u, a1, v12);
      UsbhModuleDispatch(0, v10, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      v9 = 4;
      if ( v11 >= 0 )
        Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
    else if ( a2 == 4 )
    {
      v9 = 5;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( a2 != 5 )
        UsbhTrapFatal_Dbg(v7, a1);
      UsbhDisableHardReset(v7);
      Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6u, a1, v8);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(_QWORD *)(a1 + 8), a1, 4);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
      v9 = 7;
    }
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), v9, a2);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
