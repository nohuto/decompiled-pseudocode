/*
 * XREFs of ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18008F988
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180089370 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
        HolographicDriverClientContinuousTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        unsigned __int16 a5,
        const struct SPATIAL_NODE_ID *a6)
{
  __int64 v8; // rcx
  unsigned __int16 v9; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  const void **v11; // [rsp+68h] [rbp-31h]
  __int64 v12; // [rsp+70h] [rbp-29h]
  const struct _GUID *v13; // [rsp+78h] [rbp-21h]
  __int64 v14; // [rsp+80h] [rbp-19h]
  const struct SPATIAL_NODE_ID *v15; // [rsp+88h] [rbp-11h]
  __int64 v16; // [rsp+90h] [rbp-9h]
  __int16 *v17; // [rsp+98h] [rbp-1h]
  __int64 v18; // [rsp+A0h] [rbp+7h]
  const struct SPATIAL_NODE_ID *v19; // [rsp+A8h] [rbp+Fh]
  int v20; // [rsp+B0h] [rbp+17h]
  int v21; // [rsp+B4h] [rbp+1Bh]
  const void *v22; // [rsp+F0h] [rbp+57h] BYREF

  v22 = a2;
  v8 = *((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 2) != 0 && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
  {
    v11 = &v22;
    v12 = 8LL;
    v17 = (__int16 *)&v9;
    v19 = a6;
    v20 = 16 * a5;
    v13 = a3;
    v14 = 16LL;
    v15 = a4;
    v16 = 16LL;
    v9 = a5;
    v18 = 2LL;
    v21 = 0;
    TlgWrite((TraceLoggingHProvider)v8, &unk_1800BB2BF, 0LL, 0LL, 7u, &pData);
  }
}
