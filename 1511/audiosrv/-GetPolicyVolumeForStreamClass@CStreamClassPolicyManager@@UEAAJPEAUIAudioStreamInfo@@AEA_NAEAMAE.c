/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800188F0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180019040 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x1800206A0 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x1800206B0 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800289A0 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180028B10 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180028B70 (-GetTsSessionId@CProcess@@UEAAKXZ.c)
 *     ?IsInteractive@CProcess@@UEAAHXZ @ 0x180028C50 (-IsInteractive@CProcess@@UEAAHXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAI@Z @ 0x18002ED60 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSimpleM.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18003835C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180047698 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180071D20 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800750C4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009BDD0 (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamInfo *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  __int64 (__fastcall *v6)(CAudioStream *, struct IAudioSessionInfo **); // rbx
  int SessionInfo; // eax
  signed int PolicyVolumeForStreamClass; // edi
  __int64 (__fastcall *v9)(CAudioSession *, struct IAudioProcess **); // rdi
  int v10; // eax
  __int64 (__fastcall *v11)(CAudioStream *); // rbx
  unsigned int Category; // eax
  unsigned int v13; // r14d
  CProcess *v14; // rsi
  const unsigned __int16 *(__fastcall *v15)(CAudioSession *); // rdi
  const unsigned __int16 *EndpointId; // rax
  __int64 v17; // r14
  _BOOL8 (__fastcall *v18)(CProcess *); // rbx
  int IsInteractive; // eax
  __int64 (__fastcall *v20)(CProcess *); // rbx
  DWORD TsSessionId; // eax
  DWORD v22; // ebx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  struct TSSession *v25; // r13
  struct ATL::CStringData *(__fastcall *v26)(ATL::CAtlStringMgr *); // rbx
  unsigned int *NilString; // rax
  unsigned __int16 v28; // dx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int *v31; // rbx
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rsi
  rsize_t v35; // r9
  int v36; // r8d
  int v37; // r9d
  char **v38; // r10
  char *v39; // rax
  signed __int64 v40; // rdx
  unsigned __int16 v41; // cx
  int v42; // eax
  struct _RTL_CRITICAL_SECTION *v43; // rsi
  volatile signed __int32 *v44; // rbx
  void (__fastcall *v45)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // r15
  __int64 (__fastcall *v46)(CAudioSession *); // rsi
  struct _RTL_CRITICAL_SECTION *v48; // rax
  bool v49; // bl
  unsigned int v50; // edx
  int v51; // eax
  HINSTANCE StringResourceInstance; // rax
  CProcess *v53; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v54; // [rsp+38h] [rbp-48h] BYREF
  int v55; // [rsp+40h] [rbp-40h]
  CAudioSession *v56; // [rsp+48h] [rbp-38h] BYREF
  struct TSSession *v57; // [rsp+50h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v58; // [rsp+58h] [rbp-28h] BYREF
  __int64 v59; // [rsp+60h] [rbp-20h] BYREF
  void *v60; // [rsp+68h] [rbp-18h]
  __int64 v61; // [rsp+70h] [rbp-10h]
  unsigned int v62; // [rsp+C8h] [rbp+48h]

  v61 = -2LL;
  v56 = 0LL;
  v53 = 0LL;
  v6 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioSessionInfo **))(*(_QWORD *)a2 + 24LL);
  if ( v6 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(a2, &v56);
  else
    SessionInfo = v6(a2, &v56);
  PolicyVolumeForStreamClass = SessionInfo;
  if ( SessionInfo < 0 )
    goto LABEL_55;
  v9 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)v56 + 24LL);
  v10 = v9 == CAudioSession::GetProcess ? CAudioSession::GetProcess(v56, &v53) : v9(v56, &v53);
  PolicyVolumeForStreamClass = v10;
  if ( v10 < 0 )
    goto LABEL_55;
  v11 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 40LL);
  if ( v11 == CAudioStream::GetCategory )
    Category = CAudioStream::GetCategory(a2);
  else
    Category = v11(a2);
  v13 = Category;
  v62 = Category;
  v14 = v53;
  PolicyVolumeForStreamClass = 0;
  if ( Category >= 0x15 )
    PolicyVolumeForStreamClass = -2147024809;
  if ( PolicyVolumeForStreamClass >= 0 )
  {
    if ( dword_1800C4CF0[Category] )
    {
      if ( (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v53 + 88LL))(v53) )
      {
        if ( !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v14 + 120LL))(v14) )
          v13 = 0;
        v62 = v13;
      }
      v14 = v53;
    }
    v15 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(*(_QWORD *)v56 + 72LL);
    if ( v15 == CAudioSession::GetEndpointId )
    {
      EndpointId = CAudioSession::GetEndpointId(v56);
    }
    else
    {
      EndpointId = v15(v56);
      v14 = v53;
    }
    v17 = (__int64)EndpointId;
    v18 = *(_BOOL8 (__fastcall **)(CProcess *))(*(_QWORD *)v14 + 96LL);
    if ( v18 == CProcess::IsInteractive )
      IsInteractive = CProcess::IsInteractive(v14);
    else
      IsInteractive = v18(v14);
    v55 = IsInteractive;
    v20 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v14 + 48LL);
    if ( v20 == CProcess::GetTsSessionId )
      TsSessionId = CProcess::GetTsSessionId(v14);
    else
      TsSessionId = v20(v14);
    v22 = TsSessionId;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v57 = 0LL;
    v23 = qword_1800E68A0;
    while ( 1 )
    {
      v24 = v23;
      if ( !v23 )
        break;
      v23 = (_QWORD *)*v23;
      v25 = (struct TSSession *)v24[2];
      v60 = v25;
      if ( v22 == *(_DWORD *)v25 )
      {
        v57 = v25;
        goto LABEL_23;
      }
    }
    v51 = TsSessionCreate(v22, 0LL, &v57);
    PolicyVolumeForStreamClass = v51;
    if ( v51 )
    {
      if ( v51 > 0 )
        PolicyVolumeForStreamClass = (unsigned __int16)v51 | 0x80070000;
      goto LABEL_54;
    }
    v25 = v57;
