/*
 * XREFs of ?BelongsToPackagedApp@CAudioSession@@UEAAHXZ @ 0x180028950
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AF60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180028C30 (-IsPackagedApp@CProcess@@UEAAHXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::BelongsToPackagedApp(CAudioSession *this)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v3)(CProcess *__hidden); // rdi

  v1 = *((_QWORD *)this + 108);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v1 + 88LL);
    if ( v3 == CProcess::IsPackagedApp )
      return CProcess::IsPackagedApp(*((CProcess **)this + 108));
    else
      return v3(*((CProcess **)this + 108));
  }
  return result;
}
