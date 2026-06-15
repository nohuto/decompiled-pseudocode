/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180062150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800018E4 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x1800282C0 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x18004F59C (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180050280 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800502E8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_qS @ 0x180055818 (WPP_SF_qS.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18006265C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     WPP_SF_Ddq @ 0x180063788 (WPP_SF_Ddq.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  __int64 v6; // rax
  char *v8; // r14
  _BYTE *v9; // r15
  signed int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  __int64 *v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  char *v16; // rax
  unsigned int *v17; // rdx
  void ***v18; // rax
  unsigned __int16 ***v19; // rcx
  _BYTE *v21; // rax
  __int64 v22; // rsi
  struct CAudioSession *v23; // rdi
  CAudioSession *v24; // rcx
  int v25; // eax
  unsigned int v26; // eax
  CAudioSessionManager *v27; // rcx
  struct CServerAudioSessionControl *v28; // rcx
  void **v29; // rdi
  __int64 v30; // rcx
  int v31; // [rsp+40h] [rbp-C0h]
  __int64 StartPosition; // [rsp+48h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+50h] [rbp-B0h] BYREF
  char v34; // [rsp+58h] [rbp-A8h]
  struct CServerAudioSessionControl *v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v36; // [rsp+68h] [rbp-98h]
  void ***v37; // [rsp+70h] [rbp-90h]
  unsigned __int16 ***v38; // [rsp+78h] [rbp-88h]
  struct CAudioSession *v39; // [rsp+80h] [rbp-80h] BYREF
  char *v40; // [rsp+88h] [rbp-78h]
  struct IAudioProcess *v41; // [rsp+90h] [rbp-70h]
  _BYTE v42[80]; // [rsp+A0h] [rbp-60h] BYREF

  v38 = a5;
  v6 = *(_QWORD *)a2;
  v37 = a4;
  v8 = 0LL;
  v36 = a3;
  v9 = 0LL;
  v41 = a2;
  v10 = 0;
  v31 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 48))(a2);
  v39 = 0LL;
  v11 = 0;
  *v37 = 0LL;
  *v38 = 0LL;
  *v36 = 0;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v42);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      this,
      v31);
  }
  v12 = CAudioSessionInstanceId::Initialize(
          (CAudioSessionInstanceId *)v42,
          a2,
          *((const unsigned __int16 **)this + 30),
          &GUID_SystemSounds_AudioSessionId,
          1);
  if ( v12 < 0
    || (v12 = CAudioSessionManager::CreateAudioSession(
                this,
                a2,
                (struct CAudioSessionInstanceId *)v42,
                0xEu,
                0,
                0,
                &v39),
        v12 < 0) )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v42);
    goto LABEL_65;
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v42);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v13 = (__int64 *)((char *)this + 64);
  v40 = (char *)this + 64;
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
  if ( StartPosition )
  {
    do
    {
      v14 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                         v13,
                         &StartPosition);
      if ( v14 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Eu,
            (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
            0LL);
        }
        v15 = *(_DWORD *)(v14 + 844);
        if ( (!v15 || v15 == v31) && *(_DWORD *)(v14 + 472) != 2 )
          ++v10;
      }
    }
    while ( StartPosition );
    v9 = 0LL;
    v11 = 0;
  }
  v16 = (char *)MIDL_user_allocate(8LL * v10);
  v8 = v16;
  if ( !v16 || (memset(v16, 0, 8LL * v10), v21 = MIDL_user_allocate(8LL * v10), (v9 = v21) == 0LL) )
  {
    v12 = -2147024882;
    goto LABEL_22;
  }
  memset(v21, 0, 8LL * v10);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v13);
  if ( !StartPosition )
  {
LABEL_22:
    if ( v34 )
      ATL::CCritSecLock::Unlock(&v33);
    goto LABEL_24;
  }
  v22 = 0LL;
  while ( 1 )
  {
    v23 = *(struct CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                      v40,
                                      &StartPosition);
    if ( !v23 )
      goto LABEL_56;
    v35 = 0LL;
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        0LL);
      v24 = WPP_GLOBAL_Control;
    }
    v25 = *((_DWORD *)v23 + 211);
    if ( v25 )
    {
      if ( v25 != v31 )
        goto LABEL_56;
    }
    if ( *((_DWORD *)v23 + 118) == 2 )
      goto LABEL_56;
    if ( v24 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v24 + 28) & 0x40) != 0 && *((_BYTE *)v24 + 25) >= 4u )
      WPP_SF_qS(*((_QWORD *)v24 + 2), 0x30u, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v23, 0LL);
    v26 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v41 + 40LL))(v41);
    v12 = CAudioSessionManager::CreateAudioSessionControl(v27, v23, v26, 0, &v35);
    if ( v12 < 0 )
      break;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x32u,
        (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        0LL);
    }
    if ( v22 >= v10 )
      goto LABEL_22;
    v28 = v35;
    *(_QWORD *)&v8[8 * v22] = v35;
    v12 = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, _BYTE *))(*(_QWORD *)v28 + 120LL))(
            v28,
            &v9[8 * v11]);
    if ( v12 < 0 )
      goto LABEL_62;
    ++v11;
    ++v22;
LABEL_56:
    if ( !StartPosition )
      goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v12);
  }
LABEL_62:
  if ( v34 )
    ATL::CCritSecLock::Unlock(&v33);
  if ( v11 >= 0 )
  {
LABEL_65:
    v29 = (void **)&v9[8 * v11];
    do
    {
      if ( v8 )
      {
        v30 = *(__int64 *)((char *)v29 + v8 - v9);
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      if ( v9 && *v29 )
        operator delete(*v29);
      --v29;
      --v11;
    }
    while ( v11 >= 0 );
  }
  if ( v8 )
    operator delete(v8);
  v8 = 0LL;
  if ( v9 )
    operator delete(v9);
  v9 = 0LL;
  v10 = 0;
LABEL_24:
  v17 = v36;
  v18 = v37;
  v19 = v38;
  *v36 = v10;
  *v18 = (void **)v8;
  *v19 = (unsigned __int16 **)v9;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Ddq(*((_QWORD *)WPP_GLOBAL_Control + 2), v17, &WPP_GLOBAL_Control, (unsigned int)v12, *v17, *v18);
  }
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessions", 1369, v12);
  if ( v39 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v39 + 16LL))(v39);
  return (unsigned int)v12;
}
