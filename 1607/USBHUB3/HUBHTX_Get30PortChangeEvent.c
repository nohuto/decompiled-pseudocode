/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C000499C
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C000F1B0 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C000F1F0 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C000F200 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_qhhhqhhh @ 0x1C0001B78 (Template_qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002694 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00028BC (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00285A0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1, __int64 a2)
{
  _WORD *v3; // rax
  unsigned int v4; // ebp
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // di
  unsigned __int16 v7; // si
  __int16 v8; // r13
  __int16 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r9
  __int64 v19; // rax
  unsigned __int16 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int16 v26; // r9
  unsigned __int8 v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  __int16 v37; // [rsp+C0h] [rbp+8h]
  char v38; // [rsp+C8h] [rbp+10h]
  char v39; // [rsp+D0h] [rbp+18h]

  if ( *((_BYTE *)a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL),
      0LL,
      3879LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)a1 + 1457) = 0;
  }
  v3 = (_WORD *)a1[166];
  v4 = 3061;
  v5 = *((_WORD *)a1 + 92);
  v6 = *((_WORD *)a1 + 96);
  v7 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v5;
  if ( v3 )
    v37 = v3[990];
  else
    LOBYTE(v37) = 0;
  if ( v3 )
  {
    v8 = v3[991];
    v39 = v8;
  }
  else
  {
    LOBYTE(v8) = 0;
    v39 = 0;
  }
  if ( v3 )
  {
    v9 = v3[992];
    v38 = v9;
  }
  else
  {
    LOBYTE(v9) = 0;
    v38 = 0;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v11 = *a1;
    v12 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v4 = 3065;
    if ( (*(_DWORD *)(v11 + 2536) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
      Template_qhhhqhhh(
        v10,
        v12,
        (const GUID *)(*a1 + 2356LL),
        *((unsigned __int16 *)a1 + 100),
        v6,
        v5,
        v7,
        249,
        v37,
        v8,
        v9);
    goto LABEL_119;
  }
  if ( (v7 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v6 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v4 = 3065;
    }
    v14 = 512LL;
    if ( (*(_DWORD *)(*a1 + 2536LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
      Template_qhhhqhhh(
        v13,
        v14,
        (const GUID *)(*a1 + 2356LL),
        *((unsigned __int16 *)a1 + 100),
        v6,
        v5,
        v7,
        v4,
        v37,
        v39,
        v38);
    goto LABEL_112;
  }
  if ( (v5 & 0x200) == 0 )
  {
    v15 = 86;
LABEL_26:
    WPP_RECORDER_SF_(a1[179], 2u, 4u, v15, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
    goto LABEL_27;
  }
  if ( (v5 & 0x10) == 0 )
  {
    if ( (v5 & 1) == 0 && (v5 & 0x1E0) == 0xA0 && (v6 & 0x200) != 0 && (v6 & 0x1E0) != 0xA0 )
      goto LABEL_37;
    if ( (v5 & 1) == 0 && (v5 & 0x1E0) == 0xE0 && (v6 & 0x200) != 0 && (v6 & 0x1E0) != 0xE0 )
    {
      v16 = 89;
LABEL_47:
      WPP_RECORDER_SF_(a1[179], 2u, 4u, v16, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
      goto LABEL_37;
    }
    v17 = (v5 >> 5) & 0xF;
    if ( v17 == 11 )
    {
      v18 = 90;
      goto LABEL_50;
    }
    if ( v17 == 4 && (v6 & 0x1E0) != 0x80 )
    {
      v18 = 91;
      goto LABEL_50;
    }
    if ( v17 == 10 )
    {
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *a1);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v19)
        || *(_BYTE *)(*a1 + 216LL) )
      {
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Cu,
          (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
          (v5 >> 5) & 0xF,
          v5 & 1);
        if ( (*(_DWORD *)(*a1 + 2536LL) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
          Template_qhhhqhhh(
            v22,
            v21,
            (const GUID *)(*a1 + 2356LL),
            *((unsigned __int16 *)a1 + 100),
            v6,
            v5,
            v7,
            245,
            v37,
            v39,
            v38);
        goto LABEL_63;
      }
      v20 = 93;
      LODWORD(v34) = v5 & 1;
      LODWORD(v33) = (v5 >> 5) & 0xF;
      goto LABEL_58;
    }
    if ( v17 == 6 )
    {
      WPP_RECORDER_SF_dD(
        a1[179],
        2u,
        4u,
        0x5Eu,
        (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
        (v5 >> 5) & 0xF,
        v5 & 1);
      v24 = *(unsigned int *)(*a1 + 2536LL);
      if ( (v24 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
        Template_qhhhqhhh(
          v24,
          v23,
          (const GUID *)(*a1 + 2356LL),
          *((unsigned __int16 *)a1 + 100),
          v6,
          v5,
          v7,
          245,
          v37,
          v39,
          v38);
      if ( (v7 & 0x80u) != 0 )
      {
        v16 = 95;
        goto LABEL_47;
      }
      if ( *((_DWORD *)a1 + 2) != 3053 )
      {
        if ( (v5 & 2) != 0 )
        {
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) == 0 )
          {
            v15 = 98;
            goto LABEL_26;
          }
          WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x61u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
        }
        v20 = 99;
        LODWORD(v34) = v5 & 1;
        LODWORD(v33) = (v5 >> 5) & 0xF;
LABEL_58:
        WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v20, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, v33, v34);
        goto LABEL_63;
      }
      v25 = v5 & 1;
      v26 = 96;
      v27 = 3;
    }
    else
    {
      if ( (v7 & 1) != 0 || (v5 & 1) != (v6 & 1) )
      {
        v4 = 3017;
        goto LABEL_112;
      }
      if ( (v5 & 1) != 0 )
      {
        if ( v17 != 5 )
        {
          if ( (v5 & 2) == 0 )
          {
            v15 = 104;
            goto LABEL_26;
          }
          if ( v17 <= 3u || v17 == 8 )
          {
            if ( (v7 & 0x10) != 0 )
            {
              if ( v17 == 3 )
              {
                v15 = 106;
                goto LABEL_26;
              }
              v4 = 3073;
            }
            else
            {
              if ( (v6 & 0x1E0) != 0x60 || v17 == 3 )
                return v4;
              v4 = 3085;
            }
LABEL_119:
            *((_DWORD *)a1 + 2) = v4;
            return v4;
          }
          v18 = 105;
LABEL_50:
          WPP_RECORDER_SF_d(
            a1[179],
            2u,
            4u,
            v18,
            (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
            (v5 >> 5) & 0xF);
LABEL_27:
          v4 = 3077;
          v28 = *(unsigned int *)(*a1 + 2536LL);
          if ( (v28 & 0x10) != 0 )
            HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
          *(_DWORD *)(*a1 + 2540LL) = 1073872896;
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800) != 0 )
          {
            LODWORD(v32) = *((unsigned __int16 *)a1 + 100);
            Template_pq(v28, &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR, 0LL, *(_QWORD *)(*a1 + 224LL), v32);
          }
          *(_WORD *)(*a1 + 66LL) = v7;
          *(_WORD *)(*a1 + 64LL) = v5;
          goto LABEL_119;
        }
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
LABEL_63:
        v4 = 3053;
        ++*((_DWORD *)a1 + 361);
        if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
          goto LABEL_119;
        LODWORD(v34) = *((_DWORD *)a1 + 361);
        WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, a1, v34);
        if ( (*(_DWORD *)(*a1 + 2536LL) & 0x800) == 0 )
          goto LABEL_119;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_112:
        if ( v4 != 3017 )
          goto LABEL_118;
        goto LABEL_113;
      }
      if ( (v5 & 2) != 0 )
      {
        v15 = 100;
        goto LABEL_26;
      }
      if ( v17 > 3u )
        return v4;
      if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
      {
        v18 = 102;
        goto LABEL_50;
      }
      v26 = 101;
      v25 = (v5 >> 5) & 0xF;
      v27 = 2;
    }
    LODWORD(v33) = v25;
    WPP_RECORDER_SF_d(a1[179], v27, 4u, v26, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, v33);
    return v4;
  }
  if ( (v5 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*a1 + 43LL) & 1) == 0 )
    {
      v15 = 88;
      goto LABEL_26;
    }
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x57u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
  }
  if ( (v5 & 1) != 0 )
  {
    v4 = 3081;
    goto LABEL_119;
  }
  if ( (v7 & 1) == 0 && (v6 & 1) == 0 )
    return v4;
LABEL_37:
  v4 = 3017;
LABEL_113:
  if ( (v5 & 1) != 0 )
    goto LABEL_119;
  LODWORD(v36) = v7;
  LODWORD(v35) = v5;
  LODWORD(v34) = v6;
  LODWORD(v33) = *((unsigned __int16 *)a1 + 100);
  WPP_RECORDER_SF_dDDD(
    a1[179],
    v6,
    4u,
    0x6Cu,
    (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
    v33,
    v34,
    v35,
    v36);
  if ( (*(_DWORD *)(*a1 + 2536LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) == 0 )
    goto LABEL_119;
  Template_qhhhqhhh(v30, v29, 0LL, *((unsigned __int16 *)a1 + 100), v6, v5, v7, 201, v37, v39, v38);
LABEL_118:
  if ( v4 != 3061 )
    goto LABEL_119;
  return v4;
}
