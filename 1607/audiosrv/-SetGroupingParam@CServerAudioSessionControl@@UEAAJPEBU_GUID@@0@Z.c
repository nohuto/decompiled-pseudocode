/*
 * XREFs of ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x18000EF10
 * Callers:
 *     AudioSessionSetGroupingParam @ 0x18002A0D0 (AudioSessionSetGroupingParam.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::SetGroupingParam(
        CServerAudioSessionControl *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  CAudioSession *v3; // rcx
  __int64 (__fastcall *v4)(CAudioSession *__hidden, const struct _GUID *, const struct _GUID *); // rax

  v3 = (CAudioSession *)*((_QWORD *)this + 9);
  v4 = *(__int64 (__fastcall **)(CAudioSession *__hidden, const struct _GUID *, const struct _GUID *))(*(_QWORD *)v3 + 168LL);
  if ( v4 == CAudioSession::SetGroupingParam )
    return CAudioSession::SetGroupingParam(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
