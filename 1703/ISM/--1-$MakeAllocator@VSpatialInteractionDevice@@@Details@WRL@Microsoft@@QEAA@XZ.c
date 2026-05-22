/*
 * XREFs of ??1?$MakeAllocator@VSpatialInteractionDevice@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001983C
 * Callers:
 *     _DWMInputRouter::GetDisplayForDevice_::_1_::dtor$7 @ 0x18009FAFF (_DWMInputRouter--GetDisplayForDevice_--_1_--dtor$7.c)
 *     _MPCGamepadProcessor::Create_::_1_::dtor$1 @ 0x1800A0D09 (_MPCGamepadProcessor--Create_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800A0D74 (_Microsoft--WRL--Details--Make_MPCGestureHandler_IInputProcessorHost_____ptr64_-____ea_1800A0D74.c)
 *     _MPCMouseProcessor::Create_::_1_::dtor$1 @ 0x1800A12D0 (_MPCMouseProcessor--Create_--_1_--dtor$1.c)
 *     _MPCSixDofProcessor::Create_::_1_::dtor$1 @ 0x1800A13FC (_MPCSixDofProcessor--Create_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCProcessor_IInputProcessor_InputProcessorCreateParams_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800A14AF (_Microsoft--WRL--Details--MakeAndInitialize_MPCProcessor_IInputProcessor_InputProce_ea_1800A14AF.c)
 *     _MPCClickerProcessor::Create_::_1_::dtor$1 @ 0x1800A156F (_MPCClickerProcessor--Create_--_1_--dtor$1.c)
 *     _MPCRawInputProvider::Create_::_1_::dtor$1 @ 0x1800A1BC3 (_MPCRawInputProvider--Create_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_const_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x1800A1CEE (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider_____ptr64_const_ea_1800A1CEE.c)
 *     _WGIRawInputProvider::OnUINavigationControllerAdded_::_1_::dtor$3 @ 0x1800A2234 (_WGIRawInputProvider--OnUINavigationControllerAdded_--_1_--dtor$3.c)
 *     _OpenSpatialInteractionDevice_::_1_::dtor$1 @ 0x1800A245D (_OpenSpatialInteractionDevice_--_1_--dtor$1.c)
 *     _InputDeliveryServer::OnAppThreadConnected_::_1_::dtor$3 @ 0x1800A2638 (_InputDeliveryServer--OnAppThreadConnected_--_1_--dtor$3.c)
 *     _InputDeliveryServer::OnAppThreadConnected_::_1_::dtor$9 @ 0x1800A265C (_InputDeliveryServer--OnAppThreadConnected_--_1_--dtor$9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_InputDeliveryServer_IInputDeliveryServer_IInputDeliveryServerHost_____ptr64_&___ptr64_unsigned_short_const_____ptr64_&___ptr64_enum_InputDeliveryServer::TestMode_&___ptr64__::_1_::dtor$1 @ 0x1800A2674 (_Microsoft--WRL--Details--MakeAndInitialize_InputDeliveryServer_IInputDeliveryServe_ea_1800A2674.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_InputAcknowledge_InputAcknowledge_unsigned_int_&___ptr64_InputQueue_____ptr64_const__::_1_::dtor$1 @ 0x1800A2991 (_Microsoft--WRL--Details--MakeAndInitialize_InputAcknowledge_InputAcknowledge_unsig_ea_1800A2991.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ViewHeirarchy_IViewHeirarchy_enum_ViewHeirarchy::TestMode__::_1_::dtor$1 @ 0x1800A2B7C (_Microsoft--WRL--Details--MakeAndInitialize_ViewHeirarchy_IViewHeirarchy_enum_ViewH_ea_1800A2B7C.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DisplayChangedHandler_DisplayChangedHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_SpatialInputControllerCollection_____ptr64_const_bool__::_1_::dtor$1 @ 0x1800A330C (_Microsoft--WRL--Details--MakeAndInitialize_DisplayChangedHandler_DisplayChangedHan_ea_1800A330C.c)
 *     _InputServiceProxy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800A3787 (_InputServiceProxy--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference_::_1_::dtor$93 @ 0x1800A38AD (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800A38AD.c)
 *     _CreateSpatialGraphDriverClient_::_1_::dtor$1 @ 0x1800A38F7 (_CreateSpatialGraphDriverClient_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__IInspectable__::_1_::dtor$1 @ 0x1800A39E7 (_Microsoft--WRL--Details--MakeAndInitialize_Microsoft--WRL--Singleton_Windows--Inte_ea_1800A39E7.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<SpatialInteractionDevice>::~MakeAllocator<SpatialInteractionDevice>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
