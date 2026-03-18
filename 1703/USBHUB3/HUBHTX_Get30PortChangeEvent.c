/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C0004ACC
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C000FEB0 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C000FEF0 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C000FF10 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_qhhhqhhh @ 0x1C0001BD4 (Template_qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002738 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0002970 (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002B030 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1, __int64 a2)
{
  __int16 v2; // r15
  _WORD *v4; // rax
  unsigned int v5; // ebp
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // di
  unsigned __int16 v8; // si
  __int16 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // cx
  int v18; // eax
  unsigned __int16 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned __int16 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 v28; // r9
  int v29; // eax
  unsigned __int8 v30; // dl
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v36; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-80h]
  __int64 v38; // [rsp+30h] [rbp-78h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  __int16 v41; // [rsp+B0h] [rbp+8h]
  char v42; // [rsp+C0h] [rbp+18h]

  LOBYTE(v2) = 0;
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
  v4 = (_WORD *)a1[166];
  v5 = 3061;
  v6 = *((_WORD *)a1 + 92);
  v7 = *((_WORD *)a1 + 96);
  v8 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v6;
  if ( v4 )
    v41 = v4[990];
  else
    LOBYTE(v41) = 0;
  if ( v4 )
  {
    v9 = v4[991];
    v42 = v9;
  }
  else
  {
    LOBYTE(v9) = 0;
    v42 = 0;
  }
  if ( v4 )
    v2 = v4[992];
  if ( (v6 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v11 = *a1;
    v12 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v5 = 3065;
    if ( (*(_DWORD *)(v11 + 2560) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      Template_qhhhqhhh(
        v10,
        v12,
        (const GUID *)(*a1 + 2380LL),
        *((unsigned __int16 *)a1 + 100),
        v7,
        v6,
        v8,
        249,
        v41,
        v9,
        v2);
    goto LABEL_117;
  }
  if ( (v8 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v7 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v5 = 3065;
    }
    v14 = 512LL;
    if ( (*(_DWORD *)(*a1 + 2560LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      Template_qhhhqhhh(
        v13,
        v14,
        (const GUID *)(*a1 + 2380LL),
        *((unsigned __int16 *)a1 + 100),
        v7,
        v6,
        v8,
        v5,
        v41,
        v42,
        v2);
    goto LABEL_110;
  }
  if ( (v6 & 0x200) == 0 )
  {
    v15 = 86;
LABEL_25:
    WPP_RECORDER_SF_(a1[179], 2u, 4u, v15, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
    goto LABEL_26;
  }
  if ( (v6 & 0x10) == 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      if ( (v6 & 0x1E0) == 0xA0 && (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xA0 )
        goto LABEL_36;
      if ( (v6 & 0x1E0) == 0xE0 && (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xE0 )
      {
        v16 = 89;
LABEL_45:
        WPP_RECORDER_SF_(a1[179], 2u, 4u, v16, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
        goto LABEL_36;
      }
    }
    v17 = (v6 >> 5) & 0xF;
    if ( v17 == 11 )
    {
      v18 = (v6 >> 5) & 0xF;
      v19 = 90;
      goto LABEL_48;
    }
    if ( v17 == 4 && (v7 & 0x1E0) != 0x80 )
    {
      v18 = (v6 >> 5) & 0xF;
      v19 = 91;
      goto LABEL_48;
    }
    if ( v17 == 10 )
    {
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *a1);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v20)
        || *(_BYTE *)(*a1 + 232LL) )
      {
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Cu,
          (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
          (v6 >> 5) & 0xF,
          v6 & 1);
        if ( (*(_DWORD *)(*a1 + 2560LL) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
          Template_qhhhqhhh(
            v25,
            v24,
            (const GUID *)(*a1 + 2380LL),
            *((unsigned __int16 *)a1 + 100),
            v7,
            v6,
            v8,
            245,
            v41,
            v42,
            v2);
        goto LABEL_61;
      }
      v21 = v6;
      v22 = 93;
      v23 = v6 & 1;
      goto LABEL_56;
    }
    if ( v17 == 6 )
    {
      WPP_RECORDER_SF_dD(
        a1[179],
        2u,
        4u,
        0x5Eu,
        (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
        (v6 >> 5) & 0xF,
        v6 & 1);
      v27 = *(unsigned int *)(*a1 + 2560LL);
      if ( (v27 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
        Template_qhhhqhhh(
          v27,
          v26,
          (const GUID *)(*a1 + 2380LL),
          *((unsigned __int16 *)a1 + 100),
          v7,
          v6,
          v8,
          245,
          v41,
          v42,
          v2);
      if ( (v8 & 0x80u) != 0 )
      {
        v16 = 95;
        goto LABEL_45;
      }
      if ( *((_DWORD *)a1 + 2) != 3053 )
      {
        if ( (v6 & 2) != 0 )
        {
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) == 0 )
          {
            v15 = 98;
            goto LABEL_25;
          }
          WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x61u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
        }
        v21 = v6;
        v22 = 99;
        v23 = v6 & 1;
LABEL_56:
        LODWORD(v38) = v23;
        LODWORD(v37) = (v21 >> 5) & 0xF;
        WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v22, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, v37, v38);
        goto LABEL_61;
      }
      v28 = 96;
      v29 = v6 & 1;
      v30 = 3;
    }
    else
    {
      if ( (v8 & 1) != 0 || (v6 & 1) != (v7 & 1) )
      {
        v5 = 3017;
        goto LABEL_110;
      }
      if ( (v6 & 1) != 0 )
      {
        v31 = v6 & 0x1E0;
        if ( (v6 & 0x1E0) != 0xA0 )
        {
          if ( (v6 & 2) == 0 )
          {
            v15 = 104;
            goto LABEL_25;
          }
          if ( v17 <= 3u || v17 == 8 )
          {
            if ( (v8 & 0x10) != 0 )
            {
              if ( v31 == 96 )
              {
                v15 = 106;
                goto LABEL_25;
              }
              v5 = 3073;
            }
            else
            {
              if ( (v7 & 0x1E0) != 0x60 || v31 == 96 )
                return v5;
              v5 = 3085;
            }
LABEL_117:
            *((_DWORD *)a1 + 2) = v5;
            return v5;
          }
          v18 = (v6 >> 5) & 0xF;
          v19 = 105;
LABEL_48:
          WPP_RECORDER_SF_d(a1[179], 2u, 4u, v19, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, v18);
LABEL_26:
          v5 = 3077;
          v32 = *(unsigned int *)(*a1 + 2560LL);
          if ( (v32 & 0x10) != 0 )
            HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
          *(_DWORD *)(*a1 + 2564LL) = 1073872896;
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x4000) != 0 )
          {
            LODWORD(v36) = *((unsigned __int16 *)a1 + 100);
            Template_pq(v32, &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR, 0LL, *(_QWORD *)(*a1 + 240LL), v36);
          }
          *(_WORD *)(*a1 + 74LL) = v8;
          *(_WORD *)(*a1 + 72LL) = v6;
          goto LABEL_117;
        }
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
LABEL_61:
        v5 = 3053;
        ++*((_DWORD *)a1 + 361);
        if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
          goto LABEL_117;
        LODWORD(v38) = *((_DWORD *)a1 + 361);
        WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, a1, v38);
        if ( (*(_DWORD *)(*a1 + 2560LL) & 0x800) == 0 )
          goto LABEL_117;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_110:
        if ( v5 != 3017 )
          goto LABEL_116;
        goto LABEL_111;
      }
      if ( (v6 & 2) != 0 )
      {
        v15 = 100;
        goto LABEL_25;
      }
      if ( (v6 & 0x1E0u) > 0x60 )
        return v5;
      if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
      {
        v18 = (v6 >> 5) & 0xF;
        v19 = 102;
        goto LABEL_48;
      }
      v30 = 2;
      v29 = (v6 >> 5) & 0xF;
      v28 = 101;
    }
    LODWORD(v37) = v29;
    WPP_RECORDER_SF_d(a1[179], v30, 4u, v28, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, v37);
    return v5;
  }
  if ( (v6 & 2) != 0 )
  {
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x1000000) == 0 )
    {
      v15 = 88;
      goto LABEL_25;
    }
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x57u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
  }
  if ( (v6 & 1) != 0 )
  {
    v5 = 3081;
    goto LABEL_117;
  }
  if ( (v8 & 1) == 0 && (v7 & 1) == 0 )
    return v5;
LABEL_36:
  v5 = 3017;
LABEL_111:
  if ( (v6 & 1) != 0 )
    goto LABEL_117;
  LODWORD(v40) = v8;
  LODWORD(v39) = v6;
  LODWORD(v38) = v7;
  LODWORD(v37) = *((unsigned __int16 *)a1 + 100);
  WPP_RECORDER_SF_dDDD(
    a1[179],
    v7,
    4u,
    0x6Cu,
    (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
    v37,
    v38,
    v39,
    v40);
  if ( (*(_DWORD *)(*a1 + 2560LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) == 0 )
    goto LABEL_117;
  Template_qhhhqhhh(v34, v33, 0LL, *((unsigned __int16 *)a1 + 100), v7, v6, v8, 201, v41, v42, v2);
LABEL_116:
  if ( v5 != 3061 )
    goto LABEL_117;
  return v5;
}
