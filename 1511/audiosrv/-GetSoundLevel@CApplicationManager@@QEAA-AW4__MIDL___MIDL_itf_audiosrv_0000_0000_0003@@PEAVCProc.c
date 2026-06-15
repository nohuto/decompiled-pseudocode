/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x18001D6CC
 * Callers:
 *     PbmGetSoundLevel @ 0x180002E2C (PbmGetSoundLevel.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180029B80 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180004998 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18001C6A0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180039D10 (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetSoundLevel(struct CApplication *a1, __int64 a2)
{
  CApplicationManager *v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CApplication *v5; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  bool v10; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v12; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v13; // [rsp+48h] [rbp-18h] BYREF
  char v14; // [rsp+50h] [rbp-10h]
  struct CApplication *v15; // [rsp+80h] [rbp+20h] BYREF

  v15 = a1;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  v13 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v13);
  v5 = *(struct CApplication **)(a2 + 224);
  v15 = v5;
  if ( !v5 )
  {
    if ( CApplicationManager::GetApplication(
           v3,
           *(const unsigned __int16 **)(a2 + 184),
           *(_DWORD *)(a2 + 172),
           &v15,
           0,
           0LL) < 0 )
    {
      v6 = (unsigned int)TsSessionIdIsMuted(*(_DWORD *)(a2 + 172)) == 0 ? 2 : 0;
      goto LABEL_7;
    }
    v5 = v15;
  }
  lpCriticalSection = v4;
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)v5 + 120) )
  {
    v6 = *((_DWORD *)v5 + 121);
  }
  else if ( *((_DWORD *)v5 + 28)
         || (v8 = (int)CApplication::Category((__int64)v5), (unsigned int)CApplication::HasBackgroundAudioTask(v5)) )
  {
    v6 = 2;
  }
  else if ( dword_1800C4CA0[v8] )
  {
    v6 = 2 - ((unsigned int)CApplication::HasDuckedStream(v5, v9, v10) != 0);
  }
  else
  {
    v6 = 0;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_7:
  if ( v14 )
    LeaveCriticalSection(v13);
  return v6;
}
