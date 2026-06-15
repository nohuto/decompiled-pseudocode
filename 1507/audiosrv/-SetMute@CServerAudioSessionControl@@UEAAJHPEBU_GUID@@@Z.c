/*
 * XREFs of ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x1800183B0
 * Callers:
 *     AudioSessionSetMute @ 0x1800321C0 (AudioSessionSetMute.c)
 * Callees:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180013660 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetMute(
        CServerAudioSessionControl *this,
        unsigned int a2,
        struct _GUID *a3)
{
  __int64 (__fastcall *v3)(CPerStreamVolumeAudioSession *, int, struct _GUID *, int); // rdi

  v3 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *, int, struct _GUID *, int))(**((_QWORD **)this + 9)
                                                                                          + 328LL);
  if ( v3 == CPerStreamVolumeAudioSession::SetMute )
    return CPerStreamVolumeAudioSession::SetMute(*((CPerStreamVolumeAudioSession **)this + 9), a2, a3, 0);
  else
    return v3(*((CPerStreamVolumeAudioSession **)this + 9), a2, a3, 0);
}
