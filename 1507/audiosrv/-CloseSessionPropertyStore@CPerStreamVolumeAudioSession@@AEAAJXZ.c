/*
 * XREFs of ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035354
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180013780 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180013F3C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800778C0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007A690 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x1800335B4 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180035BC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180036D68 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CloseSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  CPolicyConfig *v4; // rcx
  unsigned __int16 *v5; // rbx
  unsigned int (__fastcall *v6)(CAudioSessionStore *__hidden); // r14
  ATL::CStringData *v7; // rcx
  unsigned __int16 *v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 792);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 792));
  if ( *((_QWORD *)this + 104) )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v8);
    if ( (int)CAudioSessionInstanceId::ToPersistedString((char *)this + 632, &v8, 1LL) < 0 )
    {
      v7 = (ATL::CStringData *)(v8 - 12);
    }
    else
    {
      v4 = *(CPolicyConfig **)&WPP_GLOBAL_Control.Data1;
      v5 = v8;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_Sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          165,
          (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          (_DWORD)v8,
          *((_QWORD *)this + 104));
      }
      CPolicyConfig::ReleaseAudioSessionPropertyStore(v4, v5);
      v6 = *(unsigned int (__fastcall **)(CAudioSessionStore *__hidden))(**((_QWORD **)this + 104) + 16LL);
      if ( v6 == CAudioSessionStore::Release )
        CAudioSessionStore::Release(*((CAudioSessionStore **)this + 104));
      else
        v6(*((CAudioSessionStore **)this + 104));
      *((_QWORD *)this + 104) = 0LL;
      v7 = (ATL::CStringData *)(v5 - 12);
    }
    ATL::CStringData::Release(v7);
  }
  LeaveCriticalSection(v1);
  return 0LL;
}
