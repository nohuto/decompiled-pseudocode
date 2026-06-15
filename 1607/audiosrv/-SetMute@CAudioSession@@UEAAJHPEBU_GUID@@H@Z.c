/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180008A60 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18005D820 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180013590 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180015318 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800279B0 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x180027A54 (--0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     WPP_SF_Sdd @ 0x18005FB38 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, struct _GUID *a3, int a4)
{
  struct CGainStage *v4; // rsi
  int v6; // edi
  char v7; // r12
  int v10; // r15d
  int v12; // eax
  int v13; // ecx
  CMuteGainStage *v14; // rax
  const struct _GUID *v15; // rdx
  __int64 v16; // r8
  bool v17; // r9
  CAudioSession *v18; // rcx
  __int64 (__fastcall *v19)(CAudioSession *, struct CGainStage *, const struct _GUID *); // rax
  int v20; // eax
  bool v21; // zf
  __int64 (__fastcall *v22)(CAudioSession *__hidden, unsigned int *); // rax
  int ProcessId; // eax
  __int64 v24; // r10
  const WCHAR *v25; // rdx
  __int64 v26; // r10
  char *v27; // rcx
  void (__fastcall *v28)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *); // rax
  int v29; // [rsp+20h] [rbp-89h]
  unsigned int v30; // [rsp+40h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-61h] BYREF
  char v32; // [rsp+50h] [rbp-59h]
  _DWORD v33[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v34; // [rsp+60h] [rbp-49h]
  void *v35; // [rsp+70h] [rbp-39h] BYREF
  int v36; // [rsp+78h] [rbp-31h]
  int v37; // [rsp+7Ch] [rbp-2Dh]
  void *v38; // [rsp+80h] [rbp-29h]
  int v39; // [rsp+88h] [rbp-21h]
  int v40; // [rsp+8Ch] [rbp-1Dh]
  int *v41; // [rsp+90h] [rbp-19h]
  __int64 v42; // [rsp+98h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int *v44; // [rsp+B0h] [rbp+7h]
  __int64 v45; // [rsp+B8h] [rbp+Fh]
  int v46; // [rsp+118h] [rbp+6Fh] BYREF

  v46 = a2;
  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((_QWORD *)this + 107),
      a2);
  }
  v32 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = *((_DWORD *)this + 229);
  if ( v10 != v46 )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22,
        (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((_QWORD *)this + 107),
        v10,
        v46);
    }
    v12 = CAudioSession::ResetPolicyGainStages(this);
    v13 = v46;
    v6 = v12;
    *((_DWORD *)this + 229) = v46;
    if ( v13 )
    {
      v14 = (CMuteGainStage *)operator new(0x38uLL);
      if ( v14 )
        v4 = CMuteGainStage::CMuteGainStage(v14, v15, v16, v17);
      if ( v4 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23LL,
            &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            *((_QWORD *)this + 107));
        }
        v18 = (CAudioSession *)((char *)this + 24);
        v19 = *(__int64 (__fastcall **)(CAudioSession *, struct CGainStage *, const struct _GUID *))(*((_QWORD *)this + 3) + 40LL);
        if ( v19 == CAudioSession::AddGainStage )
          v20 = CAudioSession::AddGainStage(v18, v4, a3);
        else
          v20 = v19(v18, v4, a3);
        v6 = v20;
        CRefCountedObject::Release(v4);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          24LL,
          &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          *((_QWORD *)this + 107));
      }
      v6 = (*(__int64 (__fastcall **)(char *, __int128 *, struct _GUID *, _QWORD, _QWORD))(*((_QWORD *)this + 3) + 48LL))(
             (char *)this + 24,
             &MutePolicyGuid,
             a3,
             0LL,
             0LL);
    }
    v21 = v6 == 0;
    if ( v6 >= 0 )
    {
      v22 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)this + 120LL);
      if ( v22 == CAudioSession::GetProcessId )
        ProcessId = CAudioSession::GetProcessId(this, &v30);
      else
        ProcessId = v22(this, &v30);
      if ( ProcessId >= 0
        && dword_1800CA040 > 4u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
      {
        v25 = (const WCHAR *)*((_QWORD *)this + 107);
        v41 = &v46;
        v42 = v24;
        TlgCreateWsz(&pDesc, v25);
        v45 = v26;
        v44 = &v30;
        v33[1] = 4;
        v34 = 0x400000000000LL;
        v35 = off_1800CA048;
        v33[0] = ((unsigned int)&unk_1800A7ECF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v36 = *(unsigned __int16 *)off_1800CA048;
        v38 = &unk_1800A7EDA;
        v37 = 2;
        v39 = 72;
        v40 = 1;
        EtwEventWriteTransfer(qword_1800CA060, v33, 0LL, 0LL, 5, &v35);
      }
      v21 = v6 == 0;
    }
    if ( !v21 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25,
          (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          *((_QWORD *)this + 107),
          v6);
      }
      *((_DWORD *)this + 229) = v10;
    }
  }
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v7 && !a4 )
  {
    v27 = (char *)this + 16;
    LOBYTE(v29) = 0;
    v28 = *(void (__fastcall **)(__int64, unsigned int, GUID *, unsigned int, char, __int64 *))(*((_QWORD *)this + 2)
                                                                                              + 24LL);
    if ( v28 == CAudioSession::RecalculateSessionVolume )
      CAudioSession::RecalculateSessionVolume((__int64)v27, 0, a3, 0xFFFFFFFF, 0, 0LL);
    else
      v28((__int64)v27, 0, a3, 0xFFFFFFFF, v29, 0LL);
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetMute", 0x453u, v6);
  return (unsigned int)v6;
}
