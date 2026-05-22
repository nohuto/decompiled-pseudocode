/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004FA90
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@VFtmBase@23@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@UEAA@XZ @ 0x18004F524 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphNodeReferenceFactory@Hol.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18004F52C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphNodeReference@Holographic@Internal@Windows@@VFtmBase@23@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18004FF30 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphNodeReference@Holograph.c)
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800642E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180089844 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x18008B3AC (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ??_ESpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x18008CDD0 (--_ESpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSimpleTimeProvider@?A0x9e3f2d27@@UEAAPEAXI@Z @ 0x18009B7E0 (--_GSimpleTimeProvider@-A0x9e3f2d27@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(
        __int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
