/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x180012F34
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001315C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180013304 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000AFD8 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000B7BC (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000C2B4 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C904 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C970 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000C9DC (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CA78 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v5; // edi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]

  v11 = (LPCRITICAL_SECTION)(a1 + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock(&v11);
  if ( *(_DWORD *)(a2 + 536) )
  {
    v3 = *(_DWORD *)(a2 + 540);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 168) )
      goto LABEL_4;
    v4 = (int)CApplication::Category(a2);
    if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)a2) )
      goto LABEL_4;
    if ( !(unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)a2)
      || (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)a2)
      || !(unsigned int)CApplication::HasSmtcSubscription(a2, 1) )
    {
      goto LABEL_28;
    }
    if ( (unsigned int)CApplication::GetTotalActiveRenderStreamCount((CApplication *)a2) || *(_DWORD *)(a2 + 448) )
      goto LABEL_4;
    lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 32);
    v10 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v5 = 0;
    v6 = *(_QWORD **)(a2 + 72);
    while ( v6 )
    {
      v7 = v6[2];
      v6 = (_QWORD *)*v6;
      if ( !*(_DWORD *)(v7 + 416) && *(_QWORD *)(v7 + 360) )
      {
        v5 = 1;
        break;
      }
    }
    if ( v10 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v5 || *(_DWORD *)(a2 + 392) )
    {
LABEL_4:
      v3 = 2;
    }
    else
    {
LABEL_28:
      if ( dword_180027AF0[v4] )
        v3 = 2 - ((unsigned int)CApplication::HasDuckedStream((CApplication *)a2) != 0);
      else
        v3 = 0;
    }
  }
  if ( v12 )
    LeaveCriticalSection(v11);
  return v3;
}
