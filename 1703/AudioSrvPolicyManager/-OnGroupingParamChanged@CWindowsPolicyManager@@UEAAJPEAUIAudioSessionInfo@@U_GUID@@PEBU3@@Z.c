/*
 * XREFs of ?OnGroupingParamChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180004E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnGroupingParamChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( v4 )
  {
    v6 = (__int128)*a3;
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, __int128 *, const struct _GUID *))(*(_QWORD *)(v4 + 16) + 64LL))(
             v4 + 16,
             a2,
             &v6,
             a4);
  }
  return result;
}
