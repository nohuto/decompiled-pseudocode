/*
 * XREFs of ?OnStreamCreate@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18001B430
 * Callers:
 *     ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017A50 (-Invoke@CAudioStreamCreate@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStreamCreate(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( *((_QWORD *)this + 6) )
    result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, struct IAudioStreamInfo *))(*(_QWORD *)(v3 + 16) + 88LL))(
             v3 + 16,
             a2,
             a3);
  return result;
}
