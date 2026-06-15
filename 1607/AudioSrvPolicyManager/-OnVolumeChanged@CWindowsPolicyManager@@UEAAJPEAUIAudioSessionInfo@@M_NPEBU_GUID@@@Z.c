/*
 * XREFs of ?OnVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180004AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnVolumeChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        float a3)
{
  bool v3; // zf
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *((_QWORD *)this + 5) == 0LL;
  result = 0LL;
  v5 = *((_QWORD *)this + 3);
  if ( !v3 )
    result = 0LL;
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *))(*(_QWORD *)(v5 + 16) + 40LL))(v5 + 16, a2);
  return result;
}
