/*
 * XREFs of Usbh_FDO_WaitPnpRemove @ 0x1C004BA20
 * Callers:
 *     <none>
 * Callees:
 *     GET_FDO_PNPSTATE @ 0x1C0002104 (GET_FDO_PNPSTATE.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 *     UsbhSetFdoPnpState @ 0x1C0021CB0 (UsbhSetFdoPnpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpRemove(ULONG_PTR a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned int v7; // r10d
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = a2;
  GET_FDO_PNPSTATE(a1);
  Log(*(_QWORD *)(a1 + 8), 2, 2001882454, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), v5, v4, v2, v5);
  v8 = v2 - v7;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( v8 != 1 )
      UsbhTrapFatal_Dbg(v9, a1);
    UsbhSetFdoPnpState(v9, 4LL, 3LL, v6);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v10, v11);
  }
  else
  {
    Usbh_PnpRemove(a1, v7);
  }
  return 0LL;
}
