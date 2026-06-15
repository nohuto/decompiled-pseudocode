/*
 * XREFs of ?OnChannelVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180004B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnChannelVolumeChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        float *const a4,
        unsigned int a5,
        const struct _GUID *a6)
{
  bool v6; // zf
  __int64 result; // rax
  __int64 v8; // rcx

  v6 = *((_QWORD *)this + 5) == 0LL;
  result = 0LL;
  v8 = *((_QWORD *)this + 3);
  if ( !v6 )
    result = 0LL;
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, __int64, float *const, unsigned int, const struct _GUID *))(*(_QWORD *)(v8 + 16) + 48LL))(
             v8 + 16,
             a2,
             a3,
             a4,
             a5,
             a6);
  return result;
}
