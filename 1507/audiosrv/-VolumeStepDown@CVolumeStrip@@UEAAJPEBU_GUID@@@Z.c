/*
 * XREFs of ?VolumeStepDown@CVolumeStrip@@UEAAJPEBU_GUID@@@Z @ 0x180072D60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::VolumeStepDown(CVolumeStrip *this, const struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 30) + 176LL))(
           *((_QWORD *)this + 30),
           a2);
}
