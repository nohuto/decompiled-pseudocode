/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180013304
 * Callers:
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180016498 (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 *     PbmGetSoundLevel @ 0x180016B40 (PbmGetSoundLevel.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x1800122B4 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x180012F34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x18001A4E8 (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(struct CApplication *a1, __int64 a2)
{
  CApplicationManager *v3; // rdi
  struct CApplication *v4; // rdx
  unsigned int SoundLevel; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]
  struct CApplication *v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = a1;
  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(struct CApplication **)(a2 + 224);
  v9 = v4;
  if ( !v4 )
  {
    if ( (int)CApplicationManager::GetApplication(
                v3,
                *(const unsigned __int16 **)(a2 + 184),
                *(_DWORD *)(a2 + 172),
                &v9,
                0,
                0LL) < 0 )
    {
      SoundLevel = (unsigned int)TsSessionIdIsMuted(*(_DWORD *)(a2 + 172)) == 0 ? 2 : 0;
      goto LABEL_6;
    }
    v4 = v9;
  }
  SoundLevel = CApplicationManager::GetSoundLevel((__int64)v3, (__int64)v4);
LABEL_6:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return SoundLevel;
}
