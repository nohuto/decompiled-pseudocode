/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeStrip@@UEAAJIMPEBU_GUID@@@Z @ 0x180059A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetChannelVolumeLevel(
        CVolumeStrip *this,
        __int64 a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v4; // r8

  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, const struct _GUID *))(**((_QWORD **)this + 30) + 120LL))(
           *((_QWORD *)this + 30),
           a2,
           v4,
           a4);
}
