/*
 * XREFs of ?IsSystemSoundsSession@CServerAudioSessionControl@@UEAAJXZ @ 0x180060510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CServerAudioSessionControl::IsSystemSoundsSession(CServerAudioSessionControl *this)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 24LL) + 24LL))(*((_QWORD *)this + 9) + 24LL) == 0;
}
