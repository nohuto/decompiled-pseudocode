/*
 * XREFs of ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x180018940
 * Callers:
 *     AudioSessionGetGroupingParam @ 0x180032700 (AudioSessionGetGroupingParam.c)
 * Callees:
 *     ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180010AD0 (-GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetGroupingParam(CServerAudioSessionControl *this, struct _GUID *a2)
{
  __int64 (__fastcall *v2)(struct _GUID *, struct _GUID *); // rdi

  v2 = *(__int64 (__fastcall **)(struct _GUID *, struct _GUID *))(**((_QWORD **)this + 9) + 160LL);
  if ( v2 == CAudioSession::GetGroupingParam )
    return CAudioSession::GetGroupingParam(*((struct _GUID **)this + 9), a2);
  else
    return v2(*((struct _GUID **)this + 9), a2);
}
