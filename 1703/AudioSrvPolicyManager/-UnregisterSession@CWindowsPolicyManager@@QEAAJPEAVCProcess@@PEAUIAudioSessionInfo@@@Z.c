/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180005044
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000DE90 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800093DC (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E1D0 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        CWindowsPolicyManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  struct CWindowsPolicyManager *v5; // rsi
  CApplicationManager *v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  v5 = g_PolicyManager;
  (*(void (__fastcall **)(struct CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 256LL))(g_PolicyManager);
  v6 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CProcess::RemoveSession(a2, a3);
  CApplicationManager::Unregister(v6, a2);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  v7 = *((_QWORD *)v5 + 6);
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0LL;
  v9 = *(_QWORD *)(v7 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( v8 >= *(_QWORD *)(v7 + 80) )
        ATL::AtlThrowImpl(-2147024809);
      if ( a3 == **(struct IAudioSessionInfo ***)(*(_QWORD *)(v7 + 72) + 8 * v8) )
        break;
      if ( ++v8 >= v9 )
        goto LABEL_10;
    }
    ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt();
  }
LABEL_10:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(struct CWindowsPolicyManager *, unsigned __int64))(*(_QWORD *)v5 + 264LL))(v5, v8);
  return 0LL;
}
