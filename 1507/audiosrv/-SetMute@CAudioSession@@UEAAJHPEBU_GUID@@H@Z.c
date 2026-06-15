/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180010610
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180013660 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180079A2C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18007A1B0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x1800058A8 (--0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18000EA40 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x18000ED20 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x1800102B4 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     WPP_SF_Sdd @ 0x18007C238 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, struct _GUID *a3, int a4)
{
  int v5; // ebx
  char v6; // r12
  int v10; // r14d
  int v12; // eax
  CMuteGainStage *v13; // rax
  const struct _GUID *v14; // rdx
  CMuteGainStage *v15; // rdi
  __int64 (__fastcall *v16)(struct _RTL_CRITICAL_SECTION *, struct CGainStage *, const struct _GUID *); // rbp
  int v17; // eax
  void (__fastcall *v18)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rdi
  int v19; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v21; // [rsp+38h] [rbp-30h]

  v5 = 0;
  v6 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      34,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      a2);
  }
  v21 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 720);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = *((_DWORD *)this + 191);
  if ( v10 != a2 )
  {
    v6 = 1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_Sdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        35,
        (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((_QWORD *)this + 88),
        v10,
        a2);
    }
    v12 = CAudioSession::ResetPolicyGainStages(this);
    *((_DWORD *)this + 191) = a2;
    v5 = v12;
    if ( a2 )
    {
      v13 = (CMuteGainStage *)operator new(0x38uLL);
      if ( v13 )
        v15 = CMuteGainStage::CMuteGainStage(v13, v14);
      else
        v15 = 0LL;
      if ( v15 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_S(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            36LL,
            &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
            *((_QWORD *)this + 88));
        }
        v16 = *(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, struct CGainStage *, const struct _GUID *))(*((_QWORD *)this + 3) + 40LL);
        if ( v16 == CAudioSession::AddGainStage )
          v17 = CAudioSession::AddGainStage((struct _RTL_CRITICAL_SECTION *)((char *)this + 24), v15, a3);
        else
          v17 = v16((struct _RTL_CRITICAL_SECTION *)((char *)this + 24), v15, a3);
        v5 = v17;
        CRefCountedObject::Release(v15);
      }
    }
    else
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          37LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          *((_QWORD *)this + 88));
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
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          38,
          (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          *((_QWORD *)this + 88),
          v5);
      }
      *((_DWORD *)this + 191) = v10;
    }
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 && !a4 )
  {
    v18 = *(void (__fastcall **)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *))(*((_QWORD *)this + 2)
                                                                                              + 24LL);
    if ( v18 == CAudioSession::RecalculateSessionVolume )
    {
      CAudioSession::RecalculateSessionVolume((__int64)this + 16, 0, a3, 0xFFFFFFFF, 0, 0LL);
    }
    else
    {
      LOBYTE(v19) = 0;
      v18((__int64)this + 16, 0, a3, 0xFFFFFFFF, v19, 0LL);
    }
  }
  if ( v5 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      39LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}
