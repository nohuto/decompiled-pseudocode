/*
 * XREFs of ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180089370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x18003CA8C (memcpy_s_0.c)
 *     ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18008F988 (-GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodePoses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int a3,
        const struct SPATIAL_NODE_ID *a4,
        struct SPATIAL_GRAPH_STATIC_NODE_POSE *Destination)
{
  __int64 v5; // rbp
  Windows::Internal::Holographic::SpatialGraphDriverClient *v6; // r15
  DWORD v7; // esi
  unsigned int v10; // esi
  char *v11; // rax
  char *v12; // rdi
  const struct SPATIAL_NODE_ID *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  void *v16; // r12
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rbx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // esi
  unsigned int v25; // r14d
  float *v26; // r15
  rsize_t v27; // r9
  __int64 v28; // rsi
  _DWORD *v29; // rcx
  HolographicDriverClientContinuousTrace *v30; // rcx
  const struct SPATIAL_GRAPH_STATIC_NODE_POSE *v32; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD v36; // [rsp+90h] [rbp+18h] BYREF

  v5 = a3;
  v6 = this;
  v7 = 16 * a3 + 20;
  if ( v7 < 0x24uLL )
  {
    v10 = -2147024809;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v10);
    return v10;
  }
  v11 = (char *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    v10 = -2147024882;
    goto LABEL_5;
  }
  memset(v11, 0, v7);
  *((_DWORD *)v12 + 4) = v5;
  *(_OWORD *)v12 = *(_OWORD *)a2;
  if ( (_DWORD)v5 )
  {
    v13 = a4;
    v14 = v5;
    do
    {
      v15 = *(_OWORD *)v13;
      v13 = (const struct SPATIAL_NODE_ID *)((char *)v13 + 16);
      *(_OWORD *)((char *)v13 + v12 - (char *)a4 + 4) = v15;
      --v14;
    }
    while ( v14 );
  }
  v16 = 0LL;
  v17 = (unsigned int)(68 * v5 + 4);
  if ( v17 < 0x48 )
  {
    v10 = -2147024809;
LABEL_13:
    v19 = v10;
    v20 = 299LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v19);
    goto LABEL_33;
  }
  v18 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v18 )
  {
    v10 = -2147024882;
    goto LABEL_13;
  }
  v21 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)v6 + 7);
  v36 = 0;
  v16 = v18;
  v22 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          v21,
          0x5B8424u,
          v12,
          v7,
          v18,
          68 * (int)v5 + 4,
          &v36);
  v10 = v22;
  if ( v22 < 0 )
  {
    v19 = (unsigned int)v22;
    v20 = 309LL;
    goto LABEL_16;
  }
  if ( v36 == 68 * (_DWORD)v5 + 4 )
  {
    if ( *v18 == (_DWORD)v5 )
    {
      v24 = 0;
      if ( *v18 )
      {
        while ( 2 )
        {
          v25 = 0;
          v26 = (float *)&v18[17 * v24 + 5];
          do
          {
            if ( (_fpclass(*v26) & 0x207) != 0 )
            {
              v10 = -2147024883;
              v23 = 319LL;
              goto LABEL_38;
            }
            ++v25;
            ++v26;
          }
          while ( v25 < 0xC );
          if ( (unsigned int)++v24 < *v18 )
            continue;
          break;
        }
        v6 = this;
      }
      v27 = 68LL * (unsigned int)*v18;
      if ( v27 )
        memcpy_s_0(Destination, 68 * v5, v18 + 1, v27);
      v28 = *((_QWORD *)v6 + 7);
      v29 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v29 && *v29 )
      {
        HolographicDriverClientContinuousTrace::Instance();
        HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
          v30,
          (char *)v6 - 8,
          (const struct _GUID *)(v28 + 12),
          a2,
          v5,
          a4,
          v32);
      }
      v10 = 0;
      goto LABEL_33;
    }
    v10 = -2147418113;
    v23 = 315LL;
  }
  else
  {
    v10 = -2147418113;
    v23 = 311LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v10);
LABEL_33:
  if ( v16 )
    operator delete(v16);
  operator delete(v12);
  return v10;
}
