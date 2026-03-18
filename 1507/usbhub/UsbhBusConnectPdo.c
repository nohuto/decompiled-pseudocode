/*
 * XREFs of UsbhBusConnectPdo @ 0x1C001E444
 * Callers:
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004730 (UsbhSignalSyncDeviceReset.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001C020 (UsbhEtwLogDeviceInformation.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C001E6F4 (UsbhBusIoInvalidateDeviceRelations.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001E760 (SET_PDO_HWPNPSTATE.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_c @ 0x1C00456D8 (WPP_RECORDER_SF_c.c)
 */

void __fastcall UsbhBusConnectPdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdi
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  _QWORD *v21; // r8
  _DWORD *v22; // rdx
  int v23; // r8d
  PDEVICE_OBJECT v24; // rcx
  int v25; // edx
  int v26; // edx

  v2 = *(_QWORD *)(a2 + 376);
  *(_BYTE *)(v2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v2 + 136) = 1;
  *(_DWORD *)(v2 + 88) = 2018460752;
  *(_DWORD *)(v2 + 92) = 2;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v2;
  *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
  v8 = *(_QWORD *)(a2 + 392);
  if ( v8 )
  {
    v9 = (int)PdoExt(*(_QWORD *)(a2 + 392), v5, v6, v7)[281];
    v13 = FdoExt(a1, v10, v11, v12);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 1);
    v17 = PdoExt(v8, v14, v15, v16);
    Log(a1, 4, 1919248208, v8, v9);
    if ( (_DWORD)v9 != 3 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          42,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_WORD *)v17 + 710),
          v8);
      v21 = (_QWORD *)*((_QWORD *)v13 + 602);
      v22 = v17 + 328;
      *((_QWORD *)v17 + 164) = v13 + 1202;
      *((_QWORD *)v17 + 165) = v21;
      if ( (_DWORD *)*v21 != v13 + 1202 )
        __fastfail(3u);
      *v21 = v22;
      *((_QWORD *)v13 + 602) = v22;
      LOBYTE(v21) = 1;
      UsbhEtwLogDeviceInformation((__int64)v17, &USBHUB_ETW_EVENT_DEVICE_ADD, (__int64)v21, v20);
      SET_PDO_HWPNPSTATE(v8, 2LL, 2LL);
      v13[226] = 1;
      *(_DWORD *)(v2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
      v24 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
        v24 = WPP_GLOBAL_Control;
      }
      if ( (v17[353] & 0x100) != 0 )
      {
        if ( !LOWORD(v24->DeviceType) )
          goto LABEL_10;
        WPP_RECORDER_SF_(v24->DeviceExtension, 0, 1, 44, (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
        v24 = WPP_GLOBAL_Control;
      }
      if ( LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_(v24->DeviceExtension, 0, 1, 45, (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
        v24 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            46,
            (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
            *((_BYTE *)v17 + 1392));
          v24 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_c(
              WPP_GLOBAL_Control->DeviceExtension,
              v25,
              v23,
              47,
              (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
              *((_BYTE *)v17 + 1393));
            v24 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                48,
                (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                *((_WORD *)v17 + 697));
              v24 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_c(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v26,
                  v23,
                  49,
                  (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                  *((_BYTE *)v17 + 1160));
                v24 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    50,
                    (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                    *((_BYTE *)v17 + 1396));
                  v24 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      51,
                      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                      *((_BYTE *)v17 + 1397));
                    v24 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        52,
                        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                        *((_BYTE *)v17 + 1398));
                      v24 = WPP_GLOBAL_Control;
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          53,
                          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                          *((_BYTE *)v17 + 1399));
                        v24 = WPP_GLOBAL_Control;
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          WPP_RECORDER_SF_d(
                            WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1,
                            54,
                            (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                            *((_WORD *)v17 + 700));
                          v24 = WPP_GLOBAL_Control;
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          {
                            WPP_RECORDER_SF_d(
                              WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1,
                              55,
                              (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                              *((_WORD *)v17 + 701));
                            v24 = WPP_GLOBAL_Control;
                            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            {
                              WPP_RECORDER_SF_d(
                                WPP_GLOBAL_Control->DeviceExtension,
                                0,
                                1,
                                56,
                                (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                                *((_WORD *)v17 + 702));
                              v24 = WPP_GLOBAL_Control;
                              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                              {
                                WPP_RECORDER_SF_d(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  0,
                                  1,
                                  57,
                                  (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                                  *((_BYTE *)v17 + 1406));
                                v24 = WPP_GLOBAL_Control;
                                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                {
                                  WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    0,
                                    1,
                                    58,
                                    (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                                    *((_BYTE *)v17 + 1407));
                                  v24 = WPP_GLOBAL_Control;
                                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                  {
                                    WPP_RECORDER_SF_d(
                                      WPP_GLOBAL_Control->DeviceExtension,
                                      0,
                                      1,
                                      59,
                                      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                                      *((_BYTE *)v17 + 1408));
                                    v24 = WPP_GLOBAL_Control;
                                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                    {
                                      WPP_RECORDER_SF_d(
                                        WPP_GLOBAL_Control->DeviceExtension,
                                        0,
                                        1,
                                        60,
                                        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                                        *((_BYTE *)v17 + 1409));
                                      v24 = WPP_GLOBAL_Control;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_10:
      if ( *((_QWORD *)v17 + 260) && LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v24->DeviceExtension,
          0,
          v23,
          61,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_QWORD *)v17 + 260));
        v24 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v17 + 262) && LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v24->DeviceExtension,
          0,
          v23,
          62,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_QWORD *)v17 + 262));
        v24 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v17 + 264) && LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v24->DeviceExtension,
          0,
          v23,
          63,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_QWORD *)v17 + 264));
        v24 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v17 + 268) && LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v24->DeviceExtension,
          0,
          v23,
          64,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_QWORD *)v17 + 268));
        v24 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v17 + 266) && LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v24->DeviceExtension,
          0,
          v23,
          65,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_QWORD *)v17 + 266));
        v24 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v17 + 270) )
      {
        if ( !LOWORD(v24->DeviceType) )
        {
LABEL_25:
          UsbhBusIoInvalidateDeviceRelations(a1, v2);
          return;
        }
        WPP_RECORDER_SF_S(
          v24->DeviceExtension,
          0,
          v23,
          66,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          *((_QWORD *)v17 + 270));
        v24 = WPP_GLOBAL_Control;
      }
      if ( LOWORD(v24->DeviceType) )
      {
        WPP_RECORDER_SF_(v24->DeviceExtension, 0, 1, 67, (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            68,
            (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
      }
      goto LABEL_25;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v19,
        41,
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_QWORD *)(a2 + 392));
    *(_DWORD *)(v2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
    UsbhSignalSyncDeviceReset(a1, v8, a2, 0);
  }
  else
  {
    *(_DWORD *)(v2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
  }
}
