/*
 * XREFs of ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035594
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180035770 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x1800360F4 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800361A0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180072540 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180075AD0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180014C88 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18001AFB4 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180036C70 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CloseSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  CPolicyConfig *v3; // rcx
  unsigned __int16 *v4; // rbx
  unsigned int (__fastcall *v5)(CAudioSessionStore *__hidden); // r14
  ATL::CStringData *v6; // rcx
  unsigned __int16 *v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 944);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  if ( *((_QWORD *)this + 123) )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v8);
    if ( (int)CAudioSessionInstanceId::ToPersistedString((__int64 *)this + 98, (__int64)&v8, 1) < 0 )
    {
      v6 = (ATL::CStringData *)(v8 - 12);
    }
    else
    {
      v3 = WPP_GLOBAL_Control;
      v4 = v8;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          165,
          (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          (_DWORD)v8,
          *((_QWORD *)this + 123));
      }
      CPolicyConfig::ReleaseAudioSessionPropertyStore(v3, v4);
      v5 = *(unsigned int (__fastcall **)(CAudioSessionStore *__hidden))(**((_QWORD **)this + 123) + 16LL);
      if ( v5 == CAudioSessionStore::Release )
        CAudioSessionStore::Release(*((CAudioSessionStore **)this + 123));
      else
        v5(*((CAudioSessionStore **)this + 123));
      *((_QWORD *)this + 123) = 0LL;
      v6 = (ATL::CStringData *)(v4 - 12);
    }
    ATL::CStringData::Release(v6);
  }
  LeaveCriticalSection(v1);
  return 0LL;
}
