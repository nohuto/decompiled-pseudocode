/*
 * XREFs of ?GetVolumeStepInfo@CVolumeStrip@@UEAAJPEAI0@Z @ 0x1800705D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetVolumeStepInfo(CVolumeStrip *this, unsigned int *a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 30) + 160LL))(
           *((_QWORD *)this + 30),
           a2,
           a3);
}
