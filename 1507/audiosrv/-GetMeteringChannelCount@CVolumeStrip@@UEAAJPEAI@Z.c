/*
 * XREFs of ?GetMeteringChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x180072110
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetMeteringChannelCount(CVolumeStrip *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 32) + 80LL))(
           *((_QWORD *)this + 32),
           a2);
}
