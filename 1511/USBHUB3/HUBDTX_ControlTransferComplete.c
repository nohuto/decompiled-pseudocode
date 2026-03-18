/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C001F800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqqq @ 0x1C0001C30 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002674 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // esi
  __int64 v7; // r15
  _BYTE *v8; // r14
  unsigned int v9; // ebp
  const EVENT_DESCRIPTOR *v10; // rdx
  char v11; // al
  unsigned __int16 v12; // r9
  char v13; // al
  char v14; // al
  char v15; // al
  unsigned __int8 v16; // al
  char v17; // dl
  char v18; // al
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  unsigned int v25; // [rsp+38h] [rbp-50h]
  _QWORD v26[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 260);
  v7 = a1;
  v8 = *(_BYTE **)(a4 + 2616);
  *(_DWORD *)(a4 + 240) = *(_DWORD *)(a4 + 292);
  *(_DWORD *)(a4 + 392) = 0;
  if ( v4 >= 0 )
  {
    v9 = 4012;
    goto LABEL_102;
  }
  v9 = 4004;
  if ( *(_BYTE *)(a4 + 385) == 9 && *(_WORD *)(a4 + 386) )
  {
    *(_DWORD *)(a4 + 1544) = -1073741823;
    *(_DWORD *)(a4 + 1548) = -1073733632;
  }
  else
  {
    *(_DWORD *)(a4 + 1544) = v4;
    *(_DWORD *)(a4 + 1548) = v5;
  }
  LOBYTE(a1) = *(_BYTE *)(a4 + 385);
  if ( (_BYTE)a1 == 48 && (*(_BYTE *)(a4 + 384) & 0x60) == 0 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
      2u,
      5u,
      0xAu,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v4,
      v5);
    if ( (*(_DWORD *)(a4 + 2420) & 4) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", a4 + 488);
    *(_DWORD *)(a4 + 2416) = 1073807370;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    {
      LODWORD(v24) = v4;
      LODWORD(v23) = v5;
      LODWORD(v22) = 0;
      Template_pqqq(
        a1,
        &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
        (const GUID *)(a4 + 1500),
        *(_QWORD *)(a4 + 24),
        v22,
        v23,
        v24);
    }
    if ( v5 == -1073741820 )
      v9 = 4008;
    goto LABEL_102;
  }
  if ( (_BYTE)a1 != 3 )
    goto LABEL_25;
  if ( *(_WORD *)(a4 + 386) != 48 )
  {
    if ( *(_WORD *)(a4 + 386) == 49 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        2u,
        5u,
        0xCu,
        (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
        v4,
        v5);
      if ( (*(_DWORD *)(a4 + 2420) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", a4 + 488);
      if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      {
        LODWORD(v24) = v4;
        v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE;
        LODWORD(v23) = v5;
        LODWORD(v22) = 0;
        goto LABEL_100;
      }
      goto LABEL_102;
    }
LABEL_25:
    if ( (_BYTE)a1 == 6 && (*(_BYTE *)(a4 + 384) & 0x60) == 0 )
    {
      v11 = *(_BYTE *)(a4 + 387);
      if ( (v11 != 3 || *(_BYTE *)(a4 + 386) != 0xEE) && v11 != 6 && (*(_DWORD *)(a4 + 2420) & 1) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", a4 + 488);
      if ( *(_BYTE *)(a4 + 387) == 1 )
      {
        *(_DWORD *)(a4 + 2416) = 1073807360;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          2u,
          5u,
          0xDu,
          (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
          v4,
          v5);
        if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
          goto LABEL_102;
        LODWORD(v24) = v4;
        v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE;
        LODWORD(v23) = v5;
        LODWORD(v22) = 0;
      }
      else if ( *(_BYTE *)(a4 + 387) == 2 )
      {
        *(_DWORD *)(a4 + 2416) = 1073807367;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          2u,
          5u,
          0xEu,
          (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
          v4,
          v5);
        if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
          goto LABEL_102;
        LODWORD(v24) = v4;
        v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE;
        LODWORD(v23) = v5;
        LODWORD(v22) = 0;
      }
      else
      {
        a1 = (unsigned int)*(unsigned __int8 *)(a4 + 387) - 3;
        switch ( *(_BYTE *)(a4 + 387) )
        {
          case 3:
            v13 = *(_BYTE *)(a4 + 1988);
            if ( v13 && v13 == *(_BYTE *)(a4 + 386) )
            {
              *(_DWORD *)(a4 + 2416) = 1073807373;
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                2u,
                5u,
                0x11u,
                (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
                v4,
                v5);
              if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
                goto LABEL_102;
              LODWORD(v24) = v4;
              v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE;
              LODWORD(v23) = v5;
              LODWORD(v22) = 0;
            }
            else
            {
              LOBYTE(a1) = *(_BYTE *)(a4 + 386);
              if ( (_BYTE)a1 )
              {
                v14 = *(_BYTE *)(a4 + 1987);
                if ( v14 && v14 == (_BYTE)a1 )
                {
                  *(_DWORD *)(a4 + 2416) = 1073807375;
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                    2u,
                    5u,
                    0x13u,
                    (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
                    v4,
                    v5);
                  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
                    goto LABEL_102;
                  LODWORD(v24) = v4;
                  v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE;
                  LODWORD(v23) = v5;
                  LODWORD(v22) = 0;
                }
                else
                {
                  if ( !v8 )
                    goto LABEL_102;
                  v15 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
                  if ( v15 && v15 == (_BYTE)a1 )
                  {
                    *(_DWORD *)(a4 + 2416) = 1073807375;
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                      2u,
                      5u,
                      0x14u,
                      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
                      v4,
                      v5);
                    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
                      goto LABEL_102;
                    LODWORD(v24) = v4;
                    v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE;
                    LODWORD(v23) = v5;
                    LODWORD(v22) = 0;
                  }
                  else
                  {
                    v16 = v8[8];
                    if ( v16 == 0xFF )
                      goto LABEL_102;
                    v17 = *(_BYTE *)(*(_QWORD *)v8 + 4LL * v16 + 47);
                    if ( !v17 )
                      goto LABEL_102;
                    if ( v17 != (_BYTE)a1 )
                      goto LABEL_102;
                    *(_DWORD *)(a4 + 2416) = 1073807375;
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                      2u,
                      5u,
                      0x15u,
                      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
                      v4,
                      v5);
                    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
                      goto LABEL_102;
                    LODWORD(v24) = v4;
                    v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE;
                    LODWORD(v23) = v5;
                    LODWORD(v22) = 0;
                  }
                }
              }
              else
              {
                *(_DWORD *)(a4 + 2416) = 1073807374;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                  2u,
                  5u,
                  0x12u,
                  (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
                  v4,
                  v5);
                if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
                  goto LABEL_102;
                LODWORD(v24) = v4;
                v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE;
                LODWORD(v23) = v5;
                LODWORD(v22) = 0;
              }
            }
            break;
          case 6:
            *(_DWORD *)(a4 + 2416) = 1073807372;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x10u,
              (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
              v4,
              v5);
            if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
              goto LABEL_102;
            LODWORD(v24) = v4;
            v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE;
            LODWORD(v23) = v5;
            LODWORD(v22) = 0;
            break;
          case 0xF:
            *(_DWORD *)(a4 + 2416) = 1073807371;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0xFu,
              (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
              v4,
              v5);
            if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
              goto LABEL_102;
            LODWORD(v24) = v4;
            v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE;
            LODWORD(v23) = v5;
            LODWORD(v22) = 0;
            break;
          default:
            v12 = 22;
LABEL_38:
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              v12,
              (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
              v4,
              v5);
            goto LABEL_102;
        }
      }
      goto LABEL_100;
    }
    v18 = (*(_BYTE *)(a4 + 384) >> 5) & 3;
    if ( v18 == 2 && (_BYTE)a1 == *(_BYTE *)(a4 + 2036) )
    {
      switch ( *(_WORD *)(a4 + 388) )
      {
        case 4:
          *(_DWORD *)(a4 + 2416) = 1073807376;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x17u,
            (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
            v4,
            v5);
          if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
            goto LABEL_102;
          LODWORD(v24) = v4;
          v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE;
          LODWORD(v23) = v5;
          LODWORD(v22) = 0;
          break;
        case 6:
          *(_DWORD *)(a4 + 2416) = 1073807377;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x18u,
            (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
            v4,
            v5);
          if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
            goto LABEL_102;
          LODWORD(v24) = v4;
          v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE;
          LODWORD(v23) = v5;
          LODWORD(v22) = 0;
          break;
        case 7:
          *(_DWORD *)(a4 + 2416) = 1073807388;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x19u,
            (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
            v4,
            v5);
          if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
            goto LABEL_102;
          LODWORD(v24) = v4;
          v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE;
          LODWORD(v23) = v5;
          LODWORD(v22) = 0;
          break;
        case 8:
          *(_DWORD *)(a4 + 2416) = 1073807390;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x1Au,
            (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
            v4,
            v5);
          if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
            goto LABEL_102;
          LODWORD(v24) = v4;
          v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE;
          LODWORD(v23) = v5;
          LODWORD(v22) = 0;
          break;
        default:
          v12 = 27;
          goto LABEL_38;
      }
LABEL_100:
      Template_pqqq(a1, v10, (const GUID *)(a4 + 1500), *(_QWORD *)(a4 + 24), v22, v23, v24);
      goto LABEL_102;
    }
    if ( (_BYTE)a1 == 49 )
    {
      if ( !v18 )
      {
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
          v4,
          v5);
        if ( (*(_DWORD *)(a4 + 2420) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", a4 + 488);
        if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) >= 0 )
          goto LABEL_102;
        v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
        goto LABEL_99;
      }
    }
    else if ( !v18
           && ((_BYTE)a1 == 1 && *(_WORD *)(a4 + 386) == 1
            || (_BYTE)a1 == 3 && !*(_WORD *)(a4 + 386) && !*(_WORD *)(a4 + 388)) )
    {
      goto LABEL_102;
    }
    v25 = (*(unsigned __int8 *)(a4 + 384) >> 5) & 3;
    WPP_RECORDER_SF_dDDD(
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
      v25,
      5u,
      0x1Du,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v4,
      v5,
      v25,
      (unsigned __int8)a1);
    if ( (*(_DWORD *)(a4 + 2420) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", a4 + 488);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x10000) == 0 )
      goto LABEL_102;
    v10 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_99:
    v19 = *(_QWORD *)(a4 + 8);
    LODWORD(v24) = v4;
    LODWORD(v23) = v5;
    a1 = *(unsigned __int16 *)(v19 + 200);
    LODWORD(v22) = *(unsigned __int16 *)(v19 + 200);
    goto LABEL_100;
  }
  WPP_RECORDER_SF_dD(
    *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
    2u,
    5u,
    0xBu,
    (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
    v4,
    v5);
  if ( (*(_DWORD *)(a4 + 2420) & 0x2000) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", a4 + 488);
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
  {
    LODWORD(v24) = v4;
    v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE;
    LODWORD(v23) = v5;
    LODWORD(v22) = 0;
    goto LABEL_100;
  }
LABEL_102:
  if ( v4 < 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x10000) != 0 )
  {
    LODWORD(v24) = v4;
    LODWORD(v23) = v5;
    LODWORD(v22) = 0;
    Template_pqqq(a1, &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR, 0LL, *(_QWORD *)(a4 + 24), v22, v23, v24);
  }
  v26[0] = 24LL;
  v26[2] = 0LL;
  v26[1] = 0LL;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v7,
          v26);
  if ( v20 < 0 )
  {
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00570E8);
    LODWORD(v23) = v20;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v21 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids,
      v23);
  }
  HUBSM_AddEvent(a4 + 488, v9);
}
