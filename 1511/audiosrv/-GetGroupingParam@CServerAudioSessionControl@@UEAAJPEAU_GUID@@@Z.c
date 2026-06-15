/*
 * XREFs of ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x180015F40
 * Callers:
 *     AudioSessionGetGroupingParam @ 0x18003A5B0 (AudioSessionGetGroupingParam.c)
 * Callees:
 *     ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x1800288D0 (-GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetGroupingParam(CServerAudioSessionControl *this, struct _GUID *a2)
{
  __int64 (__fastcall *v2)(CAudioSession *__hidden, struct _GUID *); // rdi

  v2 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct _GUID *))(**((_QWORD **)this + 9) + 160LL);
  if ( v2 == CAudioSession::GetGroupingParam )
    return CAudioSession::GetGroupingParam(*((CAudioSession **)this + 9), a2);
  else
    return v2(*((CAudioSession **)this + 9), a2);
}
