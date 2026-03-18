/*
 * XREFs of Usbh_FDO_WaitPnpRestart @ 0x1C004C110
 * Callers:
 *     <none>
 * Callees:
 *     UsbhModuleDispatch @ 0x1C0004C80 (UsbhModuleDispatch.c)
 *     UsbhHubStart @ 0x1C000AFA4 (UsbhHubStart.c)
 *     UsbhSetFdoPnpState @ 0x1C000B850 (UsbhSetFdoPnpState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSshEnableDisable @ 0x1C001E600 (UsbhSshEnableDisable.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhSshEnabled @ 0x1C001EB00 (UsbhSshEnabled.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     Usbh_PnpRemove @ 0x1C004C400 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpRestart(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // r8
  __int64 v23; // r9

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  Log(*(_QWORD *)(a1 + 8), 2, 2001883988, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), 2, v7, v5, 2LL);
  v11 = v5 - 2;
  if ( !v11 )
    return Usbh_PnpRemove(a1, 2LL);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( v12 != 1 )
      UsbhTrapFatal_Dbg(v13, a1);
    UsbhSshEnabled(v13, a1, v9, v10);
    UsbhSshEnableDisable(*(_QWORD *)(a1 + 8), v6[820], v14, v15);
    v6[640] &= ~0x200u;
    KeResetEvent((PRKEVENT)(v6 + 650));
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 5, 4);
    v16 = UsbhHubStart(a1, 2);
    v18 = v16;
    if ( (v16 & 0xC0000000) == 0xC0000000 )
    {
      UsbhModuleDispatch(0, v17, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 7);
    }
    Log(*(_QWORD *)(a1 + 8), 2, 2001883988, v18, 3LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v19, v20);
    return (unsigned int)v18;
  }
  else
  {
    UsbhModuleDispatch(0, v8, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 3);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v22, v23);
    return 0LL;
  }
}
