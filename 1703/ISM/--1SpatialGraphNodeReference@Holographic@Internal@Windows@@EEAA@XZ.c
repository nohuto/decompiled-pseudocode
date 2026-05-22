/*
 * XREFs of ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180089844
 * Callers:
 *     ??_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x180089A50 (--_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004FA90 (--1-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VFtmBase@WRL@Microsoft@@.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     ??$Start@AEBU_GUID@@AEAUSPATIAL_NODE_ID@@@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@SA?AV01@AEBU_GUID@@AEAUSPATIAL_NODE_ID@@@Z @ 0x18008C6E8 (--$Start@AEBU_GUID@@AEAUSPATIAL_NODE_ID@@@DestroySpatialGraphNodeReference@HolographicDriverClie.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092248 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180092B34 (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180092DF0 (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::~SpatialGraphNodeReference(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this)
{
  __int64 v1; // rdx
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *v3; // rcx
  int v4; // eax
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v6; // rbx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // [rsp+28h] [rbp-160h]
  _QWORD v11[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::Start<_GUID const &,SPATIAL_NODE_ID &>(
    (HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *)v11,
    (struct _GUID *)(v1 + 12),
    (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 80));
  v3 = (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 120) )
    {
      *((_BYTE *)this + 120) = 0;
      v4 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
             v3,
             (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 80));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FD,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v4);
    }
    v5 = (volatile signed __int32 *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    v10 = v5;
    if ( v5 )
    {
      if ( !_InterlockedDecrement(v5 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
  v11[0] = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v11);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 17);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 14);
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = *((_QWORD *)this + 13);
  if ( v8 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
}
