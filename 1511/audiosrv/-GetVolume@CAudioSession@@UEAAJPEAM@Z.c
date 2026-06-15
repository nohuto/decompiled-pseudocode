/*
 * XREFs of ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180028760
 * Callers:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180015B00 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CAudioSession::GetVolume(CAudioSession *this, float *a2)
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
    WPP_SF_Sq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this + 228)));
  }
  v4 = v7 == 0;
  *a2 = *((float *)this + 228);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
