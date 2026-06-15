/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007F590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B598 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BC48 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18000BE18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180019EA0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007FB88 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     WPP_SF_Ddq @ 0x180080ED4 (WPP_SF_Ddq.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  CAudioSessionManager *v5; // r14
  signed int v6; // edi
  __int64 v7; // rax
  char *v8; // r13
  _BYTE *v9; // r12
  __int64 (__fastcall *v10)(struct IAudioProcess *); // rbx
  int v11; // ebx
  char v12; // r15
  __int64 *v13; // r12
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // esi
  struct IAudioProcess *v18; // rbx
  int v19; // r15d
  __int64 v20; // r15
  char *v21; // rax
  _BYTE *v22; // rax
  __int64 *v23; // r9
  __int64 v24; // r14
  struct CAudioSession *v25; // rdi
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // eax
  CAudioSessionManager *v29; // rcx
  struct CServerAudioSessionControl *v30; // rsi
  __int64 v31; // rax
  signed __int64 v32; // r15
  void **v33; // rdi
  __int64 v34; // r14
  unsigned int *v35; // rdx
  void ***v36; // rax
  unsigned __int16 ***v37; // rcx
  __int64 v38; // rcx
  int v40; // [rsp+40h] [rbp-C0h]
  signed int v41; // [rsp+44h] [rbp-BCh]
  struct CAudioSession *StartPosition; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+50h] [rbp-B0h]
  struct CServerAudioSessionControl *v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 *v46; // [rsp+68h] [rbp-98h]
  void ***v47; // [rsp+70h] [rbp-90h]
  unsigned int *v48; // [rsp+78h] [rbp-88h]
  struct IAudioProcess *v49; // [rsp+80h] [rbp-80h]
  unsigned __int16 ***v50; // [rsp+88h] [rbp-78h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-70h]
  _BYTE v52[80]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = this;
  v50 = a5;
  v6 = 0;
  v7 = *(_QWORD *)a2;
  v45 = (__int64)this;
  v8 = 0LL;
  v47 = a4;
  v9 = 0LL;
  v48 = a3;
  v10 = *(__int64 (__fastcall **)(struct IAudioProcess *))(v7 + 48);
  v49 = a2;
  v41 = 0;
  v40 = 0;
  v11 = v10(a2);
  v43 = v11;
  v12 = 0;
  *v47 = 0LL;
  *v50 = 0LL;
  *v48 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 24));
  v46 = (__int64 *)((char *)v5 + 64);
  StartPosition = (struct CAudioSession *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)v5 + 8);
  if ( !StartPosition )
    goto LABEL_17;
  v13 = v46;
  do
  {
    v14 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                       v13,
                       &StartPosition);
    if ( v14 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x34u,
          (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
          0LL);
      }
      v15 = *(_DWORD *)(v14 + 692);
      if ( !v15 || v15 == v11 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 24) + 24LL))(v14 + 24);
        v6 = v41;
        v11 = v43;
        if ( v16 )
          v12 = 1;
        if ( *(_DWORD *)(v14 + 324) != 2 )
          v6 = ++v41;
      }
    }
  }
  while ( StartPosition );
  v17 = 0;
  v9 = 0LL;
  v8 = 0LL;
  if ( !v12 )
  {
    v5 = (CAudioSessionManager *)v45;
LABEL_17:
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v52);
    StartPosition = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x35u,
        (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        v5,
        v11);
    }
    v18 = v49;
    v17 = CAudioSessionInstanceId::Initialize(
            (CAudioSessionInstanceId *)v52,
            v49,
            *((const unsigned __int16 **)v5 + 30),
            &GUID_SystemSounds_AudioSessionId,
            1);
    if ( v17 < 0 )
      goto LABEL_22;
    v17 = CAudioSessionManager::CreateAudioSession(
            v5,
            v18,
            (struct CAudioSessionInstanceId *)v52,
            0xEu,
            0,
            0,
            &StartPosition);
    if ( v17 < 0 )
    {
      if ( StartPosition )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)StartPosition + 16LL))(StartPosition);
