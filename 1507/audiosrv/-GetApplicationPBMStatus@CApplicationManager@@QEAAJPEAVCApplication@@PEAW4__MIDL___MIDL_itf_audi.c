/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001BF14
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800035CC (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001C000 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001C0B0 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800A2090 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x1800A2444 (WPP_SF_SSSSSSS.c)
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
  ATL::CCritSecLock::Lock(&lpCriticalSection);
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
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