LABEL_23:
    v26 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
    if ( v26 == ATL::CAtlStringMgr::GetNilString )
      NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = (unsigned int *)v26((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v31 = NilString + 6;
    v54 = NilString + 6;
    if ( v17 )
    {
      if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v17, v28);
        if ( !StringResourceInstance )
        {
LABEL_37:
          v36 = 0;
          v37 = *((_DWORD *)v25 + 42);
          if ( v37 <= 0 )
            goto LABEL_62;
          v38 = (char **)*((_QWORD *)v25 + 19);
          while ( 1 )
          {
            if ( !v31 )
              ATL::AtlThrowImpl(-2147467259);
            v39 = *v38;
            v40 = (char *)v31 - *v38;
            while ( 1 )
            {
              v41 = *(_WORD *)v39;
              if ( *(_WORD *)v39 != *(_WORD *)&v39[v40] )
                break;
              v39 += 2;
              if ( !v41 )
              {
                v42 = 0;
                goto LABEL_44;
              }
            }
            v42 = v41 < *(_WORD *)&v39[v40] ? -1 : 1;
LABEL_44:
            if ( !v42 )
              break;
            ++v36;
            ++v38;
            if ( v36 >= v37 )
              goto LABEL_62;
          }
          if ( v36 == -1 )
          {
LABEL_62:
            v43 = 0LL;
          }
          else
          {
            if ( v36 < 0 || v36 >= v37 )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              JUMPOUT(0x1800583CCLL);
            }
            v43 = *(struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)v25 + 20) + 8LL * v36);
          }
          v44 = (volatile signed __int32 *)(v31 - 6);
          if ( _InterlockedExchangeAdd(v44 + 4, 0xFFFFFFFF) <= 1 )
          {
            v45 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**(_QWORD **)v44 + 8LL);
            if ( v45 == ATL::CAtlStringMgr::Free )
              ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v44, (struct ATL::CStringData *)v44);
            else
              v45(*(ATL::CAtlStringMgr **)v44, (struct ATL::CStringData *)v44);
          }
          if ( v43 )
            goto LABEL_53;
          v48 = (struct _RTL_CRITICAL_SECTION *)operator new(0x810uLL);
          v43 = v48;
          v60 = v48;
          if ( v48 )
          {
            v58 = v48;
            ATL::CCriticalSection::CCriticalSection(v48);
            `eh vector constructor iterator'(
              &v43[1],
              0x30uLL,
              21,
              ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
              ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
            `eh vector constructor iterator'(
              &v43[26].LockCount,
              0x30uLL,
              21,
              ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
              ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
            v43[51].OwningThread = (char *)v57 + 336;
          }
          else
          {
            v43 = 0LL;
          }
          v58 = v43;
          if ( v43 )
          {
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
              &v59,
              v17);
            v49 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::Add(
                                  (char *)v25 + 152,
                                  &v59,
                                  &v58) == 0;
            ATL::CStringData::Release((ATL::CStringData *)(v59 - 24));
            if ( !v49 )
            {
LABEL_53:
              PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                             (CStreamClassPolicyGains *)v43,
                                             v62,
                                             v55,
                                             a3,
                                             a4,
                                             a5);
              goto LABEL_54;
            }
            PolicyVolumeForStreamClass = -2147024882;
            CStreamClassPolicyGainsWrapper::`scalar deleting destructor'((CStreamClassPolicyGainsWrapper *)v43, v50);
          }
          else
          {
            PolicyVolumeForStreamClass = -2147024882;
          }
LABEL_54:
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
LABEL_55:
          v14 = v53;
          goto LABEL_56;
        }
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v54,
          StringResourceInstance,
          (unsigned __int16)v17);
LABEL_91:
        v31 = v54;
        goto LABEL_37;
      }
      v32 = -1LL;
      do
        ++v32;
      while ( *(_WORD *)(v17 + 2 * v32) );
      if ( (_DWORD)v32 )
      {
        v33 = NilString[2];
        v34 = (v17 - (__int64)v31) >> 1;
        if ( (int)((1 - NilString[4]) | (NilString[3] - v32)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v54, v32, v29, v30);
          v31 = v54;
        }
        v35 = 2LL * (int)v32;
        if ( v34 <= v33 )
          memmove_s(v31, v35, (char *)v31 + 2 * v34, v35);
        else
          memcpy_s(v31, v35, (const void *const)v17, v35);
        if ( (int)v32 < 0 || (int)v32 > (int)*(v31 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *(v31 - 4) = v32;
        *((_WORD *)v31 + (int)v32) = 0;
        goto LABEL_37;
      }
    }
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&v54);
    goto LABEL_91;
  }
LABEL_56:
  if ( v14 )
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v56 )
  {
    v46 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v56 + 16LL);
    if ( v46 == CAudioSession::Release )
      CAudioSession::Release(v56);
    else
      v46(v56);
  }
  return (unsigned int)PolicyVolumeForStreamClass;
}
