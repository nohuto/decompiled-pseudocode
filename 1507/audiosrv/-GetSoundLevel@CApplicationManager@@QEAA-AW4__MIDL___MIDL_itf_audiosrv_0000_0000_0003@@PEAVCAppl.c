/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001C0B0
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001BF14 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001C2F0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000300C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012DE0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800132D4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, CApplication *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // r8
  int HasDuckedStream; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)a2 + 120) )
  {
    v3 = *((_DWORD *)a2 + 121);
  }
  else if ( *((_DWORD *)a2 + 28) )
  {
    v3 = 2;
  }
  else
  {
    v5 = (int)CApplication::Category((__int64)a2);
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    {
      v3 = 2;
    }
    else if ( dword_1800C6808[v5] )
    {
      HasDuckedStream = CApplication::HasDuckedStream(a2, v6, v7);
      v3 = 2;
      if ( HasDuckedStream )
        v3 = 1;
    }
    else
    {
      v3 = 0;
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
