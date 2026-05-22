/*
 * XREFs of ??1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x180091DE8
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$0 @ 0x1800A37CB (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180091D00 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall HolographicDriverClientTrace::TelemetryOpenHolographicDevice::~TelemetryOpenHolographicDevice(
        HolographicDriverClientTrace::TelemetryOpenHolographicDevice *this)
{
  *(_QWORD *)this = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
