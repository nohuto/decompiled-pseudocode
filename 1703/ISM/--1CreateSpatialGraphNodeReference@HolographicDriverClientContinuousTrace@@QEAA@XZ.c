/*
 * XREFs of ??1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x180092220
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800A37BF (_Windows--Internal--Holographic--SpatialGraphNodeReference--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180092DF0 (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::~CreateSpatialGraphNodeReference(
        HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *this)
{
  *(_QWORD *)this = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
