/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800074C0
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007738 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  signed __int32 v8; // edx
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11)(union wil_details_FeaturePropertyCache *, __int128 **); // r14
  signed __int32 v12; // r15d
  signed __int32 v13; // edx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-81h]
  volatile signed __int32 v17; // [rsp+20h] [rbp-81h]
  volatile signed __int32 v18; // [rsp+24h] [rbp-7Dh]
  signed __int32 v19; // [rsp+24h] [rbp-7Dh]
  volatile signed __int32 v20; // [rsp+28h] [rbp-79h] BYREF
  __int128 v21; // [rsp+30h] [rbp-71h] BYREF
  int v22; // [rsp+40h] [rbp-61h]
  __int128 *v23; // [rsp+48h] [rbp-59h]
  int v24; // [rsp+50h] [rbp-51h]
  int v25; // [rsp+54h] [rbp-4Dh]
  __int128 *v26; // [rsp+58h] [rbp-49h]
  int v27; // [rsp+60h] [rbp-41h]
  int v28; // [rsp+64h] [rbp-3Dh]
  __int128 *v29; // [rsp+68h] [rbp-39h] BYREF
  int v30; // [rsp+70h] [rbp-31h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  _QWORD v32[2]; // [rsp+80h] [rbp-21h] BYREF
  int v33; // [rsp+90h] [rbp-11h]
  __int128 v34; // [rsp+98h] [rbp-9h] BYREF
  int v35; // [rsp+A8h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v21 = 0uLL;
  v22 = 0;
  if ( a3 < 0 )
    goto LABEL_27;
  if ( a3 <= 1 )
    goto LABEL_21;
  if ( a3 <= 3 )
    goto LABEL_6;
  if ( a3 <= 5 )
  {
LABEL_21:
    v30 = a3;
    v31 = 1LL;
    v29 = &v21;
    v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    if ( (a3 & 0xFFFFFFFB) == 0 )
      v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v20 = *a1;
      v20 = *a1;
      v12 = v20;
      if ( !(unsigned int)v11((union wil_details_FeaturePropertyCache *)&v20, &v29) )
        goto LABEL_19;
      if ( v12 == _InterlockedCompareExchange(a1, v20, v12) )
      {
LABEL_18:
        v10 = 1;
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
        v5 = 1;
        v22 = 1;
        goto LABEL_35;
      }
      v20 = 64;
      v26 = &v21;
      v27 = 64;
      v28 = 1;
      do
      {
        v17 = *a1;
        v13 = *a1;
        v14 = v27 & *a1;
        LODWORD(v21) = 0;
      }
      while ( v14 != v27 && v13 != _InterlockedCompareExchange(a1, v27 | v17, v13) );
      v5 = v22;
    }
    *((_QWORD *)&v21 + 1) = (unsigned int)a3;
    DWORD1(v21) = 1;
    goto LABEL_35;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v16 = 0x10000;
      break;
    case 3:
      v16 = 0x40000;
      break;
    case 6:
      v16 = 0x20000;
      break;
    default:
      v16 = 0x80000;
      break;
  }
  v23 = &v21;
  v24 = v16;
  v25 = 0;
  while ( 1 )
  {
    v18 = *a1;
    v8 = *a1;
    v9 = v24 & *a1;
    LODWORD(v21) = 0;
    if ( v9 == v24 )
      break;
    v19 = v24 | v18;
    if ( (v19 & 8) == 0 )
    {
      LODWORD(v21) = 1;
      v19 |= 8u;
    }
    if ( v8 == _InterlockedCompareExchange(a1, v19, v8) )
      goto LABEL_18;
  }
LABEL_19:
  v10 = 0;
LABEL_20:
  v5 = v10 ^ 1;
  v22 = v10 ^ 1;
LABEL_35:
  v35 = v5;
  v34 = v21;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      a2,
      (union wil_details_FeaturePropertyCache *)a1,
      (struct wil_details_RecordUsageResult *)&v34);
    if ( (*a1 & 0x30) == 0x20 )
    {
      v32[0] = 0LL;
      v33 = 0;
      v32[1] = (unsigned int)a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v32);
    }
  }
  LOBYTE(v4) = v35 == 0;
  return v4;
}
