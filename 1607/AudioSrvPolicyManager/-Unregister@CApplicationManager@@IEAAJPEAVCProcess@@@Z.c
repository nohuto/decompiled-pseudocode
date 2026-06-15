/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012510
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180004DA8 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011C70 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014404 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180018810 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180018E10 (PbmUnregisterAppClosureNotification.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000B048 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18000EB48 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001338C (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  CApplication *v4; // rcx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+38h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-21h] BYREF
  char v9; // [rsp+48h] [rbp-19h]
  __int64 v10; // [rsp+50h] [rbp-11h]

  v10 = -2LL;
  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v4 = (CApplication *)*((_QWORD *)a2 + 28);
    if ( v4 )
      CApplication::DelinkProcess(v4, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  v5 = v7;
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
