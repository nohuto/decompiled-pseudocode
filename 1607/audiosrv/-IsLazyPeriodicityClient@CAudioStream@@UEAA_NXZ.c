/*
 * XREFs of ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001A110
 * Callers:
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180024350 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180024440 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsLazyPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 120) == 2;
}
