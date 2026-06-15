/*
 * XREFs of ?GetPeakValue@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180046890
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetPeakValue(CServerAudioSessionControl *this, float *a2)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 9) + 376LL))(*((_QWORD *)this + 9), a2);
}
