/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180005044 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011110 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012CCC (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180016920 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180016F20 (PbmUnregisterAppClosureNotification.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AC88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18000E2E8 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012180 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  CApplication *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v4 = (CApplication *)*((_QWORD *)a2 + 28);
    if ( v4 )
      CApplication::DelinkProcess(v4, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
