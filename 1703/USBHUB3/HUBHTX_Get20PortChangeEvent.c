/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x1C0004168
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000EFF0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C000F240 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     Template_qhhhqhhh @ 0x1C0001BD4 (Template_qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002738 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002B030 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(_QWORD *a1, __int64 a2)
{
  _WORD *v3; // rax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // si
  unsigned __int16 v6; // di
  __int16 v7; // r13
  __int16 v8; // r12
  __int16 v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]

  if ( *((_BYTE *)a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL),
      0LL,
      3056LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)a1 + 1457) = 0;
  }
  v3 = (_WORD *)a1[166];
  v4 = *((_WORD *)a1 + 92);
  v5 = *((_WORD *)a1 + 96);
  v6 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v4;
  if ( v3 )
    v7 = v3[990];
  else
    LOBYTE(v7) = 0;
  if ( v3 )
    v8 = v3[991];
  else
    LOBYTE(v8) = 0;
  if ( v3 )
    v9 = v3[992];
  else
    LOBYTE(v9) = 0;
  v10 = 3041;
  LOBYTE(a2) = 2;
  if ( (v4 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
LABEL_14:
    v10 = 3065;
    *((_DWORD *)a1 + 356) = 4;
LABEL_15:
    if ( (*(_DWORD *)(*a1 + 2560LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      Template_qhhhqhhh(
        v12,
        v11,
        (const GUID *)(*a1 + 2380LL),
        *((unsigned __int16 *)a1 + 100),
        v5,
        v4,
        v6,
        v10,
        v7,
        v8,
        v9);
    goto LABEL_19;
  }
  if ( (v6 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v5 & 8) != 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (v4 & 0x100) != 0 )
  {
    if ( (v6 & 1) != 0 || (v4 & 1) != (v5 & 1) )
    {
      v10 = 3017;
      goto LABEL_19;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v16 = 73;
    }
    else if ( (v4 & 1) != 0 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        if ( (v4 & 2) != 0 )
        {
          if ( (v4 & 4) == 0 )
          {
            v10 = 3073;
            goto LABEL_19;
          }
          v16 = 77;
        }
        else
        {
          v16 = 76;
        }
      }
      else
      {
        if ( (v6 & 4) == 0 )
          goto LABEL_19;
        if ( (v4 & 2) != 0 )
        {
          if ( (v4 & 4) == 0 )
          {
            v10 = 3085;
            goto LABEL_19;
          }
          v16 = 79;
        }
        else
        {
          v16 = 78;
        }
      }
    }
    else if ( (v4 & 2) != 0 )
    {
      v16 = 74;
    }
    else
    {
      if ( (v4 & 4) == 0 )
        goto LABEL_19;
      v16 = 75;
    }
  }
  else
  {
    v16 = 72;
  }
  WPP_RECORDER_SF_(a1[179], 2u, 4u, v16, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
LABEL_19:
  *((_DWORD *)a1 + 2) = v10;
  if ( v10 == 3017 && (v4 & 1) == 0 )
  {
    LODWORD(v20) = v6;
    LODWORD(v19) = v4;
    LODWORD(v18) = v5;
    LODWORD(v17) = *((unsigned __int16 *)a1 + 100);
    WPP_RECORDER_SF_dDDD(
      a1[179],
      v5,
      4u,
      0x50u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v17,
      v18,
      v19,
      v20);
    if ( (*(_DWORD *)(*a1 + 2560LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x51u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000) != 0 )
      Template_qhhhqhhh(
        v14,
        v13,
        (const GUID *)(*a1 + 2380LL),
        *((unsigned __int16 *)a1 + 100),
        v5,
        v4,
        v6,
        201,
        v7,
        v8,
        v9);
  }
  return v10;
}
