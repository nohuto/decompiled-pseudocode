/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?AcquireTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800093E8 (-AcquireTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180012E30 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800160A0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // r12
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  CAudioSession *v12; // rcx
  struct CAudioStream *v13; // rdx
  __int64 (__fastcall *v14)(CAudioSession *__hidden, struct CAudioStream *); // rax
  int started; // eax
  CAudioSession *v16; // rcx
  __int64 (__fastcall *v17)(CAudioSession *__hidden, unsigned int *); // rax
  int v18; // eax
  CAudioStream *v19; // rcx
  __int64 (*v20)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v22; // rcx
  __int64 (*v23)(void); // rax
  const WCHAR *Identifier; // rax
  struct IAudioProcess *Process; // rbx
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v31; // [rsp+48h] [rbp-B8h]
  _DWORD v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  _QWORD v34[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v36[16]; // [rsp+160h] [rbp+60h] BYREF
  void *v37; // [rsp+1E0h] [rbp+E0h] BYREF
  int v38; // [rsp+1E8h] [rbp+E8h]
  int v39; // [rsp+1ECh] [rbp+ECh]
  void *v40; // [rsp+1F0h] [rbp+F0h]
  int v41; // [rsp+1F8h] [rbp+F8h]
  int v42; // [rsp+1FCh] [rbp+FCh]
  int *v43; // [rsp+200h] [rbp+100h]
  __int64 v44; // [rsp+208h] [rbp+108h]
  __int64 *v45; // [rsp+210h] [rbp+110h]
  __int64 v46; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF
  unsigned int *v48; // [rsp+230h] [rbp+130h]
  __int64 v49; // [rsp+238h] [rbp+138h]

  v3 = *(unsigned __int8 *)(a1 + 204);
  v5 = *(unsigned int *)(a1 + 64);
  v7 = a3;
  v8 = 0;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v34, 0, 0x40uLL);
    v34[9] = v5;
    LOWORD(v34[0]) = 120;
    HIDWORD(v34[5]) = 0x20000;
    *(_OWORD *)&v34[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v34[0]) = 1026;
    v34[12] = 1LL;
    v34[6] = 0LL;
    LODWORD(v34[7]) = 0;
    v34[8] = a1;
    v34[10] = a2;
    v34[11] = v3;
    v34[13] = v7;
    v34[14] = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v34);
  }
  v31 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 200) || !*(_QWORD *)(a1 + 168) )
  {
    v8 = -2004287487;
    goto LABEL_32;
  }
  v9 = *(_QWORD *)(a1 + 208);
  v10 = *(_QWORD *)(v9 + 48);
  if ( a2 != v10 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x24u,
        (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
        a2,
        v10);
    }
    v8 = -2147024809;
    goto LABEL_32;
  }
  if ( (_DWORD)v7 == 2 )
    *(_DWORD *)(a1 + 328) = 1;
  if ( *(_BYTE *)(v9 + 120) && (_DWORD)v7 == 2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
    }
    goto LABEL_28;
  }
  if ( !*(_BYTE *)(a1 + 204) )
  {
    v11 = *(unsigned int *)(a1 + 64);
    if ( g_u32AEWMILogLevel >= 4 )
    {
      memset(v35, 0, 0x40uLL);
      HIDWORD(v35[5]) = 0x20000;
      *(_OWORD *)&v35[3] = AEWMIGUID_AUDIOSRV;
      LOWORD(v35[0]) = 120;
      WORD2(v35[0]) = 1026;
      v35[6] = 0LL;
      LODWORD(v35[7]) = 0;
      v35[8] = a1;
      v35[9] = v11;
      v35[10] = a2;
      v35[11] = 0LL;
      v35[12] = 1LL;
      v35[13] = v7;
      v35[14] = 1LL;
      EtwLogTraceEvent(g_hAEWMITraceHandle, v35);
    }
    v12 = *(CAudioSession **)(a1 + 168);
    v13 = *(struct CAudioStream **)(a1 + 208);
    v14 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *))(*(_QWORD *)v12 + 248LL);
    if ( v14 == CAudioSession::StartStream )
      started = CAudioSession::StartStream(v12, v13);
    else
      started = v14(v12, v13);
    v8 = started;
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 204) = 1;
      CVADServer::AcquireTimerActivationRequest((CVADServer *)a1);
      if ( *(_QWORD *)(a1 + 208) )
      {
        v16 = *(CAudioSession **)(a1 + 168);
        if ( v16 )
        {
          v17 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)v16 + 120LL);
          v18 = v17 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v16, &v27) : v17(v16, &v27);
          if ( v18 >= 0 && dword_1800CA040 > 4u )
          {
            v19 = (CAudioStream *)(*(_QWORD *)(a1 + 208) + 8LL);
            v43 = &v28;
            v28 = v7;
            v44 = 4LL;
            v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 72LL);
            if ( (char *)v20 == (char *)CAudioStream::GetUniqueStreamIdentifier )
              UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v19);
            else
              UniqueStreamIdentifier = v20();
            v22 = *(CAudioSession **)(a1 + 168);
            v29 = UniqueStreamIdentifier;
            v45 = &v29;
            v46 = 8LL;
            v23 = *(__int64 (**)(void))(*(_QWORD *)v22 + 64LL);
            if ( (char *)v23 == (char *)CAudioSession::GetIdentifier )
              Identifier = CAudioSession::GetIdentifier(v22);
            else
              Identifier = (const WCHAR *)v23();
            TlgCreateWsz(&pDesc, Identifier);
            v49 = 4LL;
            v48 = &v27;
            v32[1] = 4;
            v37 = off_1800CA048;
            v32[0] = ((unsigned int)&unk_1800A82A7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v33 = 0LL;
            v38 = *(unsigned __int16 *)off_1800CA048;
            v40 = &unk_1800A82B2;
            v39 = 2;
            v41 = 72;
            v42 = 1;
            EtwEventWriteTransfer(qword_1800CA060, v32, 0LL, 0LL, 6, &v37);
          }
        }
      }
      Process = CAudioSession::GetProcess(*(CAudioSession **)(a1 + 168));
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 48LL))(Process);
      IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 16LL))(Process);
LABEL_27:
      if ( v8 >= 0 )
        goto LABEL_28;
    }
LABEL_32:
    AudSrvTraceLoggingErrorHelper("CVADServer::StartStream", 0x77Cu, v8);
    goto LABEL_28;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
  }
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v36, 0, 0x40uLL);
    HIDWORD(v36[5]) = 0x20000;
    LOWORD(v36[0]) = 120;
    v36[9] = *(unsigned int *)(a1 + 64);
    v36[11] = *(unsigned __int8 *)(a1 + 204);
    *(_OWORD *)&v36[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v36[0]) = 1026;
    v36[6] = 0LL;
    LODWORD(v36[7]) = 0;
    v36[8] = a1;
    v36[10] = a2;
    v36[12] = 1LL;
    v36[13] = v7;
    v36[14] = 3LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v36);
    goto LABEL_27;
  }
LABEL_28:
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
