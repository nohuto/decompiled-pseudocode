/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@PEAUISpatialGraphNodeReferenceFactory@234@@Z @ 0x180089A84
 * Callers:
 *     ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180088FD0 (-CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDyna.c)
 *     ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460 (-CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ??$Start@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@SA?AV01@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008C7B4 (--$Start@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@@CreateSpatialGraphNodeReference@HolographicDriverClien.c)
 *     ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x18008CEAC (-_Reset0@-$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXP.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092248 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180092B34 (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180092DF0 (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(
        __int64 a1,
        Windows::Internal::Holographic::HolographicDriverHandleWrapper **a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v8; // r8
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  void ***v13; // rbx
  void **v14; // rax
  int v15; // eax
  void ***v16; // rcx
  unsigned int v17; // ebx
  int started; // eax
  DWORD pdwType; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 pvData; // [rsp+50h] [rbp-B8h] BYREF
  void ***v23; // [rsp+58h] [rbp-B0h]
  __int128 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h]
  _QWORD v26[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v25 = -2LL;
  HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::Start<_GUID const &,SPATIAL_NODE_ID const &>(
    (HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *)v26,
    (struct _GUID *)((char *)*a2 + 12),
    (struct SPATIAL_NODE_ID *)a3);
  v24 = 0LL;
  v8 = a2[1];
  v9 = *a2;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(&v24, v9);
  v23 = (void ***)*((_QWORD *)&v24 + 1);
  *((_QWORD *)&v24 + 1) = *(_QWORD *)(a1 + 72);
  v10 = *((_QWORD *)&v24 + 1);
  *(_QWORD *)(a1 + 72) = v23;
  *(_QWORD *)(a1 + 64) = v24;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v24 + 1);
      (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
    }
  }
  *(_OWORD *)(a1 + 80) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a3 + 16);
  if ( *(_QWORD *)(a1 + 104) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v12 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = a4;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( *((_BYTE *)*a2 + 96) )
  {
    v13 = (void ***)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v13;
    if ( v13 )
    {
      v14 = &VRShimPosePredictionModel::`vftable';
LABEL_25:
      *v13 = v14;
      goto LABEL_27;
    }
  }
  else
  {
    pdwType = 0;
    LODWORD(pvData) = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Spectrum",
            L"SpatialGraphComputeMissingVelocities",
            0x10u,
            &pdwType,
            &pvData,
            &pcbData)
      && pdwType == 4
      && pcbData == 4 )
    {
      v15 = pvData;
    }
    else
    {
      v15 = 0;
    }
    if ( v15 )
    {
      v13 = (void ***)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v23 = v13;
      if ( v13 )
      {
        v14 = &ComputeVelocityFallbackPosePredictionModel::`vftable';
        goto LABEL_25;
      }
    }
    else
    {
      v13 = (void ***)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v23 = v13;
      if ( v13 )
      {
        v14 = &ConstantVelocityPosePredictionModel::`vftable';
        goto LABEL_25;
      }
    }
  }
  v13 = 0LL;
LABEL_27:
  v16 = *(void ****)(a1 + 112);
  if ( v13 != v16 )
  {
    if ( v16 )
      ((void (__fastcall *)(void ***, __int64))**v16)(v16, 1LL);
    *(_QWORD *)(a1 + 112) = v13;
  }
  if ( *(_QWORD *)(a1 + 112) )
  {
    started = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
                *a2,
                (struct SPATIAL_NODE_ID *)a3);
    v17 = started;
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 120) = 1;
      wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
      v17 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x220,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)started);
    }
  }
  else
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8007000ELL);
  }
  v26[0] = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v26);
  return v17;
}
