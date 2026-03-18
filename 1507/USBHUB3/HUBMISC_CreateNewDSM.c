/*
 * XREFs of HUBMISC_CreateNewDSM @ 0x1C0025248
 * Callers:
 *     HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C000D410 (HUBPSM30_CreatingDeviceInConnectedWithResetInProgress.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000F8F0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateNewDSM(__int64 a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // r12d
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r15
  int v10; // eax
  unsigned __int16 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 Timer; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-49h]
  __int64 v25; // [rsp+28h] [rbp-49h]
  __int64 v26; // [rsp+30h] [rbp-41h]
  _QWORD v27[5]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v28[7]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+6Fh] BYREF

  v29 = 0LL;
  v2 = 0LL;
  v3 = -1073741823;
  memset(v28, 0, sizeof(v28));
  v28[6] = off_1C0057068;
  LODWORD(v28[0]) = 56;
  v28[3] = 0x100000001LL;
  v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  LODWORD(v28[3]) = 2;
  v28[2] = HUBMISC_EvtDsmDestroy;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v28,
         &v29);
  v5 = v4;
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x2Du,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v4);
    v29 = 0LL;
    goto LABEL_24;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v6,
    "DSM Create Tag",
    6280LL,
    "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v29,
         off_1C0057068);
  memset((void *)v2, 0, 0xA50uLL);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0057090)
                  + 4) & 0x1000) != 0 )
    v3 = EtwActivityIdControl(3u, (LPGUID)(v2 + 1500));
  *(_QWORD *)(v2 + 8) = a1;
  *(_QWORD *)v2 = *(_QWORD *)a1;
  v7 = *(unsigned int *)(a1 + 204);
  if ( (v7 & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1616), 0xFFFFFFDF);
  else
    _InterlockedOr((volatile signed __int32 *)(v2 + 1616), 0x20u);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20) != 0 )
  {
    LODWORD(v24) = *(unsigned __int16 *)(a1 + 200);
    Template_pq(
      v7,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_START,
      (const GUID *)(v2 + 1500),
      *(_QWORD *)(*(_QWORD *)v2 + 208LL),
      v24);
  }
  memset(v28, 0, sizeof(v28));
  LODWORD(v28[0]) = 56;
  v28[3] = 0x100000001LL;
  v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  v9 = (_QWORD *)(v2 + 232);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          v28,
          v8,
          v2 + 232);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = 46;
LABEL_12:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      5u,
      v11,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v10);
    *v9 = 0LL;
    goto LABEL_24;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v9,
    "DSM Tag",
    6334LL,
    "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 248) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v9);
  memset(v28, 0, sizeof(v28));
  v28[3] = 0x100000001LL;
  LODWORD(v28[0]) = 56;
  v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  v9 = (_QWORD *)(v2 + 400);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          v28,
          v12,
          v2 + 400);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = 47;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v9,
    "DSM Tag",
    6370LL,
    "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 408) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v9);
  *(_WORD *)(v2 + 2024) = 1033;
  KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 1328));
  *(_DWORD *)(v2 + 1340) = 4000;
  *(_DWORD *)(v2 + 1472) = 4000;
  v13 = *(_QWORD *)v2;
  *(_QWORD *)(v2 + 1464) = &DSMStateTable;
  *(_QWORD *)(v2 + 1456) = HUBSM_AddDsmEvent;
  *(_DWORD *)(v2 + 1368) = 0;
  *(_DWORD *)(v2 + 1440) = 0;
  *(_QWORD *)(v2 + 1448) = v2;
  *(_QWORD *)(v2 + 1520) = *(_QWORD *)(v13 + 208);
  *(_QWORD *)(v2 + 1488) = v13;
  *(_QWORD *)(v2 + 2576) = v2 + 2584;
  *(_DWORD *)(v2 + 2568) = 256;
  Timer = ExAllocateTimer(HUBMISC_DsmEventTimer, v2, 4LL);
  *(_QWORD *)(v2 + 1528) = Timer;
  if ( Timer )
  {
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[0]) = 56;
    v28[3] = 0x100000001LL;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    LODWORD(v28[3]) = 2;
    v28[4] = v15;
    memset(v27, 0, sizeof(v27));
    v27[1] = HUBPDO_EvtOutOfBandwidthTimer;
    BYTE4(v27[2]) = 1;
    v9 = (_QWORD *)(v2 + 2400);
    LODWORD(v27[0]) = 40;
    LODWORD(v27[2]) = 0;
    LODWORD(v27[3]) = 0;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            v27,
            v28,
            v2 + 2400);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 49;
      goto LABEL_12;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *v9,
      "DSM Tag",
      6465LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeEvent((PRKEVENT)(v2 + 1568), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 1592), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 456), NotificationEvent, 0);
    v16 = *(_QWORD *)v2;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v2 + 16LL));
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v16 + 456))(*(_QWORD *)(v16 + 208), v17, 1LL);
    *(_QWORD *)(v2 + 1480) = v18;
    if ( !v18 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
        2u,
        5u,
        0x32u,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
      v5 = -1073741670;
LABEL_25:
      LODWORD(v26) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        4u,
        0x34u,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
        v26);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x40) != 0 )
      {
        LODWORD(v25) = v5;
        Template_pq(
          v2 + 1500,
          &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
          (const GUID *)((v2 + 1500) & -(__int64)(v2 != 0)),
          *(_QWORD *)(*(_QWORD *)a1 + 208LL),
          v25);
      }
      v20 = 3009;
      if ( v2 )
      {
        if ( *(_QWORD *)(v2 + 232) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 232),
            "DSM Tag",
            6707LL,
            "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 232) = 0LL;
        }
        v21 = *(_QWORD *)(v2 + 400);
        if ( v21 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 400),
            "DSM Tag",
            6707LL,
            "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 400) = 0LL;
        }
        v22 = *(_QWORD *)(v2 + 1528);
        if ( v22 )
        {
          LOBYTE(v21) = 1;
          ExDeleteTimer(v22, v21, 0LL, 0LL);
          *(_QWORD *)(v2 + 1528) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 2400) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 2400),
            "DSM Tag",
            6707LL,
            "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 2400) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 416) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 416),
            "DSM Tag",
            6707LL,
            "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 416) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 1480) )
        {
          (*(void (**)(void))(*(_QWORD *)v2 + 464LL))();
          *(_QWORD *)(v2 + 1480) = 0LL;
        }
        if ( v29 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      }
      return v20;
    }
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[0]) = 56;
    v28[3] = 0x100000001LL;
    v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            v28,
            (unsigned int)ExDefaultNonPagedPoolType,
            1681082453LL,
            88LL,
            v2 + 416,
            0LL);
    v5 = v19;
    if ( v19 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                               + 1640))(
        WdfDriverGlobals,
        *(_QWORD *)(v2 + 416),
        "DSM Tag",
        6523LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
      KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 40));
      *(_QWORD *)(a1 + 1328) = v2;
    }
    else
    {
      LODWORD(v26) = v19;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
        2u,
        5u,
        0x33u,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
        v26);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      3u,
      0x30u,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
  }
LABEL_24:
  if ( v5 < 0 )
    goto LABEL_25;
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
        *(_QWORD *)(v2 + 248),
        v2 + 1500);
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
          *(_QWORD *)(v2 + 408),
          v2 + 1500);
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 1620), 0x40u);
  }
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
    4u,
    4u,
    0x35u,
    (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
    a1,
    v2);
  return 3013;
}
