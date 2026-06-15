/*
 * XREFs of ?OnVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180021B30
 * Callers:
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800312F0 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnVolumeChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        float a3,
        __int64 a4,
        const struct _GUID *a5)
{
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( *((_QWORD *)this + 6) )
    result = 0LL;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, __int64, __int64, const struct _GUID *))(*(_QWORD *)(v6 + 16) + 40LL))(
             v6 + 16,
             a2,
             v5,
             a4,
             a5);
  return result;
}
