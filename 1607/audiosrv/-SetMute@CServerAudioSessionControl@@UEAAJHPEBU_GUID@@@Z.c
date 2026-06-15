/*
 * XREFs of ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x18000EA60
 * Callers:
 *     AudioSessionSetMute @ 0x180029A50 (AudioSessionSetMute.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetMute(
        CServerAudioSessionControl *this,
        __int64 a2,
        const struct _GUID *a3)
{
  CPerStreamVolumeAudioSession *v3; // rcx
  __int64 (__fastcall *v4)(CPerStreamVolumeAudioSession *, int, const struct _GUID *, int); // rax

  v3 = (CPerStreamVolumeAudioSession *)*((_QWORD *)this + 9);
  v4 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *, int, const struct _GUID *, int))(*(_QWORD *)v3 + 328LL);
  if ( v4 == CPerStreamVolumeAudioSession::SetMute )
    return CPerStreamVolumeAudioSession::SetMute(v3, a2, a3, 0);
  else
    return v4(v3, a2, a3, 0);
}
