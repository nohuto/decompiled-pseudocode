/*
 * XREFs of HUBIDLE_AddEvent @ 0x1C0030148
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0012020 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012AB0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0013AD0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013CB0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0014050 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBIDLE_AddEvent @ 0x1C0030148 (HUBIDLE_AddEvent.c)
 *     HUBIDLE_EvtIdleWorkItem @ 0x1C00305D0 (HUBIDLE_EvtIdleWorkItem.c)
 *     HUBIDLE_CancelIdle @ 0x1C0030610 (HUBIDLE_CancelIdle.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C0068850 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     Template_ppqqqq @ 0x1C0008758 (Template_ppqqqq.c)
 *     HUBMISC_DbgBreak @ 0x1C00275A8 (HUBMISC_DbgBreak.c)
 *     HUBIDLE_AddEvent @ 0x1C0030148 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBIDLE_AddEvent(__int64 a1, int a2, IRP *a3)
{
  IRP *v4; // rbp
  unsigned int v6; // edi
  KIRQL v7; // cl
  int v8; // r10d
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int i; // eax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, IRP *); // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  char v25; // bl
  __int64 *v26; // rax
  PWDF_DRIVER_GLOBALS v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h]
  KIRQL v37; // [rsp+51h] [rbp-57h]
  int v38; // [rsp+54h] [rbp-54h]
  __int64 v41; // [rsp+70h] [rbp-38h]
  GUID v42; // [rsp+78h] [rbp-30h] BYREF

  v41 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v6 = 259;
  v38 = *(_DWORD *)(a1 + 160);
  v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 136));
  v7 = v37;
  if ( a2 != 1000 )
  {
    v8 = a2;
    while ( 1 )
    {
      v9 = 1001;
      v10 = 0LL;
      v11 = *(_QWORD *)(v41 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144) - v38));
      for ( i = *(_DWORD *)(v11 + 16); i != 1000; i = *(_DWORD *)(v11 + 8LL * (unsigned int)v10 + 16) )
      {
        if ( v8 == i )
        {
          v9 = *(_DWORD *)(v11 + 8 * v10 + 20);
          break;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      if ( v9 == 1000 )
        break;
      switch ( v9 )
      {
        case 1001:
          LODWORD(v32) = a2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
            2u,
            5u,
            0xBu,
            (__int64)&WPP_cd4a2a3e160d3e6b4a52688cd8ca1d5e_Traceguids,
            v32);
          HUBMISC_DbgBreak("Unhandled Event in Idle State Machine");
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800) != 0 )
          {
            LODWORD(v36) = 0;
            LODWORD(v35) = a2;
            LODWORD(v34) = *(_DWORD *)(a1 + 144);
            LODWORD(v33) = *(_DWORD *)(a1 + 160);
            Template_ppqqqq(v15, &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT, 0LL, 0LL, 0LL, v33, v34, v35, v36);
          }
          goto LABEL_27;
        case 1002:
          v6 = -2147483631;
          goto LABEL_21;
        case 1003:
          v6 = -1073741810;
LABEL_21:
          v4 = a3;
          goto LABEL_27;
      }
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128) + 4) = v9;
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128)) = v8;
      *(_BYTE *)(a1 + 128) = (*(_BYTE *)(a1 + 128) + 1) & 0xF;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x1000) != 0 )
      {
        LODWORD(v36) = 0;
        v13 = (unsigned int)(v9 - *(_DWORD *)(a1 + 160));
        LODWORD(v35) = v8;
        LODWORD(v34) = **(_DWORD **)(*(_QWORD *)(a1 + 152) + 8 * v13);
        LODWORD(v32) = *(_DWORD *)(a1 + 160);
        Template_ppqqqq(
          v13,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          0LL,
          *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
          a1,
          v32,
          v34,
          v35,
          v36);
      }
      *(_DWORD *)(a1 + 144) = v9;
      v14 = *(__int64 (__fastcall **)(__int64, IRP *))(*(_QWORD *)(v41 + 8LL * (unsigned int)(v9 - v38)) + 8LL);
      if ( v14 )
        v8 = v14(a1, a3);
      else
        v8 = 1000;
      if ( v8 == 1000 )
        goto LABEL_27;
    }
    if ( a2 != v8 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
        2u,
        5u,
        0xAu,
        (__int64)&WPP_cd4a2a3e160d3e6b4a52688cd8ca1d5e_Traceguids);
      HUBMISC_DbgBreak("Idle State Machine is ignoring a Sync Event");
    }
LABEL_27:
    v7 = v37;
  }
  v16 = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  if ( (unsigned int)(v16 - 1) <= 4 || v16 == 8 )
  {
    v4 = *(IRP **)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 136), v7);
  v18 = v16 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            v6 = 0;
            v25 = 0;
            goto LABEL_53;
          }
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 == 1 )
              {
                v6 = -1073741536;
                v25 = 1;
                goto LABEL_53;
              }
            }
            else
            {
              v26 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                 WdfDriverGlobals,
                                 *(_QWORD *)(a1 + 184),
                                 off_1C00581B0);
              v27 = WdfDriverGlobals;
              *v26 = a1;
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
                v27,
                *(_QWORD *)(a1 + 184));
            }
          }
          else
          {
            v28 = (__int64)a3;
            *(_QWORD *)&v42.Data1 = 0LL;
            *(_QWORD *)v42.Data4 = 0LL;
            if ( a3 && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a3, &v42);
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
              Template_p(v28, &USBHUB3_ETW_EVENT_DEVICE_IDLE_CALLBACK, &v42, *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL));
            v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 184LL) + 32LL);
            (*(void (__fastcall **)(_QWORD))v29)(*(_QWORD *)(v29 + 8));
            HUBIDLE_AddEvent(a1, 6001LL, 0LL);
          }
        }
        else
        {
          v6 = -1073741101;
        }
      }
      else
      {
        v6 = -1073741810;
      }
    }
    else
    {
      v6 = -2147483631;
    }
  }
  else
  {
    v6 = -1073741536;
  }
  v25 = 0;
LABEL_53:
  if ( v4 )
  {
    *(_QWORD *)&v42.Data1 = 0LL;
    *(_QWORD *)v42.Data4 = 0LL;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v4, &v42);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    {
      LODWORD(v31) = v6;
      Template_pq(
        v17,
        &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_COMPLETE,
        &v42,
        *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
        v31);
    }
    v4->IoStatus.Status = v6;
    IofCompleteRequest(v4, 0);
  }
  if ( v25 )
    return 259;
  return v6;
}
