/*
 * XREFs of ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140004DC8
 * Callers:
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400056E0 (-GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002BD20 (-AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002BDB0 (-AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetGlitchCount@CSystemAudioDeviceSharedBase@@UEAAJPEAI@Z @ 0x14002C2E0 (-GetGlitchCount@CSystemAudioDeviceSharedBase@@UEAAJPEAI@Z.c)
 *     ?GetGraphGuid@CSystemAudioDeviceSharedBase@@UEAAPEBU_GUID@@XZ @ 0x14002C360 (-GetGraphGuid@CSystemAudioDeviceSharedBase@@UEAAPEBU_GUID@@XZ.c)
 *     ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14002C3E0 (-GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140006560 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall *v3)(_QWORD, GUID *, _QWORD *); // rsi

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = **a2;
    if ( (char *)v3 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(a2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, a1);
    else
      v3(a2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, a1);
  }
  return a1;
}
