/*
 * XREFs of ?GetLastActivation@CServerAudioSessionControl@@UEAAJPEAN@Z @ 0x180077F80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetLastActivation(CServerAudioSessionControl *this, double *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 136LL))(*((_QWORD *)this + 9), a2);
}
