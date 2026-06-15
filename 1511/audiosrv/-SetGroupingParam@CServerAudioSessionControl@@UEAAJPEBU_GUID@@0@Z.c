/*
 * XREFs of ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x180015EE0
 * Callers:
 *     AudioSessionSetGroupingParam @ 0x18003A610 (AudioSessionSetGroupingParam.c)
 * Callees:
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800287E0 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetGroupingParam(
        CServerAudioSessionControl *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  __int64 (__fastcall *v3)(CAudioSession *__hidden, const struct _GUID *, const struct _GUID *); // rdi

  v3 = *(__int64 (__fastcall **)(CAudioSession *__hidden, const struct _GUID *, const struct _GUID *))(**((_QWORD **)this + 9) + 168LL);
  if ( v3 == CAudioSession::SetGroupingParam )
    return CAudioSession::SetGroupingParam(*((CAudioSession **)this + 9), a2, a3);
  else
    return v3(*((CAudioSession **)this + 9), a2, a3);
}
