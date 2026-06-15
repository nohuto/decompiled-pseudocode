/*
 * XREFs of ?GetPeakValue@CVolumeStrip@@UEAAJPEAM@Z @ 0x180070580
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetPeakValue(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 32) + 72LL))(*((_QWORD *)this + 32), a2);
}
