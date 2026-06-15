/*
 * XREFs of ??C?$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ @ 0x18000BBF4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000B4D0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18000B860 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAutoPtr<SaDeviceParams>::operator->(__int64 a1)
{
  return *(_QWORD *)a1;
}
