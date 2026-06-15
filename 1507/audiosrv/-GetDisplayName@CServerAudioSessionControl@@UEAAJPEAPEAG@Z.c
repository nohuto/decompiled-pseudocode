/*
 * XREFs of ?GetDisplayName@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x18007CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetDisplayName(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 152LL))(
           *((_QWORD *)this + 9),
           a2);
}
