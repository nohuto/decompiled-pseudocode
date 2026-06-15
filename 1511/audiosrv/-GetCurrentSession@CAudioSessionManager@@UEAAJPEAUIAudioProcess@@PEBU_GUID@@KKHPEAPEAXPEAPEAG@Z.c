/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x180037D30 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x180011CA0 (--1CAppAudioSessionId@@QEAA@XZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014BB0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180014D68 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x180014E70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180016FD0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180018850 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180028B80 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180037010 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  CAudioSession *v12; // rsi
  const unsigned __int16 *v13; // r8
  int v14; // edi
  unsigned __int16 *v15; // rbx
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rcx
  SIZE_T v18; // rdi
  unsigned __int16 *v19; // rax
  HANDLE ProcessHeap; // rax
  unsigned int (__fastcall *v21)(CProcess *__hidden); // rdi
  unsigned int ProcessId; // eax
  unsigned int (__fastcall *v23)(CProcess *__hidden); // rdi
  unsigned int v24; // eax
  __int64 v25; // r8
  int (*v26)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // rdi
  int AudioSessionControl; // eax
  unsigned int (__fastcall *v28)(CAudioSession *__hidden); // r14
  TraceLoggingHProvider v29; // rcx
  unsigned __int16 *v31; // [rsp+40h] [rbp-91h] BYREF
  struct CAudioSession *v32; // [rsp+48h] [rbp-89h] BYREF
  struct CServerAudioSessionControl *v33; // [rsp+50h] [rbp-81h] BYREF
  const struct _GUID *v34; // [rsp+58h] [rbp-79h]
  void **v35; // [rsp+60h] [rbp-71h]
  __int64 v36; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v37[64]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-19h]

  v34 = a3;
  v35 = a7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v31, &ATL::g_strmgr);
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)&v36);
  v12 = 0LL;
  *a8 = 0LL;
  v13 = (const unsigned __int16 *)*((_QWORD *)this + 30);
  v33 = 0LL;
  v32 = 0LL;
  v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)&v36, a2, v13, a3, a6);
  if ( v14 < 0 || (v14 = CAudioSessionInstanceId::ToString((__int64)&v36, &v31), v14 < 0) )
  {
    v15 = v31;
    goto LABEL_28;
  }
  v15 = v31;
  v16 = (unsigned __int16 *)(unsigned int)(*((_DWORD *)v31 - 4) + 1);
  v17 = v16;
  v31 = v16;
  v18 = 2LL * (_QWORD)v16;
  if ( (unsigned __int64)(2LL * (_QWORD)v16) <= 0x40000 )
  {
    ProcessHeap = GetProcessHeap();
    v19 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v18);
    v17 = v31;
  }
  else
  {
    v19 = 0LL;
  }
  *a8 = v19;
  if ( !v19 )
  {
    v14 = -2147024882;
    goto LABEL_28;
  }
  v14 = StringCchCopyW(v19, (unsigned __int64)v17, v15);
  if ( v14 < 0 )
  {
    operator delete(*a8);
    *a8 = 0LL;
    goto LABEL_34;
  }
  if ( a6
    && *(_QWORD *)&v34->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1
    && *(_QWORD *)v34->Data4 == *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 )
  {
    a4 |= 4u;
  }
  v21 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v21 == CProcess::GetProcessId )
    ProcessId = CProcess::GetProcessId(a2);
  else
    ProcessId = v21(a2);
  v14 = CAudioSessionManager::CreateAudioSession(
          this,
          a2,
          (struct CAudioSessionInstanceId *)&v36,
          a4,
          a5,
          ProcessId,
          &v32);
  if ( v14 < 0 )
  {
    v12 = v32;
    goto LABEL_28;
  }
  v23 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v23 == CProcess::GetProcessId )
    v24 = CProcess::GetProcessId(a2);
  else
    v24 = v23(a2);
  v26 = *(int (**)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)this + 104LL);
  v12 = v32;
  if ( v26 == CAudioSessionManager::GetAudioSessionControl )
  {
    AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(this, v24, 1, v32, &v33);
  }
  else
  {
    LOBYTE(v25) = 1;
    AudioSessionControl = ((__int64 (__fastcall *)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, struct CServerAudioSessionControl **))v26)(
                            this,
                            v24,
                            v25,
                            v32,
                            &v33);
  }
  v14 = AudioSessionControl;
  if ( AudioSessionControl < 0 )
  {
LABEL_28:
    if ( *a8 )
    {
      operator delete(*a8);
      *a8 = 0LL;
    }
    goto LABEL_30;
  }
  *v35 = v33;
LABEL_30:
  if ( v12 )
  {
    v28 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v28 == CAudioSession::Release )
      CAudioSession::Release(v12);
    else
      v28(v12);
  }
LABEL_34:
  v29 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      73LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v14);
    v29 = WPP_GLOBAL_Control;
  }
  if ( v14 < 0
    && v29 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v29 + 28) & 0x40) != 0
    && *((_BYTE *)v29 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v29 + 2), 74LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, (unsigned int)v14);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  CAppAudioSessionId::~CAppAudioSessionId((CAppAudioSessionId *)v37);
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  return (unsigned int)v14;
}
