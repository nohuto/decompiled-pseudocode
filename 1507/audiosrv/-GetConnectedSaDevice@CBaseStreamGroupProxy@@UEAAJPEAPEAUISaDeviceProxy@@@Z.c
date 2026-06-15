/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180026630
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x180004930 (AudioServerGetStreamVpoContext.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(CBaseStreamGroupProxy *this, struct ISaDeviceProxy **a2)
{
  __int64 v4; // rsi

  *a2 = 0LL;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 10));
    *a2 = (struct ISaDeviceProxy *)*((_QWORD *)this + 10);
  }
  return 0LL;
}
