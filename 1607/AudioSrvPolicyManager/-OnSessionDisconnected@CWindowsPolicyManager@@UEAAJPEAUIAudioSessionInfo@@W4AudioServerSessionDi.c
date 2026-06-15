/*
 * XREFs of ?OnSessionDisconnected@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4AudioServerSessionDisconnectReason@@@Z @ 0x180004C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnSessionDisconnected(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 40) == 0LL;
  result = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 72LL))(v3 + 16);
  return result;
}
