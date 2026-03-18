/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C00048D0
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C000F100 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C000F140 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C000F150 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_qhhhqhhh @ 0x1C0001B58 (Template_qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002674 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000289C (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 v5; // di
  unsigned int v6; // ebp
  unsigned __int16 v7; // si
  __int16 v8; // r13
  __int16 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r9
  __int64 v20; // rax
  unsigned __int16 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int16 v27; // r9
  unsigned __int8 v28; // dl
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  __int16 v38; // [rsp+C0h] [rbp+8h]
  char v39; // [rsp+C8h] [rbp+10h]
  char v40; // [rsp+D0h] [rbp+18h]

  v2 = (_WORD *)a1[166];
  v3 = *((_WORD *)a1 + 92);
  v5 = *((_WORD *)a1 + 96);
  v6 = 3061;
  v7 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v3;
  if ( v2 )
    v38 = v2[990];
  else
    LOBYTE(v38) = 0;
  if ( v2 )
  {
    v8 = v2[991];
    v40 = v8;
  }
  else
  {
    LOBYTE(v8) = 0;
    v40 = 0;
  }
  if ( v2 )
  {
    v9 = v2[992];
    v39 = v9;
  }
  else
  {
    LOBYTE(v9) = 0;
    v39 = 0;
  }
  if ( (v3 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v11 = *a1;
    v12 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v6 = 3065;
    if ( (*(_DWORD *)(v11 + 2536) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      Template_qhhhqhhh(
        v10,
        v12,
        (const GUID *)(*a1 + 2356LL),
        *((unsigned __int16 *)a1 + 100),
        v5,
        v3,
        v7,
        249,
        v38,
        v8,
        v9);
    goto LABEL_117;
  }
  if ( (v7 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v5 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v6 = 3065;
    }
    v14 = 512LL;
    if ( (*(_DWORD *)(*a1 + 2536LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      Template_qhhhqhhh(
        v13,
        v14,
        (const GUID *)(*a1 + 2356LL),
        *((unsigned __int16 *)a1 + 100),
        v5,
        v3,
        v7,
        v6,
        v38,
        v40,
        v39);
    goto LABEL_110;
  }
  if ( (v3 & 0x200) == 0 )
  {
    v15 = 86;
LABEL_24:
    WPP_RECORDER_SF_(a1[179], 2u, 4u, v15, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
    goto LABEL_25;
  }
  if ( (v3 & 0x10) == 0 )
  {
    v16 = v3;
    LOWORD(v16) = v3 & 1;
    if ( (v3 & 1) == 0 && (v3 & 0x1E0) == 0xA0 && (v5 & 0x200) != 0 && (v5 & 0x1E0) != 0xA0 )
      goto LABEL_35;
    if ( (v3 & 1) == 0 && (v3 & 0x1E0) == 0xE0 && (v5 & 0x200) != 0 && (v5 & 0x1E0) != 0xE0 )
    {
      v17 = 89;
LABEL_45:
      WPP_RECORDER_SF_(a1[179], 2u, 4u, v17, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
      goto LABEL_35;
    }
    v18 = (v3 >> 5) & 0xF;
    if ( v18 == 11 )
    {
      v19 = 90;
      goto LABEL_48;
    }
    if ( v18 == 4 && (v5 & 0x1E0) != 0x80 )
    {
      v19 = 91;
      goto LABEL_48;
    }
    if ( v18 == 10 )
    {
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              *a1,
              v16,
              0LL);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v20)
        || *(_BYTE *)(*a1 + 216LL) )
      {
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Cu,
          (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
          (v3 >> 5) & 0xF,
          v3 & 1);
        if ( (*(_DWORD *)(*a1 + 2536LL) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
          Template_qhhhqhhh(
            v23,
            v22,
            (const GUID *)(*a1 + 2356LL),
            *((unsigned __int16 *)a1 + 100),
            v5,
            v3,
            v7,
            245,
            v38,
            v40,
            v39);
        goto LABEL_61;
      }
      v21 = 93;
      LODWORD(v35) = v3 & 1;
      LODWORD(v34) = (v3 >> 5) & 0xF;
      goto LABEL_56;
    }
    if ( v18 == 6 )
    {
      WPP_RECORDER_SF_dD(
        a1[179],
        2u,
        4u,
        0x5Eu,
        (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
        (v3 >> 5) & 0xF,
        v3 & 1);
      v25 = *(unsigned int *)(*a1 + 2536LL);
      if ( (v25 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
        Template_qhhhqhhh(
          v25,
          v24,
          (const GUID *)(*a1 + 2356LL),
          *((unsigned __int16 *)a1 + 100),
          v5,
          v3,
          v7,
          245,
          v38,
          v40,
          v39);
      if ( (v7 & 0x80u) != 0 )
      {
        v17 = 95;
        goto LABEL_45;
      }
      if ( *((_DWORD *)a1 + 2) != 3053 )
      {
        if ( (v3 & 2) != 0 )
        {
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) == 0 )
          {
            v15 = 98;
            goto LABEL_24;
          }
          WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x61u, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
        }
        v21 = 99;
        LODWORD(v35) = v3 & 1;
        LODWORD(v34) = (v3 >> 5) & 0xF;
LABEL_56:
        WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v21, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids, v34, v35);
        goto LABEL_61;
      }
      v26 = v3 & 1;
      v27 = 96;
      v28 = 3;
    }
    else
    {
      if ( (v7 & 1) != 0 || (_WORD)v16 != (v5 & 1) )
      {
        v6 = 3017;
        goto LABEL_110;
      }
      if ( (v3 & 1) != 0 )
      {
        if ( v18 != 5 )
        {
          if ( (v3 & 2) == 0 )
          {
            v15 = 104;
            goto LABEL_24;
          }
          if ( v18 <= 3u || v18 == 8 )
          {
            if ( (v7 & 0x10) != 0 )
            {
              if ( v18 == 3 )
              {
                v15 = 106;
                goto LABEL_24;
              }
              v6 = 3073;
            }
            else
            {
              if ( (v5 & 0x1E0) != 0x60 || v18 == 3 )
                return v6;
              v6 = 3085;
            }
LABEL_117:
            *((_DWORD *)a1 + 2) = v6;
            return v6;
          }
          v19 = 105;
LABEL_48:
          WPP_RECORDER_SF_d(
            a1[179],
            2u,
            4u,
            v19,
            (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
            (v3 >> 5) & 0xF);
LABEL_25:
          v6 = 3077;
          v29 = *(unsigned int *)(*a1 + 2536LL);
          if ( (v29 & 0x10) != 0 )
            HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
          *(_DWORD *)(*a1 + 2540LL) = 1073872896;
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
          {
            LODWORD(v33) = *((unsigned __int16 *)a1 + 100);
            Template_pq(v29, &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR, 0LL, *(_QWORD *)(*a1 + 224LL), v33);
          }
          *(_WORD *)(*a1 + 66LL) = v7;
          *(_WORD *)(*a1 + 64LL) = v3;
          goto LABEL_117;
        }
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
LABEL_61:
        v6 = 3053;
        ++*((_DWORD *)a1 + 361);
        if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
          goto LABEL_117;
        LODWORD(v35) = *((_DWORD *)a1 + 361);
        WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids, a1, v35);
        if ( (*(_DWORD *)(*a1 + 2536LL) & 0x800) == 0 )
          goto LABEL_117;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_110:
        if ( v6 != 3017 )
          goto LABEL_116;
        goto LABEL_111;
      }
      if ( (v3 & 2) != 0 )
      {
        v15 = 100;
        goto LABEL_24;
      }
      if ( v18 > 3u )
        return v6;
      if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
      {
        v19 = 102;
        goto LABEL_48;
      }
      v27 = 101;
      v26 = (v3 >> 5) & 0xF;
      v28 = 2;
    }
    LODWORD(v34) = v26;
    WPP_RECORDER_SF_d(a1[179], v28, 4u, v27, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids, v34);
    return v6;
  }
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*a1 + 43LL) & 1) == 0 )
    {
      v15 = 88;
      goto LABEL_24;
    }
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x57u, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
  }
  if ( (v3 & 1) != 0 )
  {
    v6 = 3081;
    goto LABEL_117;
  }
  if ( (v7 & 1) == 0 && (v5 & 1) == 0 )
    return v6;
LABEL_35:
  v6 = 3017;
LABEL_111:
  if ( (v3 & 1) != 0 )
    goto LABEL_117;
  LODWORD(v37) = v7;
  LODWORD(v36) = v3;
  LODWORD(v35) = v5;
  LODWORD(v34) = *((unsigned __int16 *)a1 + 100);
  WPP_RECORDER_SF_dDDD(
    a1[179],
    v5,
    4u,
    0x6Cu,
    (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
    v34,
    v35,
    v36,
    v37);
  if ( (*(_DWORD *)(*a1 + 2536LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) == 0 )
    goto LABEL_117;
  Template_qhhhqhhh(v31, v30, 0LL, *((unsigned __int16 *)a1 + 100), v5, v3, v7, 201, v38, v40, v39);
LABEL_116:
  if ( v6 != 3061 )
    goto LABEL_117;
  return v6;
}