LABEL_22:
      CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v52);
      v19 = 0;
      goto LABEL_62;
    }
    v41 = ++v6;
    if ( StartPosition )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)StartPosition + 16LL))(StartPosition);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v52);
  }
  v20 = v6;
  v45 = v6;
  v21 = (char *)MIDL_user_allocate(8LL * v6);
  v8 = v21;
  if ( !v21 || (memset_0(v21, 0, 8LL * v6), v22 = MIDL_user_allocate(8LL * v6), (v9 = v22) == 0LL) )
  {
    v17 = -2147024882;
    goto LABEL_76;
  }
  memset_0(v22, 0, 8LL * v6);
  StartPosition = (struct CAudioSession *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v46);
  if ( !StartPosition )
    goto LABEL_76;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = *(struct CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                      v23,
                                      &StartPosition);
    if ( !v25 )
      goto LABEL_54;
    v44 = 0LL;
    v26 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x36u,
        (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0LL);
      v26 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    v27 = *((_DWORD *)v25 + 173);
    if ( v27 )
    {
      if ( v27 != v43 )
        goto LABEL_54;
    }
    if ( *((_DWORD *)v25 + 81) == 2 )
      goto LABEL_54;
    if ( (struct _GUID *)v26 != &WPP_GLOBAL_Control && (*(_BYTE *)(v26 + 28) & 0x40) != 0 && *(_BYTE *)(v26 + 25) >= 4u )
      WPP_SF_qS(*(_QWORD *)(v26 + 16), 0x37u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v25, 0LL);
    v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v49 + 40LL))(v49);
    v17 = CAudioSessionManager::CreateAudioSessionControl(v29, v25, v28, 0, &v44);
    if ( v17 < 0 )
      break;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x39u,
        (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0LL);
    }
    if ( v24 >= v20 )
    {
LABEL_75:
      v6 = v41;
      goto LABEL_76;
    }
    v30 = v44;
    v19 = v40;
    *(_QWORD *)&v8[8 * v24] = v44;
    v17 = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, _BYTE *))(*(_QWORD *)v30 + 120LL))(
            v30,
            &v9[8 * v40]);
    if ( v17 < 0 )
      goto LABEL_61;
    v20 = v45;
    ++v40;
    ++v24;
LABEL_54:
    if ( !StartPosition )
      goto LABEL_75;
    v23 = v46;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x38u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v17);
  }
  v19 = v40;
LABEL_61:
  if ( v19 < 0 )
    goto LABEL_70;
LABEL_62:
  v31 = v19;
  v32 = v8 - v9;
  v33 = (void **)&v9[8 * v31];
  do
  {
    if ( v8 )
    {
      v34 = *(__int64 *)((char *)v33 + v32);
      if ( v34 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v34 + 16LL))(*(void **)((char *)v33 + v32));
    }
    if ( v9 && *v33 )
      operator delete(*v33);
    --v33;
    --v40;
  }
  while ( v40 >= 0 );
LABEL_70:
  if ( v8 )
    operator delete(v8);
  v8 = 0LL;
  if ( v9 )
    operator delete(v9);
  v9 = 0LL;
  v6 = 0;
LABEL_76:
  LeaveCriticalSection(lpCriticalSection);
  v35 = v48;
  v36 = v47;
  v37 = v50;
  *v48 = v6;
  *v36 = (void **)v8;
  *v37 = (unsigned __int16 **)v9;
  v38 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Ddq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      v35,
      &WPP_GLOBAL_Control,
      (unsigned int)v17,
      *v35,
      *v36);
    v38 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v17 < 0
    && (struct _GUID *)v38 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v38 + 28) & 0x40) != 0
    && *(_BYTE *)(v38 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v38 + 16), 0x3Bu, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v17);
  }
  return (unsigned int)v17;
}
