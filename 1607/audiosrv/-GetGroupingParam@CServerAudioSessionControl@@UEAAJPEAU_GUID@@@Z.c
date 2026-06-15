/*
 * XREFs of ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x18000EF40
 * Callers:
 *     AudioSessionGetGroupingParam @ 0x18002A060 (AudioSessionGetGroupingParam.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetGroupingParam(CServerAudioSessionControl *this, struct _GUID *a2)
{
  CAudioSession *v2; // rcx
  __int64 (__fastcall *v3)(CAudioSession *__hidden, struct _GUID *); // rax

  v2 = (CAudioSession *)*((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct _GUID *))(*(_QWORD *)v2 + 160LL);
  if ( v3 == CAudioSession::GetGroupingParam )
    return CAudioSession::GetGroupingParam(v2, a2);
  else
    return v3(v2, a2);
}
