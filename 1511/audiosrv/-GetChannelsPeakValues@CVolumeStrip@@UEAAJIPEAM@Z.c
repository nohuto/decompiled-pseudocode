/*
 * XREFs of ?GetChannelsPeakValues@CVolumeStrip@@UEAAJIPEAM@Z @ 0x180070480
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetChannelsPeakValues(CVolumeStrip *this, unsigned int a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 88LL))(
           *((_QWORD *)this + 32),
           a2,
           a3);
}
