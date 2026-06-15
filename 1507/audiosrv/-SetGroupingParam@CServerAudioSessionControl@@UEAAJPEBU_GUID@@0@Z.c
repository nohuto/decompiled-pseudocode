/*
 * XREFs of ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x1800188E0
 * Callers:
 *     AudioSessionSetGroupingParam @ 0x180032760 (AudioSessionSetGroupingParam.c)
 * Callees:
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800109E0 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetGroupingParam(
        CServerAudioSessionControl *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  __int64 (__fastcall *v3)(CAudioSession *, const struct _GUID *, const struct _GUID *); // rdi

  v3 = *(__int64 (__fastcall **)(CAudioSession *, const struct _GUID *, const struct _GUID *))(**((_QWORD **)this + 9)
                                                                                             + 168LL);
  if ( v3 == CAudioSession::SetGroupingParam )
    return CAudioSession::SetGroupingParam(*((CAudioSession **)this + 9), a2, a3);
  else
    return v3(*((CAudioSession **)this + 9), a2, a3);
}
