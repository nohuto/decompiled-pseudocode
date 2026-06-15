/*
 * XREFs of ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800398EC
 * Callers:
 *     ?AllocateBytes@?$CHeapPtrBase@UAUDIO_DEVICE_MODE_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180066064 (-AllocateBytes@-$CHeapPtrBase@UAUDIO_DEVICE_MODE_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@.c)
 *     ?AllocateBytes@?$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18006608C (-AllocateBytes@-$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall ATL::CComAllocator::Allocate(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return CoTaskMemAlloc((unsigned int)a1);
}
