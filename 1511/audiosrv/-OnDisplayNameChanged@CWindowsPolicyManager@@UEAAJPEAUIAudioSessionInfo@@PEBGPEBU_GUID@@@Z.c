/*
 * XREFs of ?OnDisplayNameChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x18009DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnDisplayNameChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax

  v4 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( *((_QWORD *)this + 6) )
    result = 0LL;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, const unsigned __int16 *, const struct _GUID *))(*(_QWORD *)(v4 + 16) + 24LL))(
             v4 + 16,
             a2,
             a3,
             a4);
  return result;
}
