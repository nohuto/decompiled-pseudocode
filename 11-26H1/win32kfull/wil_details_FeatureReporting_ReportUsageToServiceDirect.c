/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1401494C0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x140149418 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1401496E8 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x140298704 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  volatile signed __int32 *v4; // r10
  unsigned int v6; // edi
  __int16 v8; // bx
  unsigned int v10; // r9d
  unsigned __int32 v11; // eax
  BOOL v12; // edx
  unsigned __int32 v13; // ett
  int v15; // ecx
  signed __int32 i; // edx
  signed __int32 v17; // r9d
  signed __int32 v18; // eax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-18h]

  v4 = *(volatile signed __int32 **)(a1 + 8);
  v6 = 0;
  v19 = a2;
  v21 = 0LL;
  v8 = a2;
  v20 = 0LL;
  switch ( a3 )
  {
    case 0u:
    case 4u:
      wil_details_FeatureReporting_IncrementUsageInCache(v4, a3, a4, &v20);
      break;
    case 1u:
    case 5u:
      wil_details_FeatureReporting_IncrementOpportunityInCache(v4, a3, a4, &v20);
      break;
    case 2u:
    case 3u:
    case 6u:
    case 7u:
      v15 = 0;
      switch ( a3 )
      {
        case 2u:
          v15 = 2;
          break;
        case 3u:
          v15 = 8;
          break;
        case 6u:
          v15 = 4;
          break;
        case 7u:
          v15 = 16;
          break;
      }
      for ( i = *v4; ; i = v18 )
      {
        v17 = i | v15 | 1;
        LODWORD(v21) = (i | v15) == i;
        if ( (i | v15) == i )
          v17 = i | v15;
        v18 = _InterlockedCompareExchange(v4, v17, i);
        if ( i == v18 )
          break;
      }
      LODWORD(v20) = (v17 & 1) != 0 && (i & 1) == 0;
      break;
    default:
      v10 = a3 - 320;
      if ( (int)(a3 - 320) >= 64 )
        goto LABEL_31;
      v11 = *((_DWORD *)v4 + 1);
      do
      {
        v12 = (v11 & 0x10) != 0 && ((v11 >> 5) & 0x3F) == v10;
        LODWORD(v21) = v12;
        v13 = v11;
        v11 = _InterlockedCompareExchange(
                v4 + 1,
                v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(32 * v10)) & 0x7E0 | 0x10,
                v11);
      }
      while ( v13 != v11 );
      if ( !v12 )
      {
LABEL_31:
        *((_QWORD *)&v20 + 1) = __PAIR64__(HIDWORD(v19), a3);
        DWORD1(v20) = a4;
      }
      break;
  }
  v23 = v21;
  v22 = v20;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), a3, a4, *(_QWORD *)(a1 + 8), &v22);
  if ( (v8 & 0x400) != 0 && a3 != 254 )
  {
    LODWORD(v19) = *(_DWORD *)(a1 + 24);
    HIDWORD(v19) = (unsigned __int16)a3;
    if ( (v8 & 0x800) != 0 )
      HIWORD(v19) |= 1u;
    RtlNotifyFeatureUsage(&v19);
  }
  LOBYTE(v6) = (_DWORD)v23 == 0;
  return v6;
}
