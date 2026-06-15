/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180005B50
 * Callers:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003DE44 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x180049580 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CDuckingManager@@WBI@EAAKXZ @ 0x1800495B0 (-AddRef@CDuckingManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
