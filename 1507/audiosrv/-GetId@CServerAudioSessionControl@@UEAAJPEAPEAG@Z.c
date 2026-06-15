/*
 * XREFs of ?GetId@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x18007CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetId(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 104LL))(
           *((_QWORD *)this + 9),
           a2);
}
