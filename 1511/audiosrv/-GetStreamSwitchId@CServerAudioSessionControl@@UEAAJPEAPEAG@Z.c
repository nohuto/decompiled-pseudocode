/*
 * XREFs of ?GetStreamSwitchId@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x180078100
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetStreamSwitchId(
        CServerAudioSessionControl *this,
        unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 128LL))(
           *((_QWORD *)this + 9),
           a2);
}
