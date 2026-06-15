/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180010D60
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180018580 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180080C80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x180010D20 (-IsCaptureSession@CAudioSession@@UEAAHXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  __int64 (__fastcall *v4)(CAudioSession *); // rdi
  __int64 result; // rax

  v4 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 56LL);
  if ( v4 == CAudioSession::IsCaptureSession )
    result = CAudioSession::IsCaptureSession(this);
  else
    result = v4(this);
  if ( (_DWORD)result )
    return 2290679811LL;
  *((_BYTE *)this + 460) = a2;
  return result;
}
