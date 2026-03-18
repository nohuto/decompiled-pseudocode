/*
 * XREFs of UsbhSshEnableDisable @ 0x1C0009F68
 * Callers:
 *     UsbhHubSSH_PnpStart @ 0x1C0009C70 (UsbhHubSSH_PnpStart.c)
 *     UsbhPowerCallback @ 0x1C0009EA0 (UsbhPowerCallback.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BA70 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1C004E570 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     UsbhSshEnabled @ 0x1C000A4C8 (UsbhSshEnabled.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhSshDisabled @ 0x1C0056334 (UsbhSshDisabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  KeWaitForSingleObject((PVOID)(v6 + 3360), Executive, 0, 0, 0LL);
  v7 = *(_DWORD *)(v6 + 3280);
  if ( v7 > 0 )
  {
    if ( v7 > 3 )
    {
      if ( v7 <= 5 )
      {
        if ( a2 == 4 )
        {
          v12 = FdoExt(a1);
          UsbhSshEnabled(a1, v12 + 1912);
          *(_DWORD *)(v6 + 3280) = 4;
          return KeSetEvent((PRKEVENT)(v6 + 3360), 0, 0);
        }
        if ( (unsigned int)(a2 - 5) <= 1 )
          goto LABEL_21;
      }
      else if ( v7 == 6 )
      {
        v10 = FdoExt(a1);
        UsbhSshDisabled(a1, v10 + 1912);
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
          v11 = FdoExt(a1);
          UsbhSshDisabled(a1, v11 + 1912);
          goto LABEL_12;
        case 4:
LABEL_11:
          v9 = FdoExt(a1);
          UsbhSshEnabled(a1, v9 + 1912);
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
