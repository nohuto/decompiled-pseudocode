/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C006C9E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     Template_pqhhh @ 0x1C001098C (Template_pqhhh.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C0010A34 (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C0010B60 (WPP_RECORDER_SF_II.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0072DF4 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // r14
  int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // edx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  int Blink; // eax
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rax
  int Handle; // [rsp+20h] [rbp-58h]
  int Handlea; // [rsp+20h] [rbp-58h]
  PVOID *Handleb; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+88h] [rbp+10h] BYREF
  PVOID v27; // [rsp+90h] [rbp+18h] BYREF

  v1 = 1;
  v2 = 2;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C005B0E8);
  v4 = *(_QWORD *)(*v3 + 64LL);
  v5 = *(_QWORD *)(v4 + 24);
  if ( (*(_DWORD *)(v5 + 1616) & 2) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
      4u,
      2u,
      0x8Au,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
    v2 = 1;
  }
  else
  {
    v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v26);
    if ( v6 >= 0 )
    {
      if ( v26 )
      {
        v7 = *(_QWORD **)(v4 + 24);
        if ( (*((_DWORD *)v7 + 407) & 0x800000) != 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v7[1] + 1432LL),
            3u,
            2u,
            0x8Du,
            (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
          v2 = 4;
        }
        else
        {
          v8 = MEMORY[0xFFFFF78000000014]
             - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v7 + 576LL))(*(_QWORD *)(*v7 + 240LL), v7[3]);
          if ( v8 >= 300000000 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 1, 0) )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                3u,
                2u,
                0x8Fu,
                (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
              v2 = 6;
            }
            else
            {
              v11 = PoRegisterPowerSettingCallback(
                      0LL,
                      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                      (PPOWER_SETTING_CALLBACK)HUBPDO_IdleResiliencySettingCallback,
                      *(PVOID *)(v4 + 24),
                      &v27);
              if ( v11 >= 0 )
              {
                *(_QWORD *)(v4 + 408) = v27;
                v1 = 0;
                v12 = IoRequestDeviceRemovalForReset(*v3, 1LL);
                if ( v12 >= 0 )
                {
                  v2 = 0;
                }
                else
                {
                  PoUnregisterPowerSettingCallback(*(PVOID *)(v4 + 408));
                  *(_QWORD *)(v4 + 408) = 0LL;
                  _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                    2u,
                    2u,
                    0x91u,
                    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                    v12);
                  v2 = 8;
                }
              }
              else
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                  2u,
                  2u,
                  0x90u,
                  (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
                  v11);
                v2 = 7;
              }
            }
          }
          else
          {
            HIDWORD(v23) = HIDWORD(v8);
            WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL), v8, v9, v10, Handle);
            v2 = 5;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          3u,
          2u,
          0x8Cu,
          (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
        v2 = 3;
      }
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0x8Bu,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        v6);
    }
  }
  v13 = *(_QWORD *)(v4 + 24);
  LODWORD(v25) = *(unsigned __int16 *)(v13 + 1984);
  LODWORD(v24) = *(unsigned __int16 *)(v13 + 1982);
  LODWORD(v23) = *(unsigned __int16 *)(v13 + 1980);
  WPP_RECORDER_SF_DDDLd(
    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 1432LL),
    v1,
    *(unsigned __int16 *)(v13 + 1984),
    *(unsigned __int16 *)(v13 + 1982),
    Handlea);
  Blink = (int)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x2000000) != 0 )
  {
    v16 = *(_QWORD *)(v4 + 24);
    LOWORD(v25) = *(_WORD *)(v16 + 1984);
    LOWORD(v24) = *(_WORD *)(v16 + 1982);
    LOWORD(v23) = *(_WORD *)(v16 + 1980);
    LODWORD(Handleb) = v2;
    Template_pqhhh(
      v14,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v16 + 1500),
      *(_QWORD *)(v16 + 24),
      Handleb,
      v23,
      v24,
      v25);
    Blink = (int)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  }
  if ( v2 != 1 )
  {
    if ( v2 )
    {
      if ( (Blink & 0x8000000) != 0 )
      {
        v18 = *(_QWORD *)(v4 + 24);
        LOWORD(v25) = *(_WORD *)(v18 + 1984);
        LOWORD(v24) = *(_WORD *)(v18 + 1982);
        LOWORD(v23) = *(_WORD *)(v18 + 1980);
        LODWORD(Handleb) = v2;
        Template_pqhhh(
          v14,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING,
          (const GUID *)(v18 + 1500),
          *(_QWORD *)(v18 + 24),
          Handleb,
          v23,
          v24,
          v25);
      }
    }
    else if ( (Blink & 0x4000000) != 0 )
    {
      v17 = *(_QWORD *)(v4 + 24);
      LOWORD(v25) = *(_WORD *)(v17 + 1984);
      LOWORD(v24) = *(_WORD *)(v17 + 1982);
      LOWORD(v23) = *(_WORD *)(v17 + 1980);
      LODWORD(Handleb) = 0;
      Template_pqhhh(
        v14,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO,
        (const GUID *)(v17 + 1500),
        *(_QWORD *)(v17 + 24),
        Handleb,
        v23,
        v24,
        v25);
    }
  }
  if ( v1 )
  {
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v19,
      "DRIPS SR Tag",
      10791LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 416), "DRIPS SR Tag", 0x20u);
}
