/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002F678
 * Callers:
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$7 @ 0x1800A1BA4 (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$7.c)
 *     _WGIRawInputProvider::_WGIRawInputProvider_::_1_::dtor$5 @ 0x1800A2170 (_WGIRawInputProvider--_WGIRawInputProvider_--_1_--dtor$5.c)
 *     _WGIRawInputProvider::Create_::_1_::dtor$7 @ 0x1800A2200 (_WGIRawInputProvider--Create_--_1_--dtor$7.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$1 @ 0x1800A2FAA (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$5 @ 0x1800A300E (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$5.c)
 *     _std::make_shared_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__::_1_::dtor$5 @ 0x1800A3958 (_std--make_shared_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper__--_1_--dtor$5.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__::_1_::dtor$2 @ 0x1800A3AA1 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1800A3AA1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
