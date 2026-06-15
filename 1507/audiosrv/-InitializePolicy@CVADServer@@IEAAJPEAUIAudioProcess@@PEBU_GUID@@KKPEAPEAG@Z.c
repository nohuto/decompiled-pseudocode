/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000AF90 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000BB70 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18000CF40 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18000D408 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x18000DCA0 (-SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z.c)
 *     ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180010DC0 (-GetTsSessionId@CProcess@@UEAAKXZ.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180010DD0 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180010E80 (-IsPackagedApp@CProcess@@UEAAHXZ.c)
 *     ?GetModuleName@CProcess@@UEAAPEBGXZ @ 0x180010E90 (-GetModuleName@CProcess@@UEAAPEBGXZ.c)
 *     ?GetApplicationId@CProcess@@UEAAPEBGXZ @ 0x180012240 (-GetApplicationId@CProcess@@UEAAPEBGXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18002B1B0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180066D84 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  CVADServer *v9; // rsi
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *NilString; // rax
  char *v12; // rdi
  struct _GUID v13; // xmm0
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 (__fastcall *v17)(CProcess *); // rsi
  int IsPackagedApp; // eax
  unsigned int v19; // eax
  int AudioSession; // r14d
  unsigned int v21; // r14d
  __int64 (__fastcall *v22)(CProcess *); // rbx
  int v23; // eax
  CAudioSessionInstanceId *v24; // r15
  __int64 v25; // r12
  GUID v26; // xmm0
  CProcess *v27; // r12
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(CProcess *); // rbx
  int v30; // eax
  __int64 v31; // rbx
  HANDLE ProcessHeap; // rax
  char *v33; // rax
  void **v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int16 v37; // cx
  CAudioSessionManagerProvider *v38; // rbx
  __int64 (__fastcall *v39)(__int64); // rsi
  CVADServer *v40; // r14
  const unsigned __int16 *v41; // r14
  __int64 (__fastcall *v42)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rsi
  int AudioSessionManager; // eax
  __int64 v44; // r14
  CVADServer *v45; // r14
  struct CAudioSessionManager *v46; // r9
  void (__fastcall *v47)(CAudioSessionManagerProvider *); // rsi
  CDuckingManager *v48; // rbx
  unsigned int v49; // esi
  __int64 (__fastcall *v50)(CProcess *); // r14
  unsigned int TsSessionId; // eax
  void (__fastcall *v52)(CDuckingManager *, unsigned int, unsigned int); // r15
  __int64 v53; // rax
  unsigned int v54; // ebx
  const unsigned __int16 *(__fastcall *v56)(CProcess *); // r14
  const unsigned __int16 *ApplicationId; // rax
  const unsigned __int16 *(__fastcall *v58)(CProcess *); // r14
  const unsigned __int16 *ModuleName; // rax
  __int64 (__fastcall *v60)(CProcess *); // rbx
  int v61; // eax
  void (__fastcall *v62)(CAudioSessionManagerProvider *); // rsi
  unsigned int v63; // [rsp+40h] [rbp-79h]
  bool v64; // [rsp+44h] [rbp-75h]
  unsigned int v65; // [rsp+48h] [rbp-71h]
  __int64 v68; // [rsp+60h] [rbp-59h] BYREF
  struct CAudioSessionManager *v69; // [rsp+68h] [rbp-51h] BYREF
  char *v70; // [rsp+70h] [rbp-49h] BYREF
  __int64 v71; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v72; // [rsp+80h] [rbp-39h]
  int v73; // [rsp+84h] [rbp-35h] BYREF
  CAudioSessionInstanceId *v74; // [rsp+88h] [rbp-31h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-29h] BYREF
  char v76; // [rsp+98h] [rbp-21h]
  const struct _GUID *v77; // [rsp+A0h] [rbp-19h]
  __int64 v78; // [rsp+A8h] [rbp-11h]
  GUID v79; // [rsp+B0h] [rbp-9h] BYREF

  v78 = -2LL;
  v77 = a3;
  v9 = this;
  v69 = (struct CAudioSessionManager *)a6;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v12 = (char *)NilString + 24;
  v70 = (char *)NilString + 24;
  v13 = *a3;
  v79 = *a3;
  v71 = 0LL;
  v68 = 0LL;
  v14 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      24LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v9,
      a4);
    v14 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    *(_QWORD *)&v13.Data1 = *(_QWORD *)&v79.Data1;
  }
  v15 = *(_QWORD *)v79.Data4;
  v16 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v16 = *(_QWORD *)v79.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v16 )
  {
    v17 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)a2 + 88LL);
    if ( v17 == CProcess::IsPackagedApp )
    {
      IsPackagedApp = CProcess::IsPackagedApp(a2);
    }
    else
    {
      IsPackagedApp = v17(a2);
      v14 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    a4 |= IsPackagedApp != 0 ? 0x20000000 : 0;
    v9 = this;
  }
  v64 = (a4 & 0x10000) != 0;
  v72 = a4 & 0x60000000;
  v19 = (a4 & 0x10000000) != 0;
  v65 = v19;
  if ( (a4 & 0xA0000) == 0 )
  {
    v19 |= 2u;
    v65 = v19;
  }
  if ( (struct _GUID *)v14 != &WPP_GLOBAL_Control && (*(_DWORD *)(v14 + 28) & 0x100) != 0 && *(_BYTE *)(v14 + 25) >= 4u )
    WPP_SF_qD(*(_QWORD *)(v14 + 16), 25LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, v9, v19 & 2);
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)v9 + 29),
                   &v71);
  v63 = AudioSession;
  if ( AudioSession < 0 )
    goto LABEL_167;
  if ( v68 != v71 )
  {
    v68 = 0LL;
    if ( v71 )
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v71)(v71, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v68);
  }
  if ( !v68 )
  {
    AudioSession = -2147467262;
LABEL_166:
    v63 = AudioSession;
    goto LABEL_167;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v68 + 24LL))(v68, &v73);
  v63 = AudioSession;
  if ( AudioSession < 0 )
  {
LABEL_167:
    v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_168;
  }
  v21 = v65;
  if ( !v73 )
  {
    v21 = v65 | 8;
LABEL_27:
    v65 = v21;
    goto LABEL_28;
  }
  if ( v73 == 1 )
  {
    v21 = v65 & 0xFFFFFFFD;
    goto LABEL_27;
  }
