/*
 * XREFs of ?Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z @ 0x1800904E4
 * Callers:
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     _lambda_f8380620b3870a98be7ea388687506c5_::operator() @ 0x18008AD1C (_lambda_f8380620b3870a98be7ea388687506c5_--operator().c)
 *     ?_Destroy@?$_Ref_count_obj@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x18008CE60 (-_Destroy@-$_Ref_count_obj@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$Telemetry_GetPoseAtTime_CountsByPredictionType@$02@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY02$$CBW4TracePredictionType@@AEAY02$$CBI@Z @ 0x18008FFB0 (--$Telemetry_GetPoseAtTime_CountsByPredictionType@$02@HolographicDriverClientTrace@@SAXAEBU_GUID.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByExecutionTime@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY04$$CBMAEAY05$$CBI@Z @ 0x1800900FC (--$Telemetry_GetPoseAtTime_CountsByExecutionTime@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByLatencyMsec@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY04$$CBMAEAY05$$CBI@Z @ 0x18009024C (--$Telemetry_GetPoseAtTime_CountsByLatencyMsec@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@A.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByTrackingValidityFlags@$03@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@AEAY03$$CBI33@Z @ 0x18009039C (--$Telemetry_GetPoseAtTime_CountsByTrackingValidityFlags@$03@HolographicDriverClientTrace@@SAXAE.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::Report(
        Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *this,
        signed __int64 a2,
        char a3)
{
  signed __int64 v4; // rax
  char *v5; // r11
  signed __int64 v6; // rsi
  volatile __int32 *v7; // r12
  signed __int64 v8; // rdi
  unsigned __int64 v9; // r15
  int v10; // r13d
  int v11; // r9d
  unsigned __int64 i; // r8
  __int32 v13; // ecx
  int v14; // r8d
  unsigned __int64 v15; // rdx
  __int32 v16; // ecx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  __int32 v19; // ecx
  int v20; // r9d
  volatile __int32 *v21; // rdx
  unsigned __int64 v22; // r8
  __int32 v23; // ecx
  __int32 v24; // eax
  int v25[10]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D8h]
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  __int128 v41; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  __int128 v44; // [rsp+110h] [rbp+10h] BYREF
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  int v46; // [rsp+130h] [rbp+30h]

  v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, 0LL, 0LL);
  if ( v4 > 0
    && (a3 || a2 >= v4 + Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::ReportIntervalQpc)
    && v4 == _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, a2, v4) )
  {
    v5 = (char *)this + 32;
    v6 = this - (Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *)((char *)&v30 + 4) + 96;
    v7 = (volatile __int32 *)((char *)this + 120);
    v8 = this - (Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *)((char *)&v27 + 4) + 72;
    v9 = 0LL;
    do
    {
      v10 = *(_DWORD *)((char *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::PurposeBuckets + v9);
      v11 = 0;
      for ( i = 0LL; i < 3; ++i )
      {
        v13 = _InterlockedExchange((int *)((char *)&v25[i + 14] + v8), 0);
        *((_DWORD *)&v33 + i + 1) = v13;
        v11 += v13;
      }
      LODWORD(v33) = v11;
      v14 = 0;
      v15 = 0LL;
      v37 = v33;
      do
      {
        v16 = _InterlockedExchange((volatile __int32 *)((char *)&v27 + 4 * v15 + v8 + 4), 0);
        *((_DWORD *)&v27 + v15 + 1) = v16;
        v14 += v16;
        ++v15;
      }
      while ( v15 < 6 );
      LODWORD(v27) = v14;
      v17 = 0;
      v18 = 0LL;
      v40 = v29;
      v39 = v28;
      v38 = v27;
      do
      {
        v19 = _InterlockedExchange((volatile __int32 *)((char *)&v30 + 4 * v18 + v6 + 4), 0);
        *((_DWORD *)&v30 + v18 + 1) = v19;
        v17 += v19;
        ++v18;
      }
      while ( v18 < 6 );
      v20 = 0;
      v21 = v7;
      LODWORD(v30) = v17;
      v22 = 0LL;
      v43 = v32;
      v42 = v31;
      v41 = v30;
      do
      {
        v23 = _InterlockedExchange(v21, 0);
        v24 = _InterlockedExchange(v21 + 1, 0);
        *((_DWORD *)&v35 + v22 + 1) = v24;
        v21 += 2;
        *((_DWORD *)&v34 + v22 + 1) = v23;
        v20 += v23 + v24;
        ++v22;
      }
      while ( v22 < 4 );
      v46 = v36;
      LODWORD(v34) = v20;
      v44 = v34;
      v45 = v35;
      HolographicDriverClientTrace::Telemetry_GetPoseAtTime_CountsByPredictionType<3>(
        (__int64)this,
        (__int64)v5,
        (__int64)this + 16,
        v10,
        v37,
        v26,
        (__int64)&v37 + 4);
      HolographicDriverClientTrace::Telemetry_GetPoseAtTime_CountsByExecutionTime<5>(
        (__int64)this,
        (__int64)this + 32,
        (__int64)this + 16,
        v10,
        v38,
        v26,
        (__int64)&v38 + 4);
      HolographicDriverClientTrace::Telemetry_GetPoseAtTime_CountsByLatencyMsec<5>(
        (__int64)this,
        (__int64)this + 32,
        (__int64)this + 16,
        v10,
        v41,
        v26,
        (__int64)&v41 + 4);
      HolographicDriverClientTrace::Telemetry_GetPoseAtTime_CountsByTrackingValidityFlags<4>(
        (__int64)this,
        (__int64)this + 32,
        (__int64)this + 16,
        v10,
        v25[8],
        (__int64)&v44 + 4,
        (__int64)&v45 + 4);
      v9 += 4LL;
      v5 = (char *)this + 32;
      v8 += 92LL;
      v6 += 92LL;
      v7 += 23;
    }
    while ( v9 < 8 );
  }
}
