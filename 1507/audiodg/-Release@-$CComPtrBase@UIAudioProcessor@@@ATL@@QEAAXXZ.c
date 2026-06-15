/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x140001344
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x140001DD0 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x14001B3E0 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$0 @ 0x14001BDF8 (_Microsoft--WRL--Details--MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResource.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x140028944 (_CpuManager--RegisterDevice_--_1_--dtor$0.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x14002AD00 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceShared@@MEAAXXZ @ 0x14002BEB0 (-Cleanup@CSystemAudioDeviceShared@@MEAAXXZ.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400330E0 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140033378 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioProcessor>::Release(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
