/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAMPEBU_GUID@@@Z @ 0x1800709F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::SetAllChannelVolumeLevelScalar(
        CVolumeStrip *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, const struct _GUID *))(**((_QWORD **)this + 30) + 184LL))(
           *((_QWORD *)this + 30),
           a2,
           a3,
           a4);
}
