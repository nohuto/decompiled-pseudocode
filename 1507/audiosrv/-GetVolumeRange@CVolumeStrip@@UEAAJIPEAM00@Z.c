/*
 * XREFs of ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x1800721B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetVolumeRange(CVolumeStrip *this, unsigned int a2, float *a3, float *a4, float *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *))(**((_QWORD **)this + 30) + 152LL))(
           *((_QWORD *)this + 30),
           a2,
           a3,
           a4);
}
