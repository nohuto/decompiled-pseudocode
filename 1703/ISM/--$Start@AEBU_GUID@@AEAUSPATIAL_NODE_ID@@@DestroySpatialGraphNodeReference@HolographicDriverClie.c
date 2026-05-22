/*
 * XREFs of ??$Start@AEBU_GUID@@AEAUSPATIAL_NODE_ID@@@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@SA?AV01@AEBU_GUID@@AEAUSPATIAL_NODE_ID@@@Z @ 0x18008C6E8
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180089844 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008ECD4 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     memset @ 0x18009D814 (memset.c)
 */

HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *__fastcall HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::Start<_GUID const &,SPATIAL_NODE_ID &>(
        HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *this,
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
  *((_QWORD *)v3 + 6) = "DestroySpatialGraphNodeReference";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StartActivity(this, a2, a3);
  return this;
}
