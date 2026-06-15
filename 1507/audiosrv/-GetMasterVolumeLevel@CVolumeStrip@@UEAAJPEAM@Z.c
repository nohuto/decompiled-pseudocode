/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeStrip@@UEAAJPEAM@Z @ 0x1800720C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevel(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 30) + 104LL))(*((_QWORD *)this + 30), a2);
}
