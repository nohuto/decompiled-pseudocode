/*
 * XREFs of ??1?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@XZ @ 0x180021550
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     _DWMHardwareCursor::DWMHardwareCursor_::_1_::dtor$7 @ 0x1800A0199 (_DWMHardwareCursor--DWMHardwareCursor_--_1_--dtor$7.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$14 @ 0x1800A25E9 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$14.c)
 *     _InputAttemptedTarget::InputAttemptedTarget_::_1_::dtor$1 @ 0x1800A2969 (_InputAttemptedTarget--InputAttemptedTarget_--_1_--dtor$1.c)
 *     _RIMRawInputProvider::SendCommandToInputDevice_::_1_::dtor$0 @ 0x1800A2E0B (_RIMRawInputProvider--SendCommandToInputDevice_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800A311B (_SpatialInputControllerCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::OnDeviceRemoval_::_1_::dtor$1 @ 0x1800A3133 (_SpatialInputControllerCollection--OnDeviceRemoval_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::OnInputReport_::_1_::dtor$0 @ 0x1800A314B (_SpatialInputControllerCollection--OnInputReport_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::AddDeviceToCache_::_1_::dtor$2 @ 0x1800A317B (_SpatialInputControllerCollection--AddDeviceToCache_--_1_--dtor$2.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$1 @ 0x1800A37D7 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference_::_1_::dtor$1 @ 0x1800A387D (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800A387D.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$4 @ 0x1800A3980 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1800A3980.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::~shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
