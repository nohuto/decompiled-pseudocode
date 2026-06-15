/*
 * XREFs of ?VolumeStepUp@CVolumeStrip@@UEAAJPEBU_GUID@@@Z @ 0x180070D00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::VolumeStepUp(CVolumeStrip *this, const struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 30) + 168LL))(
           *((_QWORD *)this + 30),
           a2);
}
