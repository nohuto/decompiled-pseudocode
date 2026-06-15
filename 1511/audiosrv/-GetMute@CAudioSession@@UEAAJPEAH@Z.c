/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800285E0
 * Callers:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180015A10 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      *((_DWORD *)this + 229));
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 229);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