LABEL_28:
  v22 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)a2 + 88LL);
  if ( v22 == CProcess::IsPackagedApp )
    v23 = CProcess::IsPackagedApp(a2);
  else
    v23 = v22(a2);
  if ( !v23 && (a4 & 0x2000000) != 0 )
    v65 = v21 | 0x20;
  *((_DWORD *)this + 73) = a4;
  v24 = (CVADServer *)((char *)this + 72);
  v74 = (CVADServer *)((char *)this + 72);
  AudioSession = CAudioEndpointId::Initialize(
                   (CVADServer *)((char *)this + 72),
                   *((const unsigned __int16 **)this + 29));
  v63 = AudioSession;
  if ( AudioSession >= 0 )
  {
    if ( !v64 )
      goto LABEL_38;
    v25 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v25 = v15 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v25 )
    {
      AudioSession = -2147024809;
      v63 = -2147024809;
      v27 = a2;
    }
    else
    {
LABEL_38:
      if ( &v79 )
        v26 = v79;
      else
        v26 = GUID_00000000_0000_0000_0000_000000000000;
      *((GUID *)this + 6) = v26;
      v27 = a2;
      if ( !v64 )
      {
        v56 = *(const unsigned __int16 *(__fastcall **)(CProcess *))(*(_QWORD *)a2 + 72LL);
        if ( v56 == CProcess::GetApplicationId )
          ApplicationId = CProcess::GetApplicationId(a2);
        else
          ApplicationId = v56(a2);
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 88, ApplicationId);
        v58 = *(const unsigned __int16 *(__fastcall **)(CProcess *))(*(_QWORD *)a2 + 80LL);
        if ( v58 == CProcess::GetModuleName )
          ModuleName = CProcess::GetModuleName(a2);
        else
          ModuleName = v58(a2);
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 80, ModuleName);
      }
      *((_DWORD *)this + 30) = v64;
      AudioSession = CAppAudioSessionId::CalculateStaticId((const void **)this + 10);
      v63 = AudioSession;
      if ( AudioSession >= 0 )
        goto LABEL_42;
    }
    v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
    {
      goto LABEL_43;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      16LL,
      &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
      (unsigned int)AudioSession);
