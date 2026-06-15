/*
 * XREFs of ?VolumeStepUp@CVolumeStrip@@UEAAJPEBU_GUID@@@Z @ 0x180059B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::VolumeStepUp(CVolumeStrip *this, const struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 30) + 168LL))(
           *((_QWORD *)this + 30),
           a2);
}
