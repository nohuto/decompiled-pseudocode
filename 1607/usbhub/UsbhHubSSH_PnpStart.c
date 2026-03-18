/*
 * XREFs of UsbhHubSSH_PnpStart @ 0x1C001E450
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001C9F0 (UsbhEnableTimerObject.c)
 *     UsbhSshBusBusy @ 0x1C001E580 (UsbhSshBusBusy.c)
 *     UsbhSshEnableDisable @ 0x1C001E600 (UsbhSshEnableDisable.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhHubSSH_PnpStart(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rsi
  _DWORD *v12; // rax
  int v13; // eax
  unsigned int v15; // [rsp+44h] [rbp-34h] BYREF
  int v16; // [rsp+48h] [rbp-30h] BYREF

  Log(a1, 0x10000, 1936937844, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v7 = FdoExt(*(_QWORD *)(a2 + 8), v4, v5, v6);
  v10 = 5LL;
  v11 = v7;
  *((_BYTE *)v7 + 3409) = 1;
  if ( v7[820] == 5 )
    UsbhSshEnableDisable(a1);
  v15 = 0;
  v16 = 0;
  v12 = FdoExt(a1, v10, v8, v9);
  if ( *((_QWORD *)v12 + 539) )
  {
    v13 = (*((__int64 (__fastcall **)(_QWORD, int *, __int64, unsigned int *))v12 + 539))(
            *((_QWORD *)v12 + 529),
            &v16,
            10LL,
            &v15);
    if ( v13 >= 0 )
    {
      if ( v15 < 0xA )
        v13 = -1073741811;
      if ( v13 >= 0 )
        UsbhSshEnableDisable(a1);
    }
  }
  UsbhSshBusBusy(a1, a2);
  *((_BYTE *)v11 + 3408) = 1;
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v11 + 800), 2000LL, 0LL, a2, 0x77485353u);
  return 0LL;
}
