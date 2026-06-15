/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeStrip@@UEAAJMPEBU_GUID@@@Z @ 0x180070B40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::SetMasterVolumeLevel(CVolumeStrip *this, float a2, const struct _GUID *a3)
{
  __int64 v3; // rdx

  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 30) + 88LL))(
           *((_QWORD *)this + 30),
           v3,
           a3);
}
