/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C000449C
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C000EB40 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C000EB80 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C000EB90 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_qhhhq @ 0x1C0001848 (Template_qhhhq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002334 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000255C (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0027754 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1)
{
  unsigned __int16 v1; // bx
  unsigned __int16 v3; // di
  unsigned int v4; // ebp
  unsigned __int16 v5; // si
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r9
  __int64 v17; // rax
  unsigned __int16 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int16 v24; // r9
  unsigned __int8 v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]

  v1 = *((_WORD *)a1 + 92);
  v3 = *((_WORD *)a1 + 96);
  v4 = 3061;
  v5 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v1;
  if ( (v1 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1);
    v7 = *a1;
    v8 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v4 = 3065;
    if ( (*(_DWORD *)(v7 + 2512) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
      Template_qhhhq(v6, v8, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v3, v1, v5, 249);
    goto LABEL_110;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1);
    if ( (v3 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v4 = 3065;
    }
    v10 = 512LL;
    if ( (*(_DWORD *)(*a1 + 2512LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
      Template_qhhhq(v9, v10, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v3, v1, v5, v4);
    goto LABEL_103;
  }
  if ( (v1 & 0x200) == 0 )
  {
    v11 = 86;
LABEL_15:
    v12 = a1[179];
LABEL_16:
    WPP_RECORDER_SF_(v12, 2u, 4u, v11, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
    goto LABEL_17;
  }
  if ( (v1 & 0x10) == 0 )
  {
    v13 = v1;
    LOWORD(v13) = v1 & 1;
    if ( (v1 & 1) == 0 && (v1 & 0x1E0) == 0xA0 && (v3 & 0x200) != 0 && (v3 & 0x1E0) != 0xA0 )
      goto LABEL_27;
    if ( (v1 & 1) == 0 && (v1 & 0x1E0) == 0xE0 && (v3 & 0x200) != 0 && (v3 & 0x1E0) != 0xE0 )
    {
      v14 = 89;
LABEL_37:
      WPP_RECORDER_SF_(a1[179], 2u, 4u, v14, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
      goto LABEL_27;
    }
    v15 = (v1 >> 5) & 0xF;
    if ( v15 == 11 )
    {
      v16 = 90;
LABEL_40:
      WPP_RECORDER_SF_d(
        a1[179],
        2u,
        4u,
        v16,
        (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
        (v1 >> 5) & 0xF);
LABEL_17:
      v4 = 3077;
      v26 = *(unsigned int *)(*a1 + 2512LL);
      if ( (v26 & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
      *(_DWORD *)(*a1 + 2516LL) = 1073872896;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
      {
        LODWORD(v30) = *((unsigned __int16 *)a1 + 100);
        Template_pq(v26, &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR, 0LL, *(_QWORD *)(*a1 + 208LL), v30);
      }
      *(_WORD *)(*a1 + 66LL) = v5;
      *(_WORD *)(*a1 + 64LL) = v1;
      goto LABEL_110;
    }
    if ( v15 == 4 && (v3 & 0x1E0) != 0x80 )
    {
      v16 = 91;
      goto LABEL_40;
    }
    if ( v15 == 10 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              *a1,
              v13,
              480LL);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v17)
        || *(_BYTE *)(*a1 + 200LL) )
      {
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Cu,
          (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
          (v1 >> 5) & 0xF,
          v1 & 1);
        if ( (*(_DWORD *)(*a1 + 2512LL) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
          Template_qhhhq(v20, v19, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v3, v1, v5, 245);
        goto LABEL_53;
      }
      v18 = 93;
      LODWORD(v32) = v1 & 1;
      LODWORD(v31) = (v1 >> 5) & 0xF;
      goto LABEL_48;
    }
    if ( v15 == 6 )
    {
      WPP_RECORDER_SF_dD(
        a1[179],
        2u,
        4u,
        0x5Eu,
        (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
        (v1 >> 5) & 0xF,
        v1 & 1);
      v22 = *(unsigned int *)(*a1 + 2512LL);
      if ( (v22 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
        Template_qhhhq(v22, v21, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v3, v1, v5, 245);
      if ( (v5 & 0x80u) != 0 )
      {
        v14 = 95;
        goto LABEL_37;
      }
      if ( *((_DWORD *)a1 + 2) == 3053 )
      {
        v23 = v1 & 1;
        v24 = 96;
        v25 = 3;
        goto LABEL_63;
      }
      if ( (v1 & 2) == 0 )
      {
LABEL_67:
        v18 = 99;
        LODWORD(v32) = v1 & 1;
        LODWORD(v31) = (v1 >> 5) & 0xF;
LABEL_48:
        WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v18, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids, v31, v32);
        goto LABEL_53;
      }
      if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) != 0 )
      {
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x61u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
        goto LABEL_67;
      }
      v11 = 98;
    }
    else
    {
      if ( (v5 & 1) != 0 || (_WORD)v13 != (v3 & 1) )
      {
        v4 = 3017;
        goto LABEL_103;
      }
      if ( (v1 & 1) != 0 )
      {
        if ( v15 == 5 )
        {
          WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
LABEL_53:
          v4 = 3053;
          ++*((_DWORD *)a1 + 361);
          if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
            goto LABEL_110;
          LODWORD(v32) = *((_DWORD *)a1 + 361);
          WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids, a1, v32);
          if ( (*(_DWORD *)(*a1 + 2512LL) & 0x800) == 0 )
            goto LABEL_110;
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_103:
          if ( v4 != 3017 )
            goto LABEL_109;
          goto LABEL_104;
        }
        if ( (v1 & 2) != 0 )
        {
          if ( v15 > 3u && v15 != 8 )
          {
            v16 = 105;
            goto LABEL_40;
          }
          if ( (v5 & 0x10) == 0 )
          {
            if ( (v3 & 0x1E0) != 0x60 || v15 == 3 )
              return v4;
            v4 = 3085;
LABEL_110:
            *((_DWORD *)a1 + 2) = v4;
            return v4;
          }
          if ( v15 != 3 )
          {
            v4 = 3073;
            goto LABEL_110;
          }
          v11 = 106;
        }
        else
        {
          v11 = 104;
        }
      }
      else
      {
        if ( (v1 & 2) == 0 )
        {
          if ( v15 > 3u )
            return v4;
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
          {
            v16 = 102;
            goto LABEL_40;
          }
          v24 = 101;
          v23 = (v1 >> 5) & 0xF;
          v25 = 2;
LABEL_63:
          LODWORD(v31) = v23;
          WPP_RECORDER_SF_d(a1[179], v25, 4u, v24, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids, v31);
          return v4;
        }
        v11 = 100;
      }
    }
    v12 = a1[179];
    goto LABEL_16;
  }
  if ( (v1 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*a1 + 43LL) & 1) == 0 )
    {
      v11 = 88;
      goto LABEL_15;
    }
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x57u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
  }
  if ( (v1 & 1) != 0 )
  {
    v4 = 3081;
    goto LABEL_110;
  }
  if ( (v5 & 1) == 0 && (v3 & 1) == 0 )
    return v4;
LABEL_27:
  v4 = 3017;
LABEL_104:
  if ( (v1 & 1) != 0 )
    goto LABEL_110;
  LODWORD(v33) = v1;
  LODWORD(v32) = v3;
  LODWORD(v31) = *((unsigned __int16 *)a1 + 100);
  WPP_RECORDER_SF_dDDD(
    a1[179],
    v3,
    4u,
    0x6Cu,
    (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
    v31,
    v32,
    v33,
    v5);
  if ( (*(_DWORD *)(*a1 + 2512LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) == 0 )
    goto LABEL_110;
  Template_qhhhq(v28, v27, 0LL, *((unsigned __int16 *)a1 + 100), v3, v1, v5, 201);
LABEL_109:
  if ( v4 != 3061 )
    goto LABEL_110;
  return v4;
}
