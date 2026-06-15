/*
 * XREFs of ?OnGroupingParamChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180021AB0
 * Callers:
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180031D00 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnGroupingParamChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 (__fastcall *v6)(__int64, struct IAudioSessionInfo *, __int128 *, const struct _GUID *); // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( *((_QWORD *)this + 6) )
    result = 0LL;
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, __int128 *, const struct _GUID *))(*(_QWORD *)(v4 + 16) + 64LL);
    v7 = (__int128)*a3;
    return v6(v4 + 16, a2, &v7, a4);
  }
  return result;
}
