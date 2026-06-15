/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x1800041F0
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180004F5C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800042DC (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001E8D0 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18009F240 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18009F60C (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        struct CApplication *a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *a4,
        enum _PLM_EXEMPTION *a5)
{
  unsigned int SoundLevel; // eax
  unsigned int v10; // ebp
  const wchar_t *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-30h] BYREF
  char v20; // [rsp+60h] [rbp-28h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  SoundLevel = CApplicationManager::GetSoundLevel(this, a2);
  v10 = SoundLevel;
  if ( a3 )
    *(_DWORD *)a3 = SoundLevel;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 118) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 119);
    else
      *(_DWORD *)a4 = SoundLevel;
  }
  if ( a5 )
    *(_DWORD *)a5 = CApplicationManager::GetPLMExemptionStatus(this, a2, SoundLevel);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v12 = L"(override)";
    if ( !*((_DWORD *)a2 + 122) )
      v12 = L" ";
    if ( a4 )
      SoundLevelToString(*(unsigned int *)a4);
    v13 = SoundLevelToString(v10);
    WPP_SF_SSSSSSS(*(_QWORD *)(v14 + 16), v15, v14, *((_QWORD *)a2 + 2), v13, v17, v18, v16, v15, (__int64)v12);
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
