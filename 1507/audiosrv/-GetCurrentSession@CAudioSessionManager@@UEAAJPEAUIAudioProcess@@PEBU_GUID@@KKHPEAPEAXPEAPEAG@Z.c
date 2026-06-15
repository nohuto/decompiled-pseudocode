/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18002B720 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000BB70 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BC48 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18000BE18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x18000CB5C (--1CAppAudioSessionId@@QEAA@XZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180010DD0 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x1800178C8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180019DB0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E51C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  unsigned __int64 v16; // rdi
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  __int64 (__fastcall *v19)(CProcess *); // rdi
  unsigned int ProcessId; // eax
  __int64 (__fastcall *v21)(CProcess *); // rdi
  unsigned int v22; // eax
  _BOOL8 v23; // r8
  __int64 (__fastcall *v24)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // rdi
  int AudioSessionControl; // eax
  __int64 (__fastcall *v26)(CAudioSession *); // r14
  __int64 v27; // rcx
  CAudioSession *v29; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int16 *v30; // [rsp+48h] [rbp-89h] BYREF
  struct CServerAudioSessionControl *v31; // [rsp+50h] [rbp-81h] BYREF
  const struct _GUID *v32; // [rsp+58h] [rbp-79h]
  void **v33; // [rsp+60h] [rbp-71h]
  __int64 v34; // [rsp+70h] [rbp-61h] BYREF
  char v35[64]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-19h]

  v32 = a3;
  v33 = a7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v30,
    (volatile signed __int32 *)&ATL::g_strmgr);
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)&v34);
  v12 = 0LL;
  *a8 = 0LL;
  v13 = (const unsigned __int16 *)*((_QWORD *)this + 30);
  v31 = 0LL;
  v29 = 0LL;
  v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)&v34, a2, v13, a3, a6);
  if ( v14 < 0 || (v14 = CAudioSessionInstanceId::ToString((__int64)&v34, &v30), v14 < 0) )
  {
    v15 = v30;
    goto LABEL_38;
  }
  v15 = v30;
  v16 = (unsigned int)(*((_DWORD *)v30 - 4) + 1);
  if ( 2 * v16 > 0x40000 )
    v17 = 0LL;
  else
    v17 = (unsigned __int16 *)operator new(2 * v16);
  *a8 = v17;
  if ( !v17 )
  {
    v14 = -2147024882;
    goto LABEL_38;
  }
  v14 = StringCchCopyW(v17, v16, v15);
  if ( v14 < 0 )
  {
    operator delete(*a8);
    *a8 = 0LL;
    goto LABEL_24;
  }
  if ( a6 )
  {
    v18 = *(_QWORD *)&v32->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&v32->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v18 = *(_QWORD *)v32->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v18 )
      a4 |= 4u;
  }
  v19 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)a2 + 40LL);
  if ( v19 == CProcess::GetProcessId )
    ProcessId = CProcess::GetProcessId(a2);
  else
    ProcessId = v19(a2);
  v14 = CAudioSessionManager::CreateAudioSession(
          this,
          a2,
          (struct CAudioSessionInstanceId *)&v34,
          a4,
          a5,
          ProcessId,
          &v29);
  if ( v14 < 0 )
  {
    v12 = v29;
    goto LABEL_38;
  }
  v21 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)a2 + 40LL);
  if ( v21 == CProcess::GetProcessId )
    v22 = CProcess::GetProcessId(a2);
  else
    v22 = v21(a2);
  v24 = *(__int64 (__fastcall **)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)this + 104LL);
  v12 = v29;
  if ( v24 == CAudioSessionManager::GetAudioSessionControl )
  {
    AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(this, v22, 1, v29, &v31);
  }
  else
  {
    LOBYTE(v23) = 1;
    AudioSessionControl = v24(this, v22, v23, v29, &v31);
  }
  v14 = AudioSessionControl;
  if ( AudioSessionControl < 0 )
  {
LABEL_38:
    if ( *a8 )
    {
      operator delete(*a8);
      *a8 = 0LL;
    }
    goto LABEL_21;
  }
  *v33 = v31;
LABEL_21:
  if ( v12 )
  {
    v26 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 16LL);
    if ( v26 == CAudioSession::Release )
      CAudioSession::Release(v12);
    else
      v26(v12);
  }
LABEL_24:
  v27 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      73LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v14);
    v27 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v14 < 0
    && (struct _GUID *)v27 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v27 + 28) & 0x40) != 0
    && *(_BYTE *)(v27 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v27 + 16), 74LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, (unsigned int)v14);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  CAppAudioSessionId::~CAppAudioSessionId((CAppAudioSessionId *)v35);
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  return (unsigned int)v14;
}
