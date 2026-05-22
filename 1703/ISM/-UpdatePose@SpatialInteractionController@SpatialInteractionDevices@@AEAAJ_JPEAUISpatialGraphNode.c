/*
 * XREFs of ?UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180099DD0
 * Callers:
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@PEA_NPEAW4MPCAugmentedInputGestureType@@@Z @ 0x180099A98 (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x180098BEC (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x180098EE8 (-UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x18009A1DC (-ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::UpdatePose(
        SpatialInteractionDevices::SpatialInteractionController *this,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a3,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a4)
{
  __int64 v8; // rcx
  int v9; // esi
  _DWORD *v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  bool v12; // zf
  __m128 v13; // xmm5
  int v14; // edi
  _DWORD *v15; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v16; // rcx
  _BYTE v18[16]; // [rsp+30h] [rbp-178h] BYREF
  int v19; // [rsp+40h] [rbp-168h]
  __m128 v20; // [rsp+54h] [rbp-154h]
  __m128 v21; // [rsp+64h] [rbp-144h]
  __m128 v22; // [rsp+74h] [rbp-134h]
  _BYTE v23[160]; // [rsp+D0h] [rbp-D8h] BYREF

  memset((char *)this + 388, 0, 0x20uLL);
  memset((char *)this + 452, 0, 0x20uLL);
  v8 = *((_QWORD *)this + 67);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v8 + 24LL))(
           v8,
           a2,
           1LL,
           0LL,
           v18);
    if ( v9 >= 0 )
    {
      v12 = (v19 & 2) == 0;
      *((_BYTE *)this + 526) = (v19 & 2) != 0;
      if ( !v12 )
      {
        v13 = _mm_shuffle_ps(v21, v20, 244);
        *(__m128 *)((char *)this + 484) = DirectX::XMQuaternionRotationMatrix(
                                            COERCE_DOUBLE(DirectX::g_XMMask3 & v20.m128_u64[0]),
                                            COERCE_DOUBLE(_mm_shuffle_ps(v13, v13, 82).m128_u64[0] & DirectX::g_XMMask3),
                                            COERCE_DOUBLE(DirectX::g_XMMask3 & _mm_shuffle_ps(v21, v22, 14).m128_u64[0]));
      }
      if ( a3 )
      {
        v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, __int64))(*(_QWORD *)a3 + 24LL))(
                a3,
                a2,
                1LL);
        if ( v14 >= 0 )
        {
          SpatialInteractionDevices::SpatialInteractionController::ComputeControllerPoses(
            this,
            (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v23,
            (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v18,
            a4);
        }
        else
        {
          v15 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
          if ( v15 && *v15 )
          {
            SpatialInteractionDevices::SpatialInteractionTrace::Instance();
            SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
              v16,
              v14,
              *((_DWORD *)this + 66),
              L"No HMD Pose");
          }
        }
      }
    }
    else
    {
      v10 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v10 && *v10 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
          v11,
          v9,
          *((_DWORD *)this + 66),
          L"No controller Pose");
      }
      *((_BYTE *)this + 526) = 0;
    }
  }
  return 0LL;
}
