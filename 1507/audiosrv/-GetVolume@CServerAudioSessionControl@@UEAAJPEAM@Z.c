/*
 * XREFs of ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180018500
 * Callers:
 *     AudioSessionGetVolume @ 0x180031A40 (AudioSessionGetVolume.c)
 * Callees:
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180010960 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetVolume(CServerAudioSessionControl *this, float *a2)
{
  CAudioSession *v4; // rbx
  __int64 (__fastcall *v5)(CAudioSession *, float *); // rdi

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      33,
      (unsigned int)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0,
      0LL);
  }
  v4 = (CAudioSession *)*((_QWORD *)this + 9);
  v5 = *(__int64 (__fastcall **)(CAudioSession *, float *))(*(_QWORD *)v4 + 304LL);
  if ( v5 == CAudioSession::GetVolume )
    return CAudioSession::GetVolume(v4, a2);
  else
    return v5(v4, a2);
}
