/*
 * XREFs of ?OnGroupingParamChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180004B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnGroupingParamChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  bool v4; // zf
  __int64 result; // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 5) == 0LL;
  result = 0LL;
  v6 = *((_QWORD *)this + 3);
  if ( !v4 )
    result = 0LL;
  if ( v6 )
  {
    v7 = (__int128)*a3;
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, __int128 *, const struct _GUID *))(*(_QWORD *)(v6 + 16) + 64LL))(
             v6 + 16,
             a2,
             &v7,
             a4);
  }
  return result;
}
