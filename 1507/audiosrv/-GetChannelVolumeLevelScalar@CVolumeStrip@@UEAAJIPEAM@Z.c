/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z @ 0x180072000
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetChannelVolumeLevelScalar(CVolumeStrip *this, unsigned int a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 30) + 144LL))(
           *((_QWORD *)this + 30),
           a2,
           a3);
}
