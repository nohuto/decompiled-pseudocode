/*
 * XREFs of ?OnSessionDisconnected@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4AudioServerSessionDisconnectReason@@@Z @ 0x1800A0B40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnSessionDisconnected(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( *(_QWORD *)(a1 + 48) )
    result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v3 + 16) + 72LL))(v3 + 16, a2, a3);
  return result;
}
