/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x1C0003CD4
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000DDF0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C000E000 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     Template_qhhhq @ 0x1C0001848 (Template_qhhhq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002334 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0027754 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(_QWORD *a1)
{
  unsigned __int16 v1; // bx
  unsigned __int16 v2; // si
  unsigned __int16 v4; // di
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]

  v1 = *((_WORD *)a1 + 92);
  v2 = *((_WORD *)a1 + 96);
  v4 = *((_WORD *)a1 + 97);
  v5 = 3041;
  *((_WORD *)a1 + 96) = v1;
  if ( (v1 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1);
LABEL_3:
    v5 = 3065;
    *((_DWORD *)a1 + 356) = 4;
LABEL_4:
    if ( (*(_DWORD *)(*a1 + 2512LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
      Template_qhhhq(v7, v6, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v2, v1, v4, v5);
    goto LABEL_8;
  }
  if ( (v4 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1);
    if ( (v2 & 8) != 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( (v1 & 0x100) != 0 )
  {
    if ( (v4 & 1) != 0 || (v1 & 1) != (v2 & 1) )
    {
      v5 = 3017;
      goto LABEL_8;
    }
    if ( (v1 & 0x10) != 0 )
    {
      v12 = 73;
    }
    else if ( (v1 & 1) != 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        if ( (v1 & 2) != 0 )
        {
          if ( (v1 & 4) == 0 )
          {
            v5 = 3073;
            goto LABEL_8;
          }
          v12 = 77;
        }
        else
        {
          v12 = 76;
        }
      }
      else
      {
        if ( (v4 & 4) == 0 )
          goto LABEL_8;
        if ( (v1 & 2) != 0 )
        {
          if ( (v1 & 4) == 0 )
          {
            v5 = 3085;
            goto LABEL_8;
          }
          v12 = 79;
        }
        else
        {
          v12 = 78;
        }
      }
    }
    else if ( (v1 & 2) != 0 )
    {
      v12 = 74;
    }
    else
    {
      if ( (v1 & 4) == 0 )
        goto LABEL_8;
      v12 = 75;
    }
    v11 = a1[179];
  }
  else
  {
    v11 = a1[179];
    v12 = 72;
  }
  WPP_RECORDER_SF_(v11, 2u, 4u, v12, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
LABEL_8:
  *((_DWORD *)a1 + 2) = v5;
  if ( v5 == 3017 && (v1 & 1) == 0 )
  {
    LODWORD(v15) = v1;
    LODWORD(v14) = v2;
    LODWORD(v13) = *((unsigned __int16 *)a1 + 100);
    WPP_RECORDER_SF_dDDD(
      a1[179],
      v2,
      4u,
      0x50u,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v13,
      v14,
      v15,
      v4);
    if ( (*(_DWORD *)(*a1 + 2512LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
    WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x51u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
      Template_qhhhq(v9, v8, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v2, v1, v4, 201);
  }
  return v5;
}
