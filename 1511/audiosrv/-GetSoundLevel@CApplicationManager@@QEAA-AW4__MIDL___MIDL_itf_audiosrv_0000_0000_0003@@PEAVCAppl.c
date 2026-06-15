/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001E8D0
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x1800041F0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001EAC0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180004998 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18001C6A0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, CApplication *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
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
    else if ( dword_1800C4CA0[v5] )
    {
      v3 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2, v6, v7) != 0);
    }
    else
    {
      v3 = 0;
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
