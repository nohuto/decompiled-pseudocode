/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x1C0052440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x1C001DDD0 (Controller_AddDeviceToControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C003301C (WPP_RECORDER_SF_dqd.c)
 *     Etw_DeviceCreate @ 0x1C0033794 (Etw_DeviceCreate.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r15
  KSPIN_LOCK *v6; // r12
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 *v12; // rax
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  __int64 v20; // [rsp+28h] [rbp-89h]
  __int64 v21; // [rsp+48h] [rbp-69h]
  _QWORD v22[10]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v23[8]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v24; // [rsp+128h] [rbp+77h] BYREF
  __int64 v25; // [rsp+130h] [rbp+7Fh] BYREF

  v24 = a3;
  v5 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C00410E8);
  v6 = (KSPIN_LOCK *)v5[11];
  v21 = v5[10];
  memset(v22, 0, sizeof(v22));
  v22[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v22[2] = UsbDevice_UcxEvtEnable;
  v22[3] = UsbDevice_UcxEvtDisable;
  v22[4] = UsbDevice_UcxEvtReset;
  v22[5] = UsbDevice_UcxEvtAddress;
  v22[6] = UsbDevice_UcxEvtUpdate;
  v22[7] = UsbDevice_UcxEvtHubInfo;
  v22[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v22[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  LODWORD(v22[0]) = 80;
  ((void (__fastcall *)(void *, __int64, _QWORD *))qword_1C0042780)(WPP_MAIN_CB.Dpc.DpcData, v24, v22);
  memset(v23, 0, 0x38uLL);
  LODWORD(v23[0]) = 56;
  v23[3] = 0x100000001LL;
  v23[6] = off_1C0041318;
  v23[1] = UsbDevice_EvtUsbDeviceCleanupCallback;
  v7 = ((__int64 (__fastcall *)(void *, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0042778)(
         WPP_MAIN_CB.Dpc.DpcData,
         a1,
         &v24,
         v23,
         &v25);
  v8 = v7;
  if ( v7 >= 0 )
  {
    WPP_RECORDER_SF_q(v5[8], 4u, 0xBu, 0xBu, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, v25);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v25,
           off_1C0041318);
    v10 = v9;
    v11 = 2048;
    *(_QWORD *)v9 = v25;
    *(_QWORD *)(v9 + 8) = v5;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 48);
    if ( (*(_DWORD *)(v21 + 104) & 4) == 0 )
      v11 = 1024;
    v12 = CommonBuffer_AcquireBuffer(v6, v11, v9, 0x31766544u);
    *(_QWORD *)(v10 + 424) = v12;
    if ( v12 )
    {
      v14 = 2112;
      if ( (*(_DWORD *)(v21 + 104) & 4) == 0 )
        v14 = 1056;
      v15 = CommonBuffer_AcquireBuffer(v6, v14, v10, 0x32766544u);
      *(_QWORD *)(v10 + 432) = v15;
      if ( v15 )
      {
        KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 88));
        *(_QWORD *)(v10 + 104) = v10 + 96;
        *(_QWORD *)(v10 + 96) = v10 + 96;
        *(_DWORD *)(v10 + 112) = 0;
        Controller_AddDeviceToControllerDeviceList((__int64)v5, v25, (_QWORD *)(v10 + 72));
        Etw_DeviceCreate(v16, v10);
        WPP_RECORDER_SF_dqd(v5[8], v17, v18, 0xEu, v20);
        return v8;
      }
      v13 = 13;
    }
    else
    {
      v13 = 12;
    }
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 64LL),
      2u,
      0xBu,
      v13,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      v25);
    return (unsigned int)-1073741670;
  }
  else
  {
    WPP_RECORDER_SF_d(v5[8], 2u, 0xBu, 0xAu, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids, v7);
  }
  return v8;
}
