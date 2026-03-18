/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x1C0004014
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000E3B0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C000E5C0 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     Template_qhhhqhhh @ 0x1C0001B58 (Template_qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002674 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(_QWORD *a1)
{
  _WORD *v1; // rax
  unsigned __int16 v2; // bx
  unsigned __int16 v4; // si
  unsigned __int16 v5; // di
  __int16 v6; // r13
  __int16 v7; // r12
  __int16 v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rcx
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]

  v1 = (_WORD *)a1[166];
  v2 = *((_WORD *)a1 + 92);
  v4 = *((_WORD *)a1 + 96);
  v5 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v2;
  if ( v1 )
    v6 = v1[990];
  else
    LOBYTE(v6) = 0;
  if ( v1 )
    v7 = v1[991];
  else
    LOBYTE(v7) = 0;
  if ( v1 )
    v8 = v1[992];
  else
    LOBYTE(v8) = 0;
  v9 = 3041;
  if ( (v2 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, 0LL);
LABEL_12:
    v9 = 3065;
    *((_DWORD *)a1 + 356) = 4;
LABEL_13:
    if ( (*(_DWORD *)(*a1 + 2536LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      Template_qhhhqhhh(
        v11,
        v10,
        (const GUID *)(*a1 + 2356LL),
        *((unsigned __int16 *)a1 + 100),
        v4,
        v2,
        v5,
        v9,
        v6,
        v7,
        v8);
    goto LABEL_17;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, 0LL);
    if ( (v4 & 8) != 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (v2 & 0x100) != 0 )
  {
    if ( (v5 & 1) != 0 || (v2 & 1) != (v4 & 1) )
    {
      v9 = 3017;
      goto LABEL_17;
    }
    if ( (v2 & 0x10) != 0 )
    {
      v16 = 73;
    }
    else if ( (v2 & 1) != 0 )
    {
      if ( (v5 & 0x10) != 0 )
      {
        if ( (v2 & 2) != 0 )
        {
          if ( (v2 & 4) == 0 )
          {
            v9 = 3073;
            goto LABEL_17;
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
        if ( (v5 & 4) == 0 )
          goto LABEL_17;
        if ( (v2 & 2) != 0 )
        {
          if ( (v2 & 4) == 0 )
          {
            v9 = 3085;
            goto LABEL_17;
          }
          v16 = 79;
        }
        else
        {
          v16 = 78;
        }
      }
    }
    else if ( (v2 & 2) != 0 )
    {
      v16 = 74;
    }
    else
    {
      if ( (v2 & 4) == 0 )
        goto LABEL_17;
      v16 = 75;
    }
    v15 = a1[179];
  }
  else
  {
    v15 = a1[179];
    v16 = 72;
  }
  WPP_RECORDER_SF_(v15, 2u, 4u, v16, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
LABEL_17:
  *((_DWORD *)a1 + 2) = v9;
  if ( v9 == 3017 && (v2 & 1) == 0 )
  {
    LODWORD(v20) = v5;
    LODWORD(v19) = v2;
    LODWORD(v18) = v4;
    LODWORD(v17) = *((unsigned __int16 *)a1 + 100);
    WPP_RECORDER_SF_dDDD(
      a1[179],
      v4,
      4u,
      0x50u,
      (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
      v17,
      v18,
      v19,
      v20);
    if ( (*(_DWORD *)(*a1 + 2536LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x51u, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      Template_qhhhqhhh(
        v13,
        v12,
        (const GUID *)(*a1 + 2356LL),
        *((unsigned __int16 *)a1 + 100),
        v4,
        v2,
        v5,
        201,
        v6,
        v7,
        v8);
  }
  return v9;
}
