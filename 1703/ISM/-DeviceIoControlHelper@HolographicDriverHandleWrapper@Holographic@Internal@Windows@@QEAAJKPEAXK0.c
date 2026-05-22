/*
 * XREFs of ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0
 * Callers:
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x180088B8C (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180088CD0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x180088E60 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800890B0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180089240 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180089370 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800895E0 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18008A0F0 (-OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePurpose@234@PEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18008A960 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePur.c)
 *     ??$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAE@Z @ 0x18008C5F4 (--$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007518 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x180093A9C (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
        RTL_SRWLOCK *this,
        unsigned int a2,
        void *lpInBuffer,
        DWORD nInBufferSize,
        void *lpOutBuffer,
        DWORD nOutBufferSize,
        LPDWORD lpBytesReturned)
{
  unsigned int Ptr; // ebx
  signed int LastError; // edi
  _DWORD *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF

  wil::srwlock::lock_shared(this + 6, &SRWLock);
  Ptr = (unsigned int)this[7].Ptr;
  if ( (Ptr & 0x80000000) == 0 )
  {
    if ( DeviceIoControl(this[8].Ptr, a2, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, 0LL) )
    {
      Ptr = 0;
    }
    else
    {
      LastError = GetLastError();
      v13 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v13 && *v13 )
      {
        HolographicDriverClientContinuousTrace::Instance();
        HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
          (HolographicDriverClientContinuousTrace *)((char *)&this[1].Ptr + 4),
          LastError,
          a2,
          this,
          (const struct _GUID *)((char *)&this[1].Ptr + 4));
      }
      Ptr = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        Ptr = LastError;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
      (const char *)Ptr);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return Ptr;
}
