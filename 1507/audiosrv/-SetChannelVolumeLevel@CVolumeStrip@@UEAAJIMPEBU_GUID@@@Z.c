/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeStrip@@UEAAJIMPEBU_GUID@@@Z @ 0x180072B10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::SetChannelVolumeLevel(
        CVolumeStrip *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v4; // r8

  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 30) + 120LL))(
           *((_QWORD *)this + 30),
           a2,
           v4,
           a4);
}
