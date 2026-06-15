/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180035270 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180074DC4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800755F0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180025F70 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180027F58 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x18003A880 (--0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     WPP_SF_Sdd @ 0x180077528 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, struct _GUID *a3, int a4)
{
  int v5; // ebx
  char v6; // r12
  int v10; // r14d
  int v12; // eax
  CMuteGainStage *v13; // rax
  const struct _GUID *v14; // rdx
  __int64 v15; // r8
  bool v16; // r9
  struct CGainStage *v17; // rdi
  __int64 (__fastcall *v18)(CAudioSession *, struct CGainStage *, const struct _GUID *); // rbp
  int v19; // eax
  void (__fastcall *v20)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rdi
  int v21; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-30h]

  v5 = 0;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      a2);
  }
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = *((_DWORD *)this + 229);
  if ( v10 != a2 )
  {
    v6 = 1;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35,
        (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        *((_QWORD *)this + 107),
        v10,
        a2);
    }
    v12 = CAudioSession::ResetPolicyGainStages(this);
    *((_DWORD *)this + 229) = a2;
    v5 = v12;
    if ( a2 )
    {
      v13 = (CMuteGainStage *)operator new(0x38uLL);
      if ( v13 )
        v17 = CMuteGainStage::CMuteGainStage(v13, v14, v15, v16);
      else
        v17 = 0LL;
      if ( v17 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            36LL,
            &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
            *((_QWORD *)this + 107));
        }
        v18 = *(__int64 (__fastcall **)(CAudioSession *, struct CGainStage *, const struct _GUID *))(*((_QWORD *)this + 3) + 40LL);
        if ( v18 == CAudioSession::AddGainStage )
          v19 = CAudioSession::AddGainStage((CAudioSession *)((char *)this + 24), v17, a3);
        else
          v19 = v18((CAudioSession *)((char *)this + 24), v17, a3);
        v5 = v19;
        CRefCountedObject::Release(v17);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          37LL,
          &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          *((_QWORD *)this + 107));
      }
      v5 = (*(__int64 (__fastcall **)(char *, __int128 *, struct _GUID *, _QWORD, _QWORD))(*((_QWORD *)this + 3) + 48LL))(
             (char *)this + 24,
             &MutePolicyGuid,
             a3,
             0LL,
             0LL);
    }
    if ( v5 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          38,
          (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          *((_QWORD *)this + 107),
          v5);
      }
      *((_DWORD *)this + 229) = v10;
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 && !a4 )
  {
    v20 = *(void (__fastcall **)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *))(*((_QWORD *)this + 2)
                                                                                              + 24LL);
    if ( v20 == CAudioSession::RecalculateSessionVolume )
    {
      CAudioSession::RecalculateSessionVolume((__int64)this + 16, 0, a3, 0xFFFFFFFF, 0, 0LL);
    }
    else
    {
      LOBYTE(v21) = 0;
      v20((__int64)this + 16, 0, a3, 0xFFFFFFFF, v21, 0LL);
    }
  }
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}
