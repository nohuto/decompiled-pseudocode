/*
 * XREFs of Usbh_FDO_WaitPnpRestart @ 0x1C004BAC0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSshEnabled @ 0x1C001C640 (UsbhSshEnabled.c)
 *     UsbhSshEnableDisable @ 0x1C001D680 (UsbhSshEnableDisable.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 *     UsbhHubStart @ 0x1C0021B28 (UsbhHubStart.c)
 *     UsbhSetFdoPnpState @ 0x1C0021CB0 (UsbhSetFdoPnpState.c)
 *     UsbhModuleDispatch @ 0x1C00262CC (UsbhModuleDispatch.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
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
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9

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
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 5LL, 4LL, v16);
    v19 = UsbhHubStart(a1, 2LL, v17, v18);
    v21 = v19;
    if ( (v19 & 0xC0000000) == 0xC0000000 )
    {
      UsbhModuleDispatch(0, v20, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4LL, 7LL, v22);
    }
    Log(*(_QWORD *)(a1 + 8), 2, 2001883988, v21, 3LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v23, v24);
    return (unsigned int)v21;
  }
  else
  {
    UsbhModuleDispatch(0, v8, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4LL, 3LL, v26);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v27, v28);
    return 0LL;
  }
}
