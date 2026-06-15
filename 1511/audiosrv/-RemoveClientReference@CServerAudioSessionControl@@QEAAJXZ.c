/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180003368
 * Callers:
 *     AUDIOSESSION_rundown @ 0x180003300 (AUDIOSESSION_rundown.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // esi
  unsigned int (__fastcall *v3)(CServerAudioSessionControl *__hidden); // rbx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 104LL))(this);
  v3 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)this + 16LL);
  if ( v3 == CServerAudioSessionControl::Release )
    CServerAudioSessionControl::Release(this);
  else
    v3(this);
  return v2;
}
