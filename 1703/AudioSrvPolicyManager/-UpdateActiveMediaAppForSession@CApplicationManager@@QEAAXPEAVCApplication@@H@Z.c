/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180013768
 * Callers:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18000E4E0 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012CCC (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x180013890 (-OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180013C80 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C904 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CA78 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001A88C (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001A950 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  DWORD v5; // r14d
  int v6; // edi
  BOOL v7; // ebp
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  v12 = (LPCRITICAL_SECTION)((char *)this + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock(&v12);
  v5 = *((_DWORD *)a2 + 43);
  v6 = 1;
  v7 = (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 0) && *((_DWORD *)a2 + 42)
    || (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
    && (unsigned int)CApplication::IsBackgroundAudioCapable(a2);
  if ( !a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
    v11 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v8 )
    {
      v9 = v8[2];
      v8 = (_QWORD *)*v8;
      if ( !*(_DWORD *)(v9 + 416) && *(_DWORD *)(v9 + 464) )
      {
        a3 = 1;
        break;
      }
    }
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    if ( !a3 )
      v6 = 0;
  }
  if ( !v7 || v6 )
    TsSessionIdRemoveActiveMediaApp(v5, a2);
  else
    TsSessionIdAddActiveMediaApp(v5, a2);
  if ( v13 )
    LeaveCriticalSection(v12);
}
