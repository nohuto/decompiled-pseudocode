/*
 * XREFs of ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180089844 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003CB54 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800685A0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008C224 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 *     ?StopTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008F5D4 (-StopTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z.c)
 *     ?Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z @ 0x1800904E4 (-Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1800907AC (-erase@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWra.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this,
        const struct SPATIAL_NODE_ID *a2)
{
  __int64 v4; // rbx
  bool v5; // zf
  _DWORD *v6; // rcx
  HolographicDriverClientTrace *v7; // rcx
  volatile __int64 *v8; // rbx
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  const char *v13; // [rsp+28h] [rbp-21h]
  const char *v14; // [rsp+28h] [rbp-21h]
  DWORD v15; // [rsp+40h] [rbp-9h] BYREF
  __int64 v16; // [rsp+48h] [rbp-1h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+7h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 InBuffer; // [rsp+70h] [rbp+27h] BYREF
  int v21; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 104), lpCriticalSection);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
    (char *)this + 144,
    &v16,
    a2);
  v4 = v16;
  v5 = v16 == *((_QWORD *)this + 18);
  lpCriticalSection[1] = *((LPCRITICAL_SECTION *)this + 18);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x2B3,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v5,
    (unsigned __int16 *)"StopTracking() called without corresponding StartTracking() call",
    v13);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x2B4,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(*(_DWORD *)(v4 + 48) < 1),
    (unsigned __int16 *)"StartTracking ref count is incorrect",
    v14);
  v5 = (*(_DWORD *)(v4 + 48))-- == 1;
  if ( !v5 )
    goto LABEL_9;
  v6 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v6 && *v6 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::StopTracking_(v7, (const struct _GUID *)((char *)this + 12), a2);
  }
  v8 = *(volatile __int64 **)(v4 + 56);
  QueryPerformanceCounter(&PerformanceCount);
  Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::Report(
    (Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *)v8,
    PerformanceCount.QuadPart,
    1);
  _InterlockedExchange64(v8 + 6, 0LL);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::erase(
    (char *)this + 144,
    v19,
    v16);
  v9 = *(_OWORD *)a2;
  v15 = 0;
  v21 = 0;
  InBuffer = v9;
  v10 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          this,
          0x5B4404u,
          &InBuffer,
          0x14u,
          0LL,
          0,
          &v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_10;
  }
  if ( v15 )
  {
    v11 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
LABEL_9:
    v11 = 0;
  }
LABEL_10:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v11;
}
