/*
 * XREFs of UsbhDeregisterPdo @ 0x1C0042EE0
 * Callers:
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044D84 (Usbh_Disconnect_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSignalSyncDeviceReset @ 0x1C0004730 (UsbhSignalSyncDeviceReset.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C001E6F4 (UsbhBusIoInvalidateDeviceRelations.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001E760 (SET_PDO_HWPNPSTATE.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044404 (UsbhSetPdo_FailIo.c)
 *     UsbhResetPortData @ 0x1C0054DEC (UsbhResetPortData.c)
 */

void __fastcall UsbhDeregisterPdo(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  __int64 v12; // rsi
  __int64 PortData; // rax
  __int64 v14; // r14
  int v15; // r10d
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+20h] [rbp-38h]
  unsigned int v24; // [rsp+78h] [rbp+20h]

  v24 = a4;
  v7 = FdoExt((__int64)a1, a2, a3, a4);
  v11 = PdoExt(a2, v8, v9, v10);
  v12 = (__int64)v11;
  if ( *((_BYTE *)v11 + 2708) || (PortData = UsbhGetPortData((__int64)a1, *((_WORD *)v11 + 710)), (v14 = PortData) == 0) )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    Log((__int64)a1, 4, 1685219152, PortData, a2);
    v16 = (_QWORD *)(v12 + 1312);
    v17 = *(_QWORD *)(v12 + 1312);
    v18 = *(_QWORD **)(v12 + 1320);
    if ( *(_QWORD *)(v17 + 8) != v12 + 1312 || (_QWORD *)*v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    v23 = *(unsigned int *)(v12 + 1412);
    *v16 = 0LL;
    *(_QWORD *)(v12 + 1320) = 0LL;
    Log((__int64)a1, v15, 1685219122, v12, v23);
    UsbhResetPortData(a1, a2, a5 + 132);
    v20 = (_QWORD *)*((_QWORD *)v7 + 604);
    *v16 = v7 + 1206;
    *(_QWORD *)(v12 + 1320) = v20;
    if ( (_DWORD *)*v20 != v7 + 1206 )
      __fastfail(3u);
    *v20 = v16;
    *((_QWORD *)v7 + 604) = v16;
    SET_PDO_HWPNPSTATE(a2, 4LL, v24, v19);
    UsbhSetPdo_FailIo(a2);
    v7[226] = 1;
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
    UsbhSignalSyncDeviceReset((__int64)a1, a2, v14, 0xC000000E);
    UsbhSshSetPortsBusyState(a1, *(_WORD *)(v12 + 1420), 1LL, 0LL);
    UsbhUnlinkPdoDeviceHandle((__int64)a1, a2, 2017740851, 1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x46u,
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
    UsbhBusIoInvalidateDeviceRelations((__int64)a1, a5, v21, v22);
  }
}
