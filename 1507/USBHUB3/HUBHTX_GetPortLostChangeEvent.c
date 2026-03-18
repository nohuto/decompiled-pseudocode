/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x1C0004274
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x1C000DE90 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     Template_qhhhq @ 0x1C0001848 (Template_qhhhq.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002334 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0027754 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(_QWORD *a1)
{
  unsigned __int16 v1; // si
  unsigned __int16 v2; // di
  unsigned __int16 v3; // bx
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-30h]

  v1 = *((_WORD *)a1 + 92);
  v2 = *((_WORD *)a1 + 96);
  v3 = *((_WORD *)a1 + 93);
  *((_WORD *)a1 + 96) = v1;
  v5 = 3013;
  if ( (v1 & 1) != (v2 & 1) && (v3 & 1) == 0 )
  {
    v5 = 3017;
    goto LABEL_23;
  }
  if ( ((v1 >> 3) & 1) != 0 && (((unsigned __int8)v3 | (unsigned __int8)v2) & 8) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1);
    *((_DWORD *)a1 + 356) = 4;
    v5 = 3065;
LABEL_11:
    if ( (*(_DWORD *)(*a1 + 2512LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
      Template_qhhhq(v7, v6, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v2, v1, v3, v5);
    goto LABEL_23;
  }
  if ( ((v1 >> 3) & 1) == 0 && (v2 & 8) != 0 && (v3 & 8) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1);
    *((_DWORD *)a1 + 356) = 0;
    v5 = 3069;
    goto LABEL_11;
  }
  if ( (v1 & 2) != 0 || (v2 & 2) == 0 || (v3 & 2) != 0 )
  {
    if ( (v1 & 4) == 0 && (v2 & 4) != 0 && (v3 & 4) == 0 )
      v5 = 3085;
  }
  else
  {
    v5 = 3029;
  }
LABEL_23:
  *((_DWORD *)a1 + 2) = v5;
  if ( v5 == 3017 && (v1 & 1) == 0 )
  {
    LODWORD(v13) = v1;
    LODWORD(v12) = v2;
    LODWORD(v11) = *((unsigned __int16 *)a1 + 100);
    WPP_RECORDER_SF_dDDD(
      a1[179],
      v2,
      4u,
      0x55u,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v11,
      v12,
      v13,
      v3);
    if ( (*(_DWORD *)(*a1 + 2512LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000) != 0 )
      Template_qhhhq(v9, v8, (const GUID *)(*a1 + 2332LL), *((unsigned __int16 *)a1 + 100), v2, v1, v3, 201);
  }
  return v5;
}
