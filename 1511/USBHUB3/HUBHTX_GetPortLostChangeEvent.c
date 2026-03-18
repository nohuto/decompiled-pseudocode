/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x1C0004628
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x1C000E450 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     Template_qhhhqhhh @ 0x1C0001B58 (Template_qhhhqhhh.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002674 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(__int64 a1)
{
  _WORD *v1; // rax
  unsigned __int16 v2; // bx
  unsigned __int16 v4; // di
  unsigned __int16 v5; // si
  __int16 v6; // r13
  __int16 v7; // r12
  __int16 v8; // r15
  __int16 v9; // cx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h]

  v1 = *(_WORD **)(a1 + 1328);
  v2 = *(_WORD *)(a1 + 184);
  v4 = *(_WORD *)(a1 + 192);
  v5 = *(_WORD *)(a1 + 186);
  *(_WORD *)(a1 + 192) = v2;
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
  v9 = v2 & 1;
  v10 = 3013;
  if ( v9 == (v4 & 1) || (v5 & 1) != 0 )
  {
    if ( ((v2 >> 3) & 1) == 0 || (((unsigned __int8)v5 | (unsigned __int8)v4) & 8) != 0 )
    {
      if ( ((v2 >> 3) & 1) != 0 || (v4 & 8) == 0 || (v5 & 8) != 0 )
      {
        if ( (v2 & 2) != 0 || (v4 & 2) == 0 || (v5 & 2) != 0 )
        {
          if ( (v2 & 4) == 0 && (v4 & 4) != 0 && (v5 & 4) == 0 )
            v10 = 3085;
        }
        else
        {
          v10 = 3029;
        }
        goto LABEL_32;
      }
      HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)a1, 0LL);
      v11 = 0LL;
      v10 = 3069;
      *(_DWORD *)(a1 + 1424) = 0;
    }
    else
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)a1, 0LL);
      *(_DWORD *)(a1 + 1424) = 4;
      v10 = 3065;
    }
    v12 = *(unsigned int *)(*(_QWORD *)a1 + 2536LL);
    if ( (v12 & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 272);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      Template_qhhhqhhh(
        v12,
        v11,
        (const GUID *)(*(_QWORD *)a1 + 2356LL),
        *(unsigned __int16 *)(a1 + 200),
        v4,
        v2,
        v5,
        v10,
        v6,
        v7,
        v8);
LABEL_32:
    v9 = v2 & 1;
    goto LABEL_33;
  }
  v10 = 3017;
LABEL_33:
  *(_DWORD *)(a1 + 8) = v10;
  if ( v10 == 3017 && !v9 )
  {
    LODWORD(v19) = v5;
    LODWORD(v18) = v2;
    LODWORD(v17) = v4;
    LODWORD(v16) = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_dDDD(
      *(_QWORD *)(a1 + 1432),
      v4,
      4u,
      0x55u,
      (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
      v16,
      v17,
      v18,
      v19);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 2536LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 272);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      Template_qhhhqhhh(
        v14,
        v13,
        (const GUID *)(*(_QWORD *)a1 + 2356LL),
        *(unsigned __int16 *)(a1 + 200),
        v4,
        v2,
        v5,
        201,
        v6,
        v7,
        v8);
  }
  return v10;
}
