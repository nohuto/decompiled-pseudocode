/*
 * XREFs of Usbh_FDO_WaitPnpRestart @ 0x1C004BA70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     UsbhSshEnableDisable @ 0x1C0009F68 (UsbhSshEnableDisable.c)
 *     UsbhHubStart @ 0x1C000A268 (UsbhHubStart.c)
 *     UsbhSetFdoPnpState @ 0x1C000A3F0 (UsbhSetFdoPnpState.c)
 *     UsbhSshEnabled @ 0x1C000A4C8 (UsbhSshEnabled.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhModuleDispatch @ 0x1C0025134 (UsbhModuleDispatch.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpRestart(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // edi
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  Log(*(_QWORD *)(a1 + 8), 2, 2001883988, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), 2, v7, v5, 2LL);
  v9 = v5 - 2;
  if ( !v9 )
    return Usbh_PnpRemove(a1, 2LL);
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v10 != 1 )
      UsbhTrapFatal_Dbg(v11, a1);
    UsbhSshEnabled(v11, a1);
    UsbhSshEnableDisable(*(_QWORD *)(a1 + 8), v6[820], v12, v13);
    v6[640] &= ~0x200u;
    KeResetEvent((PRKEVENT)(v6 + 650));
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 5, 4);
    v14 = UsbhHubStart(a1, 2);
    v16 = v14;
    if ( (v14 & 0xC0000000) == 0xC0000000 )
    {
      UsbhModuleDispatch(0, v15, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 7);
    }
    Log(*(_QWORD *)(a1 + 8), 2, 2001883988, v16, 3LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return (unsigned int)v16;
  }
  else
  {
    UsbhModuleDispatch(0, v8, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 3);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
