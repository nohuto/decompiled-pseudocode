/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x180028300 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180005F40 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x18000DB44 (-Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800102F0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180012460 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800124C0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18002A378 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        const unsigned __int16 **this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v13)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v14; // rax
  struct ATL::CStringData *(__fastcall *v15)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v16; // rax
  struct ATL::CStringData *(__fastcall *v17)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v18; // rax
  struct ATL::CStringData *(__fastcall *v19)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v20; // rax
  struct ATL::CStringData *(__fastcall *v21)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v22; // rax
  const unsigned __int16 *v23; // rdx
  CAudioSession *v24; // rsi
  int v25; // r14d
  char *v26; // rbx
  __int64 v27; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int16 v32; // cx
  __int64 v33; // rax
  int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // r9d
  CAudioSessionManager *v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // r8
  int (*v40)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // r10
  int AudioSessionControl; // eax
  unsigned int (__fastcall *v42)(CAudioSession *__hidden); // rax
  char *v43; // rdx
  ATL::CAtlStringMgr **v44; // rdx
  char *v45; // rdx
  ATL::CAtlStringMgr **v46; // rdx
  ATL::CAtlStringMgr **v47; // rdx
  ATL::CAtlStringMgr **v48; // rdx
  void (*v50)(void); // rax
  void (*v51)(void); // rax
  void (*v52)(void); // rax
  void (*v53)(void); // rax
  void **v54; // rbx
  CAudioSession *v56; // [rsp+50h] [rbp-91h] BYREF
  struct CServerAudioSessionControl *v57; // [rsp+58h] [rbp-89h] BYREF
  char *v58; // [rsp+60h] [rbp-81h] BYREF
  CAudioSessionManager *v59; // [rsp+68h] [rbp-79h]
  void **v60; // [rsp+70h] [rbp-71h]
  volatile signed __int32 *v61; // [rsp+80h] [rbp-61h] BYREF
  volatile signed __int32 *v62; // [rsp+88h] [rbp-59h] BYREF
  volatile signed __int32 *v63; // [rsp+90h] [rbp-51h]
  GUID v64; // [rsp+98h] [rbp-49h]
  volatile signed __int32 *v65; // [rsp+A8h] [rbp-39h]
  int v66; // [rsp+B0h] [rbp-31h]
  _DWORD v67[4]; // [rsp+B8h] [rbp-29h] BYREF
  volatile signed __int32 *v68; // [rsp+C8h] [rbp-19h]

  v60 = a7;
  v59 = (CAudioSessionManager *)this;
  v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v11 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v58 = (char *)NilString + 24;
  v13 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v13 == ATL::CAtlStringMgr::GetNilString )
    v14 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v14 = v13((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v61 = (volatile signed __int32 *)((char *)v14 + 24);
  v15 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v15 == ATL::CAtlStringMgr::GetNilString )
    v16 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v16 = v15((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v62 = (volatile signed __int32 *)((char *)v16 + 24);
  v17 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v17 == ATL::CAtlStringMgr::GetNilString )
    v18 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v18 = v17((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v63 = (volatile signed __int32 *)((char *)v18 + 24);
  v19 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v19 == ATL::CAtlStringMgr::GetNilString )
    v20 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v20 = v19((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v67[1] = -1;
  v65 = (volatile signed __int32 *)((char *)v20 + 24);
  v64 = GUID_00000000_0000_0000_0000_000000000000;
  v66 = 0;
  v67[0] = 0;
  v21 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  v67[2] = 0;
  if ( v21 == ATL::CAtlStringMgr::GetNilString )
    v22 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v22 = v21((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *a8 = 0LL;
  v23 = this[30];
  v68 = (volatile signed __int32 *)((char *)v22 + 24);
  v24 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v25 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v61, v23);
  if ( v25 < 0
    || (v25 = CAppAudioSessionId::Initialize((CAppAudioSessionId *)&v62, a2, a3, a6), v25 < 0)
    || (v25 = CAppInstanceId::Initialize((CAppInstanceId *)v67, a2, a6), v25 < 0)
    || (v25 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v61), v25 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x382u, v25);
  }
  if ( v25 < 0 )
    goto LABEL_83;
  v25 = CAudioSessionInstanceId::ToString(&v61, &v58);
  if ( v25 < 0 )
    goto LABEL_83;
  v26 = v58;
  v27 = (unsigned int)(*((_DWORD *)v58 - 4) + 1);
  if ( (unsigned __int64)(2 * v27) > 0x40000 )
  {
    v54 = (void **)a8;
    *a8 = 0LL;
LABEL_87:
    v25 = -2147024882;
LABEL_84:
    if ( *v54 )
    {
      operator delete(*v54);
      *v54 = 0LL;
    }
    goto LABEL_42;
  }
  ProcessHeap = GetProcessHeap();
  v29 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, 2 * v27);
  *a8 = v29;
  if ( !v29 )
  {
    v54 = (void **)a8;
    goto LABEL_87;
  }
  v25 = 0;
  if ( (unsigned __int64)(v27 - 1) > 0x7FFFFFFE )
    v25 = -2147024809;
  if ( v25 >= 0 )
  {
    v25 = 0;
    if ( v27 )
    {
      v30 = 2147483646 - v27;
      v31 = v26 - (char *)v29;
      while ( v30 + v27 )
      {
        v32 = *(unsigned __int16 *)((char *)v29 + v31);
        if ( !v32 )
          break;
        *v29++ = v32;
        if ( !--v27 )
          goto LABEL_77;
      }
    }
    else
    {
LABEL_77:
      --v29;
      v25 = -2147024774;
    }
    goto LABEL_30;
  }
  if ( v27 )
LABEL_30:
    *v29 = 0;
  if ( v25 < 0 )
  {
    operator delete(*a8);
    *a8 = 0LL;
    goto LABEL_45;
  }
  if ( a6 )
  {
    v33 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v33 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    v34 = a4;
    if ( !v33 )
      v34 = a4 | 4;
  }
  else
  {
    v34 = a4;
  }
  v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v36 = v34;
  v37 = v59;
  v25 = CAudioSessionManager::CreateAudioSession(v59, a2, (struct CAudioSessionInstanceId *)&v61, v36, a5, v35, &v56);
  if ( v25 < 0 )
  {
    v24 = v56;
LABEL_83:
    v54 = (void **)a8;
    goto LABEL_84;
  }
  v38 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v24 = v56;
  LOBYTE(v39) = 1;
  v40 = *(int (**)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)v37 + 104LL);
  if ( v40 == CAudioSessionManager::GetAudioSessionControl )
    AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(v37, v38, 1, v56, &v57);
  else
    AudioSessionControl = ((__int64 (__fastcall *)(CAudioSessionManager *, _QWORD, __int64, CAudioSession *, struct CServerAudioSessionControl **))v40)(
                            v37,
                            v38,
                            v39,
                            v56,
                            &v57);
  v25 = AudioSessionControl;
  if ( AudioSessionControl < 0 )
    goto LABEL_83;
  *v60 = v57;
LABEL_42:
  if ( v24 )
  {
    v42 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v24 + 16LL);
    if ( v42 == CAudioSession::Release )
      CAudioSession::Release(v24);
    else
      v42(v24);
  }
LABEL_45:
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      (unsigned int)v25);
  }
  if ( v25 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x73Du, v25);
  v43 = (char *)(v68 - 6);
  if ( _InterlockedExchangeAdd(v68 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v43 + 8LL))(*(_QWORD *)v43);
  v44 = (ATL::CAtlStringMgr **)(v65 - 6);
  if ( _InterlockedExchangeAdd(v65 - 2, 0xFFFFFFFF) <= 1 )
  {
    v50 = *(void (**)(void))(*(_QWORD *)*v44 + 8LL);
    if ( (char *)v50 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*v44, (struct ATL::CStringData *)v44);
    else
      v50();
  }
  v45 = (char *)(v63 - 6);
  if ( _InterlockedExchangeAdd(v63 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v45 + 8LL))(*(_QWORD *)v45);
  v46 = (ATL::CAtlStringMgr **)(v62 - 6);
  if ( _InterlockedExchangeAdd(v62 - 2, 0xFFFFFFFF) <= 1 )
  {
    v53 = *(void (**)(void))(*(_QWORD *)*v46 + 8LL);
    if ( (char *)v53 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*v46, (struct ATL::CStringData *)v46);
    else
      v53();
  }
  v47 = (ATL::CAtlStringMgr **)(v61 - 6);
  if ( _InterlockedExchangeAdd(v61 - 2, 0xFFFFFFFF) <= 1 )
  {
    v51 = *(void (**)(void))(*(_QWORD *)*v47 + 8LL);
    if ( (char *)v51 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*v47, (struct ATL::CStringData *)v47);
    else
      v51();
  }
  v48 = (ATL::CAtlStringMgr **)(v58 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v58 - 2, 0xFFFFFFFF) <= 1 )
  {
    v52 = *(void (**)(void))(*(_QWORD *)*v48 + 8LL);
    if ( (char *)v52 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*v48, (struct ATL::CStringData *)v48);
    else
      v52();
  }
  return (unsigned int)v25;
}
