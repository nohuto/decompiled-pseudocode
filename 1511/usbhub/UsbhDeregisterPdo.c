/*
 * XREFs of UsbhDeregisterPdo @ 0x1C0043100
 * Callers:
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044EB4 (Usbh_Disconnect_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0008EFC (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044534 (UsbhSetPdo_FailIo.c)
 *     UsbhResetPortData @ 0x1C0054F54 (UsbhResetPortData.c)
 */

void __fastcall UsbhDeregisterPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  _QWORD *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v7 = FdoExt(a1, a2, a3, a4);
  v11 = PdoExt(a2, v8, v9, v10);
  v12 = (__int64)v11;
  if ( *((_BYTE *)v11 + 2716) || (PortData = UsbhGetPortData(a1, *((_WORD *)v11 + 710)), (v14 = PortData) == 0) )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    Log(a1, 4, 1685219152, PortData, a2);
    v16 = (_QWORD *)(v12 + 1312);
    v17 = *(_QWORD *)(v12 + 1312);
    v18 = *(_QWORD **)(v12 + 1320);
    if ( *(_QWORD *)(v17 + 8) != v12 + 1312 || (_QWORD *)*v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    v20 = *(unsigned int *)(v12 + 1412);
    *v16 = 0LL;
    *(_QWORD *)(v12 + 1320) = 0LL;
    Log(a1, v15, 1685219122, v12, v20);
    UsbhResetPortData(a1, a2, a5 + 132);
    v19 = (_QWORD *)*((_QWORD *)v7 + 604);
    *v16 = v7 + 1206;
    *(_QWORD *)(v12 + 1320) = v19;
    if ( (_DWORD *)*v19 != v7 + 1206 )
      __fastfail(3u);
    *v19 = v16;
    *((_QWORD *)v7 + 604) = v16;
    SET_PDO_HWPNPSTATE(a2, 4, v21);
    UsbhSetPdo_FailIo(a2);
    v7[226] = 1;
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
    UsbhSignalSyncDeviceReset(a1, a2, v14, 0xC000000E);
    UsbhSshSetPortsBusyState(a1, *(_WORD *)(v12 + 1420), 1LL, 0LL);
    UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740851, 1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x46u,
        (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids);
    UsbhBusIoInvalidateDeviceRelations(a1, a5);
  }
}