LABEL_42:
    v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_43:
    if ( AudioSession >= 0 )
    {
      *((_DWORD *)this + 34) = v64;
      if ( v64 )
      {
        *((_DWORD *)this + 32) = 0;
      }
      else
      {
        v60 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v27 + 40LL);
        v61 = v60 == CProcess::GetProcessId ? CProcess::GetProcessId(v27) : v60(v27);
        *((_DWORD *)this + 32) = v61;
      }
      v29 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v27 + 48LL);
      v30 = v29 == CProcess::GetTsSessionId ? CProcess::GetTsSessionId(v27) : v29(v27);
      *((_DWORD *)this + 33) = v30;
      AudioSession = CAudioSessionInstanceId::CalculateStaticId(v24);
      v63 = AudioSession;
      v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( AudioSession >= 0 )
        goto LABEL_49;
    }
    goto LABEL_140;
  }
  v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  v27 = a2;
LABEL_140:
  if ( (struct _GUID *)v28 != &WPP_GLOBAL_Control && (*(_BYTE *)(v28 + 28) & 0x40) != 0 && *(_BYTE *)(v28 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v28 + 16), 24LL, &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids, (unsigned int)AudioSession);
    v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
LABEL_49:
  if ( AudioSession >= 0 )
  {
    AudioSession = CAudioSessionInstanceId::ToString((__int64)v24, &v70);
    v63 = AudioSession;
    v12 = v70;
    if ( AudioSession >= 0 )
    {
      v31 = (unsigned int)(*((_DWORD *)v70 - 4) + 1);
      if ( (unsigned __int64)(2 * v31) > 0x40000 )
      {
        *(_QWORD *)v69 = 0LL;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v33 = (char *)HeapAlloc(ProcessHeap, 0, 2 * v31);
        v34 = (void **)v69;
        *(_QWORD *)v69 = v33;
        if ( v33 )
        {
          AudioSession = 0;
          v63 = 0;
          if ( (unsigned __int64)(v31 - 1) > 0x7FFFFFFE )
          {
            AudioSession = -2147024809;
            v63 = -2147024809;
          }
          if ( AudioSession < 0 )
          {
            if ( !v31 )
              goto LABEL_63;
          }
          else
          {
            AudioSession = 0;
            v63 = 0;
            if ( v31 )
            {
              v35 = 2147483646 - v31;
              v36 = v12 - v33;
              while ( v35 + v31 )
              {
                v37 = *(_WORD *)&v33[v36];
                if ( !v37 )
                  break;
                *(_WORD *)v33 = v37;
                v33 += 2;
                if ( !--v31 )
                  goto LABEL_145;
              }
            }
            else
            {
LABEL_145:
              v33 -= 2;
              AudioSession = -2147024774;
              v63 = -2147024774;
            }
          }
          *(_WORD *)v33 = 0;
LABEL_63:
          if ( AudioSession < 0 )
          {
            operator delete(*v34);
            *v34 = 0LL;
          }
          else
          {
            lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
            v76 = 0;
            ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
            v38 = g_SingletonAudioSessionManagerProvider;
            if ( !g_SingletonAudioSessionManagerProvider )
            {
              if ( v76 )
                LeaveCriticalSection(lpCriticalSection);
              v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  0x1Du,
                  (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
                v28 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
              }
              AudioSession = -2004287487;
              v63 = -2004287487;
              goto LABEL_168;
            }
            v39 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
            if ( v39 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
              ATL::CComObject<CAudioSessionManagerProvider>::AddRef((__int64)g_SingletonAudioSessionManagerProvider);
            else
              v39((__int64)g_SingletonAudioSessionManagerProvider);
            ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
              || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0 )
            {
              v40 = this;
            }
            else
            {
              v40 = this;
              if ( *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
                WPP_SF_S(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  26LL,
                  &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
                  *((_QWORD *)this + 29));
            }
            v41 = (const unsigned __int16 *)*((_QWORD *)v40 + 29);
            v42 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v38 + 40LL);
            if ( v42 == CAudioSessionManagerProvider::GetAudioSessionManager )
              AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v38, v41, &v69);
            else
              AudioSessionManager = v42(v38, v41, &v69);
            AudioSession = AudioSessionManager;
            v63 = AudioSessionManager;
            if ( AudioSessionManager < 0 )
            {
              v62 = *(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v38 + 16LL);
              if ( (char *)v62 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
                ATL::CComObject<CAudioSessionManagerProvider>::Release(v38);
              else
                v62(v38);
            }
            else
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_q(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  27LL,
                  &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
                  *((_QWORD *)this + 19));
              }
              v44 = *((_QWORD *)this + 19);
              if ( v44 )
              {
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 16LL))(*((_QWORD *)this + 19));
                v45 = this;
                *((_QWORD *)this + 19) = 0LL;
              }
              else
              {
                v45 = this;
              }
              v46 = v69;
              *((_QWORD *)v45 + 19) = v69;
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_q(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  28LL,
                  &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
                  v46);
              }
              v47 = *(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v38 + 16LL);
              if ( (char *)v47 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
                ATL::CComObject<CAudioSessionManagerProvider>::Release(v38);
              else
                v47(v38);
              v48 = g_DuckingManager;
              if ( g_DuckingManager )
              {
                v49 = a5;
                if ( a5 > 3 )
                  v49 = 1;
                v50 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v27 + 48LL);
                if ( v50 == CProcess::GetTsSessionId )
                {
                  TsSessionId = CProcess::GetTsSessionId(v27);
                }
                else
                {
                  TsSessionId = v50(v27);
                  v48 = g_DuckingManager;
                }
                v52 = *(void (__fastcall **)(CDuckingManager *, unsigned int, unsigned int))(*(_QWORD *)v48 + 48LL);
                if ( v52 == CDuckingManager::SetUserDuckingPreference )
                  CDuckingManager::SetUserDuckingPreference(v48, v49, TsSessionId);
                else
                  v52(v48, v49, TsSessionId);
                v45 = this;
                v24 = v74;
              }
              if ( v64 )
              {
                v53 = *(_QWORD *)&v77->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                if ( *(_QWORD *)&v77->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                  v53 = *(_QWORD *)v77->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                v54 = v65;
                if ( !v53 )
                  v54 = v65 | 4;
              }
              else
              {
                v54 = v65;
              }
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_q(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  30LL,
                  &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
                  v45);
              }
              AudioSession = CAudioSessionManager::CreateAudioSession(
                               *((CAudioSessionManager **)v45 + 19),
                               v27,
                               v24,
                               v54,
                               v72,
                               *((_DWORD *)v45 + 16),
                               (struct CAudioSession **)v45 + 21);
              v63 = AudioSession;
            }
          }
          if ( AudioSession >= 0 )
            goto LABEL_105;
          goto LABEL_167;
        }
      }
      AudioSession = -2147024882;
      goto LABEL_166;
    }
    goto LABEL_167;
  }
LABEL_168:
  if ( (struct _GUID *)v28 != &WPP_GLOBAL_Control && (*(_DWORD *)(v28 + 28) & 0x100) != 0 && *(_BYTE *)(v28 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v28 + 16), 31LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, (unsigned int)AudioSession);
LABEL_105:
  if ( v68 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
  if ( v71 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v12 - 3) + 8LL))(*((_QWORD *)v12 - 3), v12 - 24);
  return v63;
}
