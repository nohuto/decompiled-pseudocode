/*
 * XREFs of ?GetMeteringChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x18007CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetMeteringChannelCount(
        CServerAudioSessionControl *this,
        unsigned int *a2)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x34u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 384LL))(
           *((_QWORD *)this + 9),
           a2);
}
