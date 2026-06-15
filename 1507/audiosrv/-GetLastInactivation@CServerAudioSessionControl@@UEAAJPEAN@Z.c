/*
 * XREFs of ?GetLastInactivation@CServerAudioSessionControl@@UEAAJPEAN@Z @ 0x18007CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetLastInactivation(CServerAudioSessionControl *this, double *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 144LL))(*((_QWORD *)this + 9), a2);
}
