/*
 * XREFs of ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400269EC
 * Callers:
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$4 @ 0x14001AE98 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$4.c)
 *     _CPipeInstance::OnDisconnectedFromPump_::_1_::dtor$0 @ 0x14001B6E0 (_CPipeInstance--OnDisconnectedFromPump_--_1_--dtor$0.c)
 *     _CPipeInstance::OnConnectedToPump_::_1_::dtor$0 @ 0x14001B700 (_CPipeInstance--OnConnectedToPump_--_1_--dtor$0.c)
 *     _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$2 @ 0x14001B858 (_CPipeInstance--DeactivateAPOsAndRemoveConnections_--_1_--dtor$2.c)
 *     _CConnectionInstance::AddRenderConnection_::_1_::dtor$1 @ 0x14001BB3C (_CConnectionInstance--AddRenderConnection_--_1_--dtor$1.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$2 @ 0x14001BE88 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$2.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x1400335CC (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$1.c)
 *     _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x1400337EC (_CConnectionInstance--RemoveCaptureConnection_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(volatile signed __int32 **a1)
{
  __int64 (__fastcall *v1)(volatile signed __int32 *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      return ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
