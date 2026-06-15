/*
 * XREFs of ?GetProcessId@CServerAudioSessionControl@@UEAAJPEAK@Z @ 0x18007CE50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetProcessId(CServerAudioSessionControl *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 120LL))(
           *((_QWORD *)this + 9),
           a2);
}
