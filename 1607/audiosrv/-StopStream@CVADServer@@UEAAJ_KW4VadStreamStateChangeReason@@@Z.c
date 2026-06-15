/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009920
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800022C4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?reset@?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAXXZ @ 0x180005D98 (-reset@-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAXXZ.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800160A0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // r12
  __int64 v7; // r14
  int v8; // edi
  CAudioSession *v9; // rcx
  struct CAudioStream *v10; // rdx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(CAudioSession *__hidden, struct CAudioStream *); // rax
  int v13; // eax
  CAudioSession *v14; // rcx
  __int64 (__fastcall *v15)(CAudioSession *__hidden, unsigned int *); // rax
  int v16; // eax
  CAudioStream *v17; // rcx
  __int64 (*v18)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v20; // rcx
  __int64 (*v21)(void); // rax
  const WCHAR *Identifier; // rax
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v28; // [rsp+48h] [rbp-B8h]
  _DWORD v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h]
  _QWORD v31[16]; // [rsp+60h] [rbp-A0h] BYREF
  void *v32; // [rsp+E0h] [rbp-20h] BYREF
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  void *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  __int64 *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]

  v3 = *(unsigned __int8 *)(a1 + 204);
  v5 = *(unsigned int *)(a1 + 64);
  v7 = a3;
  v8 = 0;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v31, 0, 0x40uLL);
    HIDWORD(v31[5]) = 0x20000;
    *(_OWORD *)&v31[3] = AEWMIGUID_AUDIOSRV;
    LOWORD(v31[0]) = 120;
    WORD2(v31[0]) = 1026;
    v31[6] = 0LL;
    LODWORD(v31[7]) = 0;
    v31[8] = a1;
    v31[9] = v5;
    v31[10] = a2;
    v31[11] = v3;
    v31[12] = 0LL;
    v31[13] = v7;
    v31[14] = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v31);
  }
  v28 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 232);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 200) && (v9 = *(CAudioSession **)(a1 + 168)) != 0LL )
  {
    v10 = *(struct CAudioStream **)(a1 + 208);
    v11 = *((_QWORD *)v10 + 6);
    if ( a2 == v11 )
    {
      if ( (_DWORD)v7 == 2 )
        *(_DWORD *)(a1 + 328) = 0;
      if ( *(_BYTE *)(a1 + 204) )
      {
        v12 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *))(*(_QWORD *)v9 + 256LL);
        v13 = v12 == CAudioSession::StopStream ? CAudioSession::StopStream(v9, v10) : ((__int64 (*)(void))v12)();
        v8 = v13;
        if ( v13 >= 0 )
        {
          *(_BYTE *)(a1 + 204) = 0;
          if ( *(_QWORD *)(a1 + 208) )
          {
            v14 = *(CAudioSession **)(a1 + 168);
            if ( v14 )
            {
              v15 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)v14 + 120LL);
              v16 = v15 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v14, &v24) : v15(v14, &v24);
              if ( v16 >= 0 && dword_1800CA040 > 4u )
              {
                v17 = (CAudioStream *)(*(_QWORD *)(a1 + 208) + 8LL);
                v38 = &v25;
                v25 = v7;
                v39 = 4LL;
                v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 72LL);
                if ( (char *)v18 == (char *)CAudioStream::GetUniqueStreamIdentifier )
                  UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v17);
                else
                  UniqueStreamIdentifier = v18();
                v20 = *(CAudioSession **)(a1 + 168);
                v26 = UniqueStreamIdentifier;
                v40 = &v26;
                v41 = 8LL;
                v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 64LL);
                if ( (char *)v21 == (char *)CAudioSession::GetIdentifier )
                  Identifier = CAudioSession::GetIdentifier(v20);
                else
                  Identifier = (const WCHAR *)v21();
                TlgCreateWsz(&pDesc, Identifier);
                v44 = 4LL;
                v43 = &v24;
                v29[1] = 4;
                v32 = off_1800CA048;
                v29[0] = ((unsigned int)&unk_1800A8253 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v30 = 0LL;
                v33 = *(unsigned __int16 *)off_1800CA048;
                v35 = &unk_1800A825E;
                v34 = 2;
                v36 = 72;
                v37 = 1;
                EtwEventWriteTransfer(qword_1800CA060, v29, 0LL, 0LL, 6, &v32);
              }
            }
          }
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x27u,
          (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
          a2,
          v11);
      }
      v8 = -2147024809;
    }
  }
  else
  {
    v8 = -2004287487;
  }
  std::shared_ptr<CPdcTimerActivation>::reset((_QWORD *)(a1 + 336));
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::StopStream", 0x7EBu, v8);
  if ( v28 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
