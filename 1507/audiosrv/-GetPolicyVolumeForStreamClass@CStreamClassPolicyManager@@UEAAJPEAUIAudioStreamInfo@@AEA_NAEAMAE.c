/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x1800217C0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000CA44 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180010BA0 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180010D00 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180010DC0 (-GetTsSessionId@CProcess@@UEAAKXZ.c)
 *     ?IsInteractive@CProcess@@UEAAHXZ @ 0x180010EA0 (-IsInteractive@CProcess@@UEAAHXZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x18001DF80 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x18001DF90 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x180030658 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAI@Z @ 0x180030AA0 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSimpleM.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180043758 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180073F04 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180074EA4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009EF9C (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamInfo *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  __int64 (__fastcall *v6)(CAudioStream *__hidden, struct IAudioSessionInfo **); // rbx
  int SessionInfo; // eax
  signed int PolicyVolumeForStreamClass; // edi
  __int64 (__fastcall *v9)(CAudioSession *__hidden, struct IAudioProcess **); // rdi
  int v10; // eax
  unsigned int (__fastcall *v11)(CAudioStream *__hidden); // rbx
  unsigned int Category; // eax
  unsigned int v13; // r14d
  CProcess *v14; // rsi
  const unsigned __int16 *(__fastcall *v15)(CAudioSession *__hidden); // rdi
  const unsigned __int16 *EndpointId; // rax
  __int64 v17; // r14
  __int64 (__fastcall *v18)(CProcess *__hidden); // rbx
  int IsInteractive; // eax
  unsigned int (__fastcall *v20)(CProcess *__hidden); // rbx
  unsigned int TsSessionId; // eax
  DWORD v22; // ebx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  struct TSSession *v25; // r13
  struct ATL::CStringData *(__fastcall *v26)(ATL::CAtlStringMgr *__hidden); // rbx
  unsigned int *NilString; // rax
  unsigned __int16 v28; // dx
  unsigned int *v29; // rbx
  __int64 v30; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rsi
  rsize_t v33; // r9
  int v34; // r8d
  int v35; // r9d
  unsigned __int16 **v36; // r10
  unsigned __int16 *v37; // rax
  signed __int64 v38; // rdx
  unsigned __int16 v39; // cx
  int v40; // eax
  ATL::CCriticalSection *v41; // rsi
  volatile signed __int32 *v42; // rbx
  void (*v43)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r15
  unsigned int (__fastcall *v44)(CAudioSession *__hidden); // rsi
  ATL::CCriticalSection *v46; // rax
  bool v47; // bl
  unsigned int v48; // edx
  int v49; // eax
  HINSTANCE StringResourceInstance; // rax
  CProcess *v51; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v52; // [rsp+38h] [rbp-48h] BYREF
  int v53; // [rsp+40h] [rbp-40h]
  CAudioSession *v54; // [rsp+48h] [rbp-38h] BYREF
  struct TSSession *v55; // [rsp+50h] [rbp-30h] BYREF
  ATL::CCriticalSection *v56; // [rsp+58h] [rbp-28h] BYREF
  char *v57; // [rsp+60h] [rbp-20h] BYREF
  struct TSSession *v58; // [rsp+68h] [rbp-18h]
  __int64 v59; // [rsp+70h] [rbp-10h]
  unsigned int v60; // [rsp+C8h] [rbp+48h]

  v59 = -2LL;
  v54 = 0LL;
  v51 = 0LL;
  v6 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioSessionInfo **))(*(_QWORD *)a2 + 24LL);
  if ( v6 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(a2, &v54);
  else
    SessionInfo = v6(a2, &v54);
  PolicyVolumeForStreamClass = SessionInfo;
  if ( SessionInfo < 0 )
    goto LABEL_55;
  v9 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct IAudioProcess **))(*(_QWORD *)v54 + 24LL);
  v10 = v9 == CAudioSession::GetProcess ? CAudioSession::GetProcess(v54, &v51) : v9(v54, &v51);
  PolicyVolumeForStreamClass = v10;
  if ( v10 < 0 )
    goto LABEL_55;
  v11 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v11 == CAudioStream::GetCategory )
    Category = CAudioStream::GetCategory(a2);
  else
    Category = v11(a2);
  v13 = Category;
  v60 = Category;
  v14 = v51;
  PolicyVolumeForStreamClass = 0;
  if ( Category >= 0x15 )
    PolicyVolumeForStreamClass = -2147024809;
  if ( PolicyVolumeForStreamClass >= 0 )
  {
    if ( dword_1800C6740[Category] )
    {
      if ( (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v51 + 88LL))(v51) )
      {
        if ( !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v14 + 120LL))(v14) )
          v13 = 0;
        v60 = v13;
      }
      v14 = v51;
    }
    v15 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v54 + 72LL);
    if ( v15 == CAudioSession::GetEndpointId )
    {
      EndpointId = CAudioSession::GetEndpointId(v54);
    }
    else
    {
      EndpointId = v15(v54);
      v14 = v51;
    }
    v17 = (__int64)EndpointId;
    v18 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v14 + 96LL);
    if ( v18 == CProcess::IsInteractive )
      IsInteractive = CProcess::IsInteractive(v14);
    else
      IsInteractive = v18(v14);
    v53 = IsInteractive;
    v20 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v14 + 48LL);
    if ( v20 == CProcess::GetTsSessionId )
      TsSessionId = CProcess::GetTsSessionId(v14);
    else
      TsSessionId = v20(v14);
    v22 = TsSessionId;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v55 = 0LL;
    v23 = qword_1800E88D0;
    while ( 1 )
    {
      v24 = v23;
      if ( !v23 )
        break;
      v23 = (_QWORD *)*v23;
      v25 = (struct TSSession *)v24[2];
      v58 = v25;
      if ( v22 == *(_DWORD *)v25 )
      {
        v55 = v25;
        goto LABEL_23;
      }
    }
    v49 = TsSessionCreate(v22, 0LL, &v55);
    PolicyVolumeForStreamClass = v49;
    if ( v49 )
    {
      if ( v49 > 0 )
        PolicyVolumeForStreamClass = (unsigned __int16)v49 | 0x80070000;
      goto LABEL_54;
    }
    v25 = v55;
