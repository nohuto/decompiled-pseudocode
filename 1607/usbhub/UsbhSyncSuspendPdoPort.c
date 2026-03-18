/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C001A924
 * Callers:
 *     UsbhBusIf_SuspendChildHub @ 0x1C001DEA0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhPdoSetDx @ 0x1C0022EC0 (UsbhPdoSetDx.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhPCE_Suspend @ 0x1C001E798 (UsbhPCE_Suspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C00542EC (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  _DWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  int v20; // eax
  int v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+70h] [rbp+8h] BYREF
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        18,
        (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
        a2);
  }
  v7 = PdoExt(a2, a2, a3, a4);
  v8 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *((_WORD *)v7 + 710), (__int64)&v23, &v22);
  v11 = (unsigned int)v8;
  if ( v8 >= 0 && (v23 & 1) != 0 )
  {
    if ( (v7[353] & 0x100) != 0 && (int)PdoExt(a2, (unsigned int)v8, v9, v10)[586] > -1 && !v4 && (v7[353] & 4) == 0 )
    {
      v20 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v22);
      v11 = 3221225472LL;
      if ( (v20 & 0xC0000000) == 0xC0000000 )
      {
        LOBYTE(v21) = 0;
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *((unsigned __int16 *)v7 + 710),
          50,
          0,
          0,
          v20,
          v22,
          usbfile_pdopwr_c,
          1404,
          v21);
      }
    }
    v12 = *(_QWORD *)(a1 + 8);
    v22 = *((unsigned __int16 *)v7 + 710);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v13 = FdoExt(v12, v11, v9, v10);
      if ( *((_QWORD *)v13 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v13 + 554))(*((_QWORD *)v13 + 529), 0LL, 3LL, &v22);
    }
    v15 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((unsigned __int16 *)v7 + 710));
    v22 = *((unsigned __int16 *)v7 + 710);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v18 = FdoExt(*(_QWORD *)(a1 + 8), v14, v16, v17);
      if ( *((_QWORD *)v18 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v18 + 554))(*((_QWORD *)v18 + 529), 0LL, 4LL, &v22);
    }
  }
  else
  {
    LOBYTE(v21) = 0;
    UsbhException(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v7 + 710), 118, 0, 0, v8, v22, usbfile_pdopwr_c, 1420, v21);
    return (unsigned int)-1073741823;
  }
  return v15;
}
