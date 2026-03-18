/*
 * XREFs of UsbhHubSSH_PnpStart @ 0x1C001D890
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshBusBusy @ 0x1C000B654 (UsbhSshBusBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhSshEnableDisable @ 0x1C001D680 (UsbhSshEnableDisable.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhHubSSH_PnpStart(struct _DEVICE_OBJECT *a1, __int64 a2)
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
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // cl
  int v17; // edx
  char v19; // [rsp+40h] [rbp-38h]
  unsigned int v20; // [rsp+44h] [rbp-34h] BYREF
  int v21; // [rsp+48h] [rbp-30h] BYREF
  char v22; // [rsp+50h] [rbp-28h]

  Log((__int64)a1, 0x10000, 1936937844, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  v7 = FdoExt(*(_QWORD *)(a2 + 8), v4, v5, v6);
  v10 = 5LL;
  v11 = v7;
  *((_BYTE *)v7 + 3409) = 1;
  if ( v7[820] == 5 )
    UsbhSshEnableDisable((__int64)a1, 5, v8, v9);
  v20 = 0;
  v21 = 0;
  v12 = FdoExt((__int64)a1, v10, v8, v9);
  if ( *((_QWORD *)v12 + 539) )
  {
    v13 = (*((__int64 (__fastcall **)(_QWORD, int *, __int64, unsigned int *))v12 + 539))(
            *((_QWORD *)v12 + 529),
            &v21,
            10LL,
            &v20);
    if ( v13 >= 0 )
    {
      if ( v20 < 0xA )
      {
        v16 = v19;
        v13 = -1073741811;
      }
      else
      {
        v16 = v22;
      }
      if ( v13 >= 0 )
      {
        v17 = 6;
        if ( v16 )
          v17 = 1;
        UsbhSshEnableDisable((__int64)a1, v17, v14, v15);
      }
    }
  }
  UsbhSshBusBusy(a1);
  *((_BYTE *)v11 + 3408) = 1;
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v11 + 800), 2000LL, 0LL, a2, 0x77485353u);
  return 0LL;
}
