/*
 * XREFs of ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800147A0
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180014870 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B40C (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D018 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D08C (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000D100 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000D1A0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetPLMExemptionStatus(__int64 a1, CApplication *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  BOOL v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)a2 + 122) )
  {
    v5 = *((_DWORD *)a2 + 123);
  }
  else
  {
    v6 = CApplication::Category((__int64)a2);
    if ( v6 )
    {
      v7 = a3
        && (dword_18002B5A0[v6]
         || (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
         && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
         && !(unsigned int)CApplication::HasBackgroundAudioTask(a2));
      v5 = v7 + 1;
    }
    else
    {
      v5 = 2;
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
