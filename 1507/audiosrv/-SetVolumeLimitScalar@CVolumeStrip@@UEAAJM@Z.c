/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeStrip@@UEAAJM@Z @ 0x180072D10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::SetVolumeLimitScalar(CVolumeStrip *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 200LL))(*((_QWORD *)this + 30));
}
