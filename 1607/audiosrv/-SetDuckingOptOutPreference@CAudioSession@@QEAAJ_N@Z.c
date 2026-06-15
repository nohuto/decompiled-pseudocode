/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180012DD8
 * Callers:
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x18000EBD0 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180063590 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x1800160B0 (-IsCaptureSession@CAudioSession@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  __int64 (*v4)(void); // rax
  __int64 result; // rax

  v4 = *(__int64 (**)(void))(*(_QWORD *)this + 56LL);
  if ( (char *)v4 == (char *)CAudioSession::IsCaptureSession )
    result = CAudioSession::IsCaptureSession(this);
  else
    result = v4();
  if ( (_DWORD)result )
    return 2290679811LL;
  *((_BYTE *)this + 612) = a2;
  return result;
}
