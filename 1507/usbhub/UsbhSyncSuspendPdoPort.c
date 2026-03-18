/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C000ABE8
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001F100 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetDx @ 0x1C002208C (UsbhPdoSetDx.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C000AD20 (UsbhPCE_Suspend.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C0053CDC (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbx
  int PortState; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rax
  int v13; // edx
  int v14; // eax
  int v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+88h] [rbp+20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        1,
        18,
        (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
        a2);
  }
  v6 = PdoExt(a2);
  PortState = UsbhQueryPortState(*(_QWORD *)(a1 + 8));
  if ( PortState >= 0 && (v17 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v6 + 1412) & 0x100) != 0
      && *(int *)(PdoExt(a2) + 2344) > -1
      && !a3
      && (*(_DWORD *)(v6 + 1412) & 4) == 0 )
    {
      v14 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v16);
      if ( (v14 & 0xC0000000) == 0xC0000000 )
      {
        LOBYTE(v15) = 0;
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *(unsigned __int16 *)(v6 + 1420),
          50,
          0,
          0,
          v14,
          v16,
          usbfile_pdopwr_c,
          1404,
          v15);
      }
    }
    v8 = *(_QWORD *)(a1 + 8);
    v16 = *(unsigned __int16 *)(v6 + 1420);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v9 = FdoExt(v8);
      if ( *(_QWORD *)(v9 + 4432) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v9 + 4432))(*(_QWORD *)(v9 + 4232), 0LL, 3LL, &v16);
    }
    v10 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *(unsigned __int16 *)(v6 + 1420));
    v16 = *(unsigned __int16 *)(v6 + 1420);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v11 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *(_QWORD *)(v11 + 4432) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v11 + 4432))(*(_QWORD *)(v11 + 4232), 0LL, 4LL, &v16);
    }
  }
  else
  {
    LOBYTE(v15) = 0;
    UsbhException(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int16 *)(v6 + 1420),
      118,
      0,
      0,
      PortState,
      v16,
      usbfile_pdopwr_c,
      1420,
      v15);
    return (unsigned int)-1073741823;
  }
  return v10;
}
