/*
 * XREFs of UsbhSshEnableDisable @ 0x1C001E600
 * Callers:
 *     UsbhHubSSH_PnpStart @ 0x1C001E450 (UsbhHubSSH_PnpStart.c)
 *     UsbhPowerCallback @ 0x1C001F520 (UsbhPowerCallback.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004C110 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1C004ECE0 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSshEnabled @ 0x1C001EB00 (UsbhSshEnabled.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhSshDisabled @ 0x1C0056964 (UsbhSshDisabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rax

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
          v15 = FdoExt(a1, v7, v8, v9);
          UsbhSshEnabled(a1, v15 + 478);
          *(_DWORD *)(v6 + 3280) = 4;
          return KeSetEvent((PRKEVENT)(v6 + 3360), 0, 0);
        }
        if ( (unsigned int)(a2 - 5) <= 1 )
          goto LABEL_21;
      }
      else if ( v10 == 6 )
      {
        v13 = FdoExt(a1, v7, v8, v9);
        UsbhSshDisabled(a1, v13 + 478);
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
          v14 = FdoExt(a1, v7, v8, v9);
          UsbhSshDisabled(a1, v14 + 478);
          goto LABEL_12;
        case 4:
LABEL_11:
          v12 = FdoExt(a1, v7, v8, v9);
          UsbhSshEnabled(a1, v12 + 478);
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
