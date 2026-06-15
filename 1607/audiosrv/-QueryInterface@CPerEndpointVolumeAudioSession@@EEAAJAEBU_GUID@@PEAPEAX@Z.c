/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003010
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039120 (-QueryInterface@CPerEndpointVolumeAudioSession@@G7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039130 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039140 (-QueryInterface@CPerEndpointVolumeAudioSession@@GBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039150 (-QueryInterface@CPerEndpointVolumeAudioSession@@GCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@GDPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039160 (-QueryInterface@CPerEndpointVolumeAudioSession@@GDPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  char *v6; // rcx

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  v5 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
    v5 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
  if ( v5 )
    return CAudioSession::QueryInterface(this, a2, a3);
  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  if ( this )
    v6 = (char *)this + 1008;
  else
    v6 = 0LL;
  *a3 = v6;
  return result;
}
