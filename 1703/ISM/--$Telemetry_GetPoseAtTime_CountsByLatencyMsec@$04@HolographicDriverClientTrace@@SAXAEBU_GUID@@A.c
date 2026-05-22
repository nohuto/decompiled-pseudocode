/*
 * XREFs of ??$Telemetry_GetPoseAtTime_CountsByLatencyMsec@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY04$$CBMAEAY05$$CBI@Z @ 0x18009024C
 * Callers:
 *     ?Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z @ 0x1800904E4 (-Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::Telemetry_GetPoseAtTime_CountsByLatencyMsec<5>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        __int64 a7)
{
  struct HolographicDriverClientTrace *v11; // rax
  _DWORD *v12; // r10
  const struct _TlgProvider_t *v13; // rcx
  int v15; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-71h] BYREF
  __int64 v17; // [rsp+68h] [rbp-51h]
  int v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+74h] [rbp-45h]
  __int64 v20; // [rsp+78h] [rbp-41h]
  int v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+84h] [rbp-35h]
  __int64 v23; // [rsp+88h] [rbp-31h]
  int v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+94h] [rbp-25h]
  int *v26; // [rsp+98h] [rbp-21h]
  int v27; // [rsp+A0h] [rbp-19h]
  int v28; // [rsp+A4h] [rbp-15h]
  char *v29; // [rsp+A8h] [rbp-11h]
  int v30; // [rsp+B0h] [rbp-9h]
  int v31; // [rsp+B4h] [rbp-5h]
  float near **v32; // [rsp+B8h] [rbp-1h]
  int v33; // [rsp+C0h] [rbp+7h]
  int v34; // [rsp+C4h] [rbp+Bh]
  __int64 v35; // [rsp+C8h] [rbp+Fh]
  int v36; // [rsp+D0h] [rbp+17h]
  int v37; // [rsp+D4h] [rbp+1Bh]

  v11 = HolographicDriverClientTrace::Instance();
  v12 = (_DWORD *)*((_QWORD *)v11 + 1);
  if ( v12 )
  {
    if ( *v12 )
    {
      v11 = HolographicDriverClientTrace::Instance();
      v13 = (const struct _TlgProvider_t *)*((_QWORD *)v11 + 1);
      if ( *(_DWORD *)v13 > 5u && (*((_QWORD *)v13 + 2) & 0x400000000000LL) != 0 )
      {
        v11 = (struct HolographicDriverClientTrace *)(*((_QWORD *)v13 + 3) & 0x400000000000LL);
        if ( v11 == *((struct HolographicDriverClientTrace **)v13 + 3) )
        {
          v19 = 0;
          v22 = 0;
          v25 = 0;
          v28 = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v18 = 16;
          v21 = 16;
          v24 = 16;
          v26 = &v15;
          v29 = &a5;
          v32 = &Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::LatencyMsecBuckets;
          v35 = a7;
          v17 = a1;
          v20 = a2;
          v23 = a3;
          v15 = a4;
          v27 = 4;
          v30 = 4;
          v33 = 20;
          v36 = 24;
          LODWORD(v11) = TlgWrite(v13, &unk_1800BA351, 0LL, 0LL, 9u, &pData);
        }
      }
    }
  }
  return (int)v11;
}
