/*
 * XREFs of ?OnIconPathChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180004A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnIconPathChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4)
{
  bool v4; // zf
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = *((_QWORD *)this + 5) == 0LL;
  result = 0LL;
  v6 = *((_QWORD *)this + 3);
  if ( !v4 )
    result = 0LL;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, const unsigned __int16 *, const struct _GUID *))(*(_QWORD *)(v6 + 16) + 32LL))(
             v6 + 16,
             a2,
             a3,
             a4);
  return result;
}
