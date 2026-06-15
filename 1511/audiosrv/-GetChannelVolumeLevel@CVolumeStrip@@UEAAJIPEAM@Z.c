/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeStrip@@UEAAJIPEAM@Z @ 0x1800703C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetChannelVolumeLevel(CVolumeStrip *this, unsigned int a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 30) + 136LL))(
           *((_QWORD *)this + 30),
           a2,
           a3);
}
