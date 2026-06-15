/*
 * XREFs of ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140026A78
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, a1);
  return a1;
}
