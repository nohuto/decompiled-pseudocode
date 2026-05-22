/*
 * XREFs of ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x18008FA78
 * Callers:
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180089240 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodeForPose_(
        HolographicDriverClientContinuousTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        const struct DirectX::XMFLOAT4X3 *a5,
        const struct SPATIAL_NODE_ID *a6)
{
  __int64 v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-49h] BYREF
  const void **v10; // [rsp+58h] [rbp-29h]
  __int64 v11; // [rsp+60h] [rbp-21h]
  const struct _GUID *v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  const struct SPATIAL_NODE_ID *v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  const struct DirectX::XMFLOAT4X3 *v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  const struct SPATIAL_NODE_ID *v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+A0h] [rbp+1Fh]
  const void *v20; // [rsp+E0h] [rbp+5Fh] BYREF

  v20 = a2;
  v8 = *((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
  {
    v11 = 8LL;
    v10 = &v20;
    v16 = a5;
    v18 = a6;
    v12 = a3;
    v13 = 16LL;
    v14 = a4;
    v15 = 16LL;
    v17 = 48LL;
    v19 = 16LL;
    TlgWrite((TraceLoggingHProvider)v8, &unk_1800BB49F, 0LL, 0LL, 7u, &pData);
  }
}
