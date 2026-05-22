/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003D6E0
 * Callers:
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180041B70 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180041CE0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  signed __int32 v7; // edx
  int v8; // eax
  int v9; // eax
  __int64 (__fastcall *v10)(union wil_details_FeaturePropertyCache *, __int128 **); // r14
  signed __int32 v11; // r15d
  signed __int32 v12; // edx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-71h]
  volatile signed __int32 v16; // [rsp+20h] [rbp-71h]
  volatile signed __int32 v17; // [rsp+24h] [rbp-6Dh]
  signed __int32 v18; // [rsp+24h] [rbp-6Dh]
  volatile signed __int32 v19; // [rsp+28h] [rbp-69h] BYREF
  __int128 v20; // [rsp+30h] [rbp-61h] BYREF
  int v21; // [rsp+40h] [rbp-51h]
  __int128 *v22; // [rsp+48h] [rbp-49h]
  int v23; // [rsp+50h] [rbp-41h]
  int v24; // [rsp+54h] [rbp-3Dh]
  __int128 *v25; // [rsp+58h] [rbp-39h]
  int v26; // [rsp+60h] [rbp-31h]
  int v27; // [rsp+64h] [rbp-2Dh]
  __int128 *v28; // [rsp+68h] [rbp-29h] BYREF
  int v29; // [rsp+70h] [rbp-21h]
  __int64 v30; // [rsp+78h] [rbp-19h]
  _QWORD v31[2]; // [rsp+80h] [rbp-11h] BYREF
  int v32; // [rsp+90h] [rbp-1h]
  __int128 v33; // [rsp+98h] [rbp+7h] BYREF
  int v34; // [rsp+A8h] [rbp+17h]

  v3 = 0;
  v4 = 0;
  v20 = 0uLL;
  v21 = 0;
  if ( a3 < 0 )
    goto LABEL_27;
  if ( a3 <= 1 )
    goto LABEL_21;
  if ( a3 <= 3 )
    goto LABEL_6;
  if ( a3 <= 5 )
  {
LABEL_21:
    v29 = a3;
    v30 = 1LL;
    v28 = &v20;
    v10 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    if ( (a3 & 0xFFFFFFFB) == 0 )
      v10 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v19 = *a1;
      v19 = *a1;
      v11 = v19;
      if ( !(unsigned int)v10((union wil_details_FeaturePropertyCache *)&v19, &v28) )
        goto LABEL_19;
      if ( v11 == _InterlockedCompareExchange(a1, v19, v11) )
      {
LABEL_18:
        v9 = 1;
        goto LABEL_20;
      }
    }
  }
  if ( a3 > 7 )
  {
LABEL_27:
    if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a1 >> 7) & 0x3F) )
    {
      if ( (*(_BYTE *)a1 & 0x40) != 0 )
      {
        v3 = 1;
        v21 = 1;
        goto LABEL_35;
      }
      v19 = 64;
      v25 = &v20;
      v26 = 64;
      v27 = 1;
      do
      {
        v16 = *a1;
        v12 = *a1;
        v13 = v26 & *a1;
        LODWORD(v20) = 0;
      }
      while ( v13 != v26 && v12 != _InterlockedCompareExchange(a1, v26 | v16, v12) );
      v3 = v21;
    }
    *((_QWORD *)&v20 + 1) = (unsigned int)a3;
    DWORD1(v20) = 1;
    goto LABEL_35;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v15 = 0x10000;
      break;
    case 3:
      v15 = 0x40000;
      break;
    case 6:
      v15 = 0x20000;
      break;
    default:
      v15 = 0x80000;
      break;
  }
  v22 = &v20;
  v23 = v15;
  v24 = 0;
  while ( 1 )
  {
    v17 = *a1;
    v7 = *a1;
    v8 = v23 & *a1;
    LODWORD(v20) = 0;
    if ( v8 == v23 )
      break;
    v18 = v23 | v17;
    if ( (v18 & 8) == 0 )
    {
      LODWORD(v20) = 1;
      v18 |= 8u;
    }
    if ( v7 == _InterlockedCompareExchange(a1, v18, v7) )
      goto LABEL_18;
  }
LABEL_19:
  v9 = 0;
LABEL_20:
  v3 = v9 ^ 1;
  v21 = v9 ^ 1;
LABEL_35:
  v34 = v3;
  v33 = v20;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      0xA019AFu,
      (union wil_details_FeaturePropertyCache *)a1,
      (struct wil_details_RecordUsageResult *)&v33);
    if ( (*a1 & 0x30) == 0x20 )
    {
      v31[0] = 0LL;
      v32 = 0;
      v31[1] = (unsigned int)a3;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10492335LL, 0LL, v31);
    }
  }
  LOBYTE(v4) = v34 == 0;
  return v4;
}
