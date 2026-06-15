/*
 * XREFs of ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400187D0
 * Callers:
 *     ?RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E4A0 (-RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DC20 (-AddPipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DCB0 (-AddPipeToLoopbackConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetGlitchCount@CSystemAudioDeviceSharedNew@@UEAAJPEAI@Z @ 0x14002DFE0 (-GetGlitchCount@CSystemAudioDeviceSharedNew@@UEAAJPEAI@Z.c)
 *     ?GetGraphGuid@CSystemAudioDeviceSharedNew@@UEAAPEBU_GUID@@XZ @ 0x14002E060 (-GetGraphGuid@CSystemAudioDeviceSharedNew@@UEAAPEBU_GUID@@XZ.c)
 *     ?GetInterruptPeriodicity@CSystemAudioDeviceSharedNew@@UEAA_JXZ @ 0x14002E0E0 (-GetInterruptPeriodicity@CSystemAudioDeviceSharedNew@@UEAA_JXZ.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000EC10 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void **__fastcall ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
        void **a1,
        __int64 (__fastcall ***a2)(void *a1, const struct _GUID *a2, void **a3))
{
  __int64 (__fastcall *v3)(void *, const struct _GUID *, void **); // rsi

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = **a2;
    if ( v3 == ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(a2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, a1);
    else
      v3(a2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, a1);
  }
  return a1;
}
