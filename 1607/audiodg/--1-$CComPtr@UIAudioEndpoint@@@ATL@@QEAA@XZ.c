/*
 * XREFs of ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400257E0
 * Callers:
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$4 @ 0x14001A7B8 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$4.c)
 *     _CPipeInstance::OnDisconnectedFromPump_::_1_::dtor$0 @ 0x14001AD50 (_CPipeInstance--OnDisconnectedFromPump_--_1_--dtor$0.c)
 *     _CPipeInstance::OnConnectedToPump_::_1_::dtor$0 @ 0x14001AD70 (_CPipeInstance--OnConnectedToPump_--_1_--dtor$0.c)
 *     _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$2 @ 0x14001AEB8 (_CPipeInstance--DeactivateAPOsAndRemoveConnections_--_1_--dtor$2.c)
 *     _CConnectionInstance::AddRenderConnection_::_1_::dtor$1 @ 0x14001B25C (_CConnectionInstance--AddRenderConnection_--_1_--dtor$1.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$2 @ 0x14001B868 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$2.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x140030503 (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$1.c)
 *     _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x1400306E7 (_CConnectionInstance--RemoveCaptureConnection_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(int **a1)
{
  int *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v1);
    else
      v2();
  }
}