LABEL_23:
    v26 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v26 == ATL::CAtlStringMgr::GetNilString )
      NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = (unsigned int *)v26((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v29 = NilString + 6;
    v52 = NilString + 6;
    if ( v17 )
    {
      if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v17, v28);
        if ( !StringResourceInstance )
        {
LABEL_37:
          v34 = 0;
          v35 = *((_DWORD *)v25 + 42);
          if ( v35 <= 0 )
            goto LABEL_62;
          v36 = (unsigned __int16 **)*((_QWORD *)v25 + 19);
          while ( 1 )
          {
            if ( !v29 )
              ATL::AtlThrowImpl(-2147467259);
            v37 = *v36;
            v38 = (char *)v29 - (char *)*v36;
            while ( 1 )
            {
              v39 = *v37;
              if ( *v37 != *(unsigned __int16 *)((char *)v37 + v38) )
                break;
              ++v37;
              if ( !v39 )
              {
                v40 = 0;
                goto LABEL_44;
              }
            }
            v40 = v39 < *(unsigned __int16 *)((char *)v37 + v38) ? -1 : 1;
LABEL_44:
            if ( !v40 )
              break;
            ++v34;
            ++v36;
            if ( v34 >= v35 )
              goto LABEL_62;
          }
          if ( v34 == -1 )
          {
LABEL_62:
            v41 = 0LL;
          }
          else
          {
            if ( v34 < 0 || v34 >= v35 )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              JUMPOUT(0x18004E072LL);
            }
            v41 = *(ATL::CCriticalSection **)(*((_QWORD *)v25 + 20) + 8LL * v34);
          }
          v42 = (volatile signed __int32 *)(v29 - 6);
          if ( _InterlockedExchangeAdd(v42 + 4, 0xFFFFFFFF) <= 1 )
          {
            v43 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v42 + 8LL);
            if ( v43 == ATL::CAtlStringMgr::Free )
              ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v42, (struct ATL::CStringData *)v42);
            else
              ((void (__fastcall *)(_QWORD, volatile signed __int32 *))v43)(*(_QWORD *)v42, v42);
          }
          if ( v41 )
            goto LABEL_53;
          v46 = (ATL::CCriticalSection *)operator new(0x810uLL);
          v41 = v46;
          v58 = v46;
          if ( v46 )
          {
            v56 = v46;
            ATL::CCriticalSection::CCriticalSection(v46);
            `eh vector constructor iterator'(
              (char *)v41 + 40,
              0x30uLL,
              21,
              ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::`default constructor closure',
              ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
            `eh vector constructor iterator'(
              (char *)v41 + 1048,
              0x30uLL,
              21,
              ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::`default constructor closure',
              ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
            *((_QWORD *)v41 + 257) = (char *)v55 + 336;
          }
          else
          {
            v41 = 0LL;
          }
          v56 = v41;
          if ( v41 )
          {
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
              &v57,
              v17);
            v47 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::Add(
                                  (char *)v25 + 152,
                                  &v57,
                                  &v56) == 0;
            ATL::CStringData::Release((ATL::CStringData *)(v57 - 24));
            if ( !v47 )
            {
LABEL_53:
              PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                             v41,
                                             v60,
                                             v53,
                                             a3,
                                             a4,
                                             a5);
              goto LABEL_54;
            }
            PolicyVolumeForStreamClass = -2147024882;
            CStreamClassPolicyGainsWrapper::`scalar deleting destructor'(v41, v48);
          }
          else
          {
            PolicyVolumeForStreamClass = -2147024882;
          }
LABEL_54:
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
LABEL_55:
          v14 = v51;
          goto LABEL_56;
        }
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v52,
          StringResourceInstance,
          (unsigned __int16)v17);
LABEL_91:
        v29 = v52;
        goto LABEL_37;
      }
      v30 = -1LL;
      do
        ++v30;
      while ( *(_WORD *)(v17 + 2 * v30) );
      if ( (_DWORD)v30 )
      {
        v31 = NilString[2];
        v32 = (v17 - (__int64)v29) >> 1;
        if ( (int)((1 - NilString[4]) | (NilString[3] - v30)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v52, (unsigned int)v30);
          v29 = v52;
        }
        v33 = 2LL * (int)v30;
        if ( v32 <= v31 )
          memmove_s(v29, v33, (char *)v29 + 2 * v32, v33);
        else
          memcpy_s(v29, v33, (const void *const)v17, v33);
        if ( (int)v30 < 0 || (int)v30 > (int)*(v29 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *(v29 - 4) = v30;
        *((_WORD *)v29 + (int)v30) = 0;
        goto LABEL_37;
      }
    }
    ATL::CSimpleStringT<unsigned short,0>::Empty(&v52);
    goto LABEL_91;
  }
LABEL_56:
  if ( v14 )
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v54 )
  {
    v44 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v54 + 16LL);
    if ( v44 == CAudioSession::Release )
      CAudioSession::Release(v54);
    else
      v44(v54);
  }
  return (unsigned int)PolicyVolumeForStreamClass;
}
