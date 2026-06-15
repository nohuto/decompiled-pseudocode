/*
 * XREFs of ?UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001F8D0
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800299A0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F770 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A11C (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UnregisterSession(
        CApplicationManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CApplicationManager *v5; // rdi
  char *v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  v5 = g_ApplicationManager;
  v7 = (char *)g_ApplicationManager + 24;
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v7);
  CProcess::RemoveSession(a2, a3);
  CApplicationManager::Unregister(v5, a2);
  if ( v8 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v7);
  return 0LL;
}
