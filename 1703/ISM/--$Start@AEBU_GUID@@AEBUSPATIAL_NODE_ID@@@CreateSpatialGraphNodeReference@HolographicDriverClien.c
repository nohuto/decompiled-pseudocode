/*
 * XREFs of ??$Start@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@SA?AV01@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008C7B4
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@PEAUISpatialGraphNodeReferenceFactory@234@@Z @ 0x180089A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008EB50 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     memset @ 0x18009D814 (memset.c)
 */

HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *__fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::Start<_GUID const &,SPATIAL_NODE_ID const &>(
        HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *this,
        struct _GUID *a2,
        struct SPATIAL_NODE_ID *a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "CreateSpatialGraphNodeReference";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity(this, a2, a3);
  return this;
}
