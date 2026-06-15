/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180022EE0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(CBaseStreamGroupProxy *this, struct ISaDeviceProxy **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v4 = *((_QWORD *)this + 9);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct ISaDeviceProxy *)*((_QWORD *)this + 9);
  }
  return 0LL;
}
