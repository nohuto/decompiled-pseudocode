/*
 * XREFs of ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800129EC
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180012AF8 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x180012E90 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800037A0 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     Template_zq @ 0x180005150 (Template_zq.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_SSd @ 0x1800A3CDC (WPP_SF_SSd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::SendSoundLevelNotification(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *Next; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  _QWORD *v10; // [rsp+60h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      14LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      a2);
  }
  v10 = *(_QWORD **)(a1 + 64);
  while ( v10 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v10);
    v6 = *Next;
    if ( (*(_BYTE *)(*Next + 428) & 1) != 0 && !*(_DWORD *)(v6 + 416) )
    {
      v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SSd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          *(_QWORD *)(a1 + 16),
          *(_DWORD *)(v6 + 168));
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x80u) != 0 )
        Template_zq(v7, (__int64)&EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, *(const wchar_t **)(a1 + 16), a2);
      CProcess::SendPBMNotification(v6, 0);
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
