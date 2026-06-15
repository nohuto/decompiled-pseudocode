/*
 * XREFs of ?SetMute@CVolumeStrip@@UEAAJHPEBU_GUID@@@Z @ 0x180070C00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::SetMute(CVolumeStrip *this, unsigned int a2, const struct _GUID *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 31) + 64LL))(
           *((_QWORD *)this + 31),
           a2,
           a3);
}
