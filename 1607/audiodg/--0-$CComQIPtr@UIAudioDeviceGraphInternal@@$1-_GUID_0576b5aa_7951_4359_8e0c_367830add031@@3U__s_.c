/*
 * XREFs of ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400258B8
 * Callers:
 *     ?AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002A7B0 (-AddPipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002A810 (-AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetGlitchCount@CSystemAudioDeviceSharedBase@@UEAAJPEAI@Z @ 0x14002AD20 (-GetGlitchCount@CSystemAudioDeviceSharedBase@@UEAAJPEAI@Z.c)
 *     ?GetGraphGuid@CSystemAudioDeviceSharedBase@@UEAAPEBU_GUID@@XZ @ 0x14002AD80 (-GetGraphGuid@CSystemAudioDeviceSharedBase@@UEAAPEBU_GUID@@XZ.c)
 *     ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14002ADD0 (-GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, a1);
  return a1;
}
