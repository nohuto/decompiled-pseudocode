/*
 * XREFs of ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180015D00
 * Callers:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x18000EB60 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sg @ 0x18005FBC8 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetVolume(CAudioSession *this, float *a2)
{
  int v4; // r8d
  bool v5; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17,
      v4,
      *((_QWORD *)this + 107),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this + 228)));
  }
  v5 = v8 == 0;
  *a2 = *((float *)this + 228);
  if ( !v5 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
