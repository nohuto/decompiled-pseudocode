/*
 * XREFs of ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180022604 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18002277C (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180022D10 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800241C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ??1?$ComPtr@UIMMDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x1800510B0 (--1-$ComPtr@UIMMDevice@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180074A50 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OP.c)
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180074D50 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z @ 0x180074E70 (-GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFrequencyForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K@Z @ 0x180074F20 (-GetFrequencyForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K@Z.c)
 *     ?GetPositionForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K0@Z @ 0x180075170 (-GetPositionForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K0@Z.c)
 *     ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180075790 (-ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?StartStream@CExclusiveStreamGroupProxy@@UEAAJ_K@Z @ 0x180075A00 (-StartStream@CExclusiveStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CExclusiveStreamGroupProxy@@UEAAJ_K@Z @ 0x180075A70 (-StopStream@CExclusiveStreamGroupProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
