/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180025854
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180015B80 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007BE10 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x180028B30 (-IsCaptureSession@CAudioSession@@UEAAHXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  __int64 (__fastcall *v4)(CAudioSession *__hidden); // rdi
  __int64 result; // rax

  v4 = *(__int64 (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 56LL);
  if ( v4 == CAudioSession::IsCaptureSession )
    result = CAudioSession::IsCaptureSession(this);
  else
    result = v4(this);
  if ( (_DWORD)result )
    return 2290679811LL;
  *((_BYTE *)this + 612) = a2;
  return result;
}
