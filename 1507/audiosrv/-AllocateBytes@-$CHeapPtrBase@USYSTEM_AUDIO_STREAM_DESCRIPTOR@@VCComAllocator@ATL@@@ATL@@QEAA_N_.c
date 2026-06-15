/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800677E8
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001FA00 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x180073EB4 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 */

bool __fastcall ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(
        _QWORD *a1,
        unsigned __int64 a2)
{
  void *v3; // rax

  v3 = ATL::CComAllocator::Allocate(a2);
  *a1 = v3;
  return v3 != 0LL;
}
