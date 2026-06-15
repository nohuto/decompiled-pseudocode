/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001EAC0
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18003F2B0 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18001C6A0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18001C720 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001E8D0 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18009F240 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18009F60C (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2)
{
  int v2; // esi
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  unsigned int SoundLevel; // eax
  unsigned int v8; // esi
  unsigned int v9; // r15d
  int v10; // r14d
  int v12; // eax
  const wchar_t *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-70h] BYREF
  char v21; // [rsp+60h] [rbp-68h]
  LPCRITICAL_SECTION v22; // [rsp+68h] [rbp-60h] BYREF
  char v23; // [rsp+70h] [rbp-58h]
  LPCRITICAL_SECTION v24; // [rsp+78h] [rbp-50h] BYREF
  char v25; // [rsp+80h] [rbp-48h]
  LPCRITICAL_SECTION v26; // [rsp+88h] [rbp-40h] BYREF
  char v27; // [rsp+90h] [rbp-38h]

  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v26 = (LPCRITICAL_SECTION)((char *)this + 24);
  v27 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v26);
  v5 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = v5[2];
      v5 = (_QWORD *)*v5;
      if ( *(_DWORD *)(v6 + 116) == v2 )
        break;
LABEL_22:
      if ( !v5 )
        goto LABEL_23;
    }
    v24 = v4;
    v25 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v24);
    v22 = v4;
    v23 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v22);
    SoundLevel = CApplicationManager::GetSoundLevel((__int64)this, (CApplication *)v6);
    v8 = SoundLevel;
    if ( *(_DWORD *)(v6 + 472) )
      v9 = *(_DWORD *)(v6 + 476);
    else
      v9 = SoundLevel;
    lpCriticalSection = v4;
    v21 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( *(_DWORD *)(v6 + 488) )
    {
      v10 = *(_DWORD *)(v6 + 492);
    }
    else if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v6) )
    {
      v10 = 2;
    }
    else
    {
      v12 = CApplication::Category(v6);
      if ( v12 )
      {
        if ( v8 && dword_1800C4CA0[v12] )
          v10 = 2;
        else
          v10 = 1;
      }
      else
      {
        v10 = 2;
      }
    }
    if ( v21 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v21 = 0;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v13 = L"(override)";
      if ( !*(_DWORD *)(v6 + 488) )
        v13 = L" ";
      SoundLevelToString(v9);
      v14 = SoundLevelToString(v8);
      WPP_SF_SSSSSSS(*(_QWORD *)(v15 + 16), v16, v17, *(_QWORD *)(v6 + 16), v14, v16, v17, v18, v19, (__int64)v13);
    }
    if ( v23 )
    {
      LeaveCriticalSection(v22);
      v23 = 0;
    }
    CApplication::ExecutePBMActions(v6, v8, v9, v10, 209);
    if ( !v8 && !v9 )
    {
      if ( v10 == 1 )
      {
        *(_QWORD *)(v6 + 468) = 0LL;
        *(_QWORD *)(v6 + 476) = 0LL;
        *(_QWORD *)(v6 + 484) = 0LL;
        *(_DWORD *)(v6 + 492) = 1;
        *(_DWORD *)(v6 + 468) = 1;
        *(_DWORD *)(v6 + 488) = 1;
        *(_DWORD *)(v6 + 492) = 1;
      }
      else
      {
        if ( *(_DWORD *)(v6 + 468) == 6 )
          goto LABEL_19;
        *(_DWORD *)(v6 + 468) = 6;
      }
      *(_QWORD *)(v6 + 480) = 1LL;
      *(_QWORD *)(v6 + 472) = 1LL;
    }
LABEL_19:
    if ( v25 )
    {
      LeaveCriticalSection(v24);
      v25 = 0;
    }
    v2 = a2;
    goto LABEL_22;
  }
LABEL_23:
  if ( v27 )
    LeaveCriticalSection(v26);
  return 0LL;
}
