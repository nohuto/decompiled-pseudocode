/*
 * XREFs of UsbhSshEnableDisable @ 0x1C001D680
 * Callers:
 *     UsbhPowerCallback @ 0x1C001D750 (UsbhPowerCallback.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001D890 (UsbhHubSSH_PnpStart.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BAC0 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1C004E610 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSshEnabled @ 0x1C001C640 (UsbhSshEnabled.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhSshDisabled @ 0x1C00561C4 (UsbhSshDisabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  _DWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  KeWaitForSingleObject((PVOID)(v6 + 3360), Executive, 0, 0, 0LL);
  v10 = *(_DWORD *)(v6 + 3280);
  if ( v10 > 0 )
  {
    if ( v10 > 3 )
    {
      if ( v10 <= 5 )
      {
        if ( a2 == 4 )
        {
          v17 = FdoExt(a1, v7, v8, v9);
          UsbhSshEnabled(a1, (__int64)(v17 + 478), v18, v19);
          *(_DWORD *)(v6 + 3280) = 4;
          return KeSetEvent((PRKEVENT)(v6 + 3360), 0, 0);
        }
        if ( (unsigned int)(a2 - 5) <= 1 )
          goto LABEL_21;
      }
      else if ( v10 == 6 )
      {
        v15 = FdoExt(a1, v7, v8, v9);
        UsbhSshDisabled(a1, v15 + 478);
      }
    }
    else
    {
      switch ( a2 )
      {
        case 2:
          goto LABEL_11;
        case 3:
LABEL_21:
          v16 = FdoExt(a1, v7, v8, v9);
          UsbhSshDisabled(a1, v16 + 478);
          goto LABEL_12;
        case 4:
LABEL_11:
          v12 = FdoExt(a1, v7, v8, v9);
          UsbhSshEnabled(a1, (__int64)(v12 + 478), v13, v14);
LABEL_12:
          *(_DWORD *)(v6 + 3280) = a2;
          return KeSetEvent((PRKEVENT)(v6 + 3360), 0, 0);
      }
      if ( a2 > 4 && a2 <= 6 )
        goto LABEL_21;
    }
  }
  return KeSetEvent((PRKEVENT)(v6 + 3360), 0, 0);
}
