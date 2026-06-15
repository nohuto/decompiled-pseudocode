/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180010340 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180011120 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001E780 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x1800217C0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@.c)
 *     ?IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z @ 0x180021D90 (-IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z @ 0x180021DB0 (-IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18002F060 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002F0A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007B104 (-Reallocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(const void **this, struct CAudioStream *a2)
{
  float *v2; // rbx
  int CurrentPolicyGain; // esi
  float v6; // xmm7_4
  float v7; // xmm6_4
  __int64 (__fastcall *v8)(CAudioStream *__hidden); // rdi
  int IsCaptureStream; // eax
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rdi
  int v11; // eax
  CWindowsPolicyManager *v12; // rsi
  float v13; // xmm6_4
  unsigned int v14; // r13d
  __int64 (__fastcall *v15)(CWindowsPolicyManager *__hidden, unsigned int); // rdi
  int IsSubjectToSessionDisplayPolicyGain; // eax
  unsigned int v17; // r13d
  __int64 (__fastcall *v18)(CWindowsPolicyManager *__hidden, unsigned int); // rdi
  int IsAnAlwaysAudibleStreamType; // eax
  LPCRITICAL_SECTION v20; // rax
  ULONG_PTR SpinCount; // r13
  CProcess *v22; // r13
  __int64 (__fastcall *v23)(CProcess *); // rdi
  int v24; // eax
  __int64 (__fastcall *v25)(CWindowsPolicyManager *__hidden, struct IAudioStreamInfo *, bool *, float *, __int64 *); // rsi
  int PolicyVolumeForStreamClass; // eax
  __int64 (__fastcall *v27)(CAudioStream *__hidden); // rdi
  int v28; // eax
  char v29; // al
  __int64 v30; // rcx
  float v31; // xmm0_4
  __int64 (__fastcall *v32)(CPerStreamVolumeAudioStream *__hidden, bool, bool); // rdi
  int v33; // eax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  size_t v36; // rcx
  void *v37; // rax
  void *v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // esi
  __int64 (__usercall *v41)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool); // rdi
  int v42; // eax
  const void *v44; // rax
  __int64 i; // r8
  unsigned int v46; // eax
  __int64 v47; // [rsp+38h] [rbp-49h] BYREF
  __int64 v48; // [rsp+40h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-39h] BYREF
  char v50; // [rsp+50h] [rbp-31h]
  __int128 v51; // [rsp+58h] [rbp-29h] BYREF
  float v52; // [rsp+68h] [rbp-19h]
  float v53; // [rsp+6Ch] [rbp-15h]
  void *v54; // [rsp+E8h] [rbp+67h] BYREF
  bool v55; // [rsp+F0h] [rbp+6Fh]
  bool v56; // [rsp+F8h] [rbp+77h] BYREF
  float v57; // [rsp+100h] [rbp+7Fh] BYREF

  v2 = 0LL;
  *((_QWORD *)a2 + 9) = this;
  v51 = _xmm;
  v52 = 1.0;
  v53 = 1.0;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)this,
                        0LL,
                        &v56,
                        (struct SessionPolicyGains *)&v51,
                        &v48);
  if ( CurrentPolicyGain )
    goto LABEL_92;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 90);
  v50 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = *((float *)this + 190);
  v55 = *((_DWORD *)this + 191) != 0;
  if ( v50 )
    LeaveCriticalSection(lpCriticalSection);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      98LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      a2);
  }
  v7 = FLOAT_1_0;
  v8 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v8 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)a2 + 8));
  else
    IsCaptureStream = v8((struct CAudioStream *)((char *)a2 + 8));
  if ( !IsCaptureStream )
    v7 = *((float *)&v51 + 2);
  v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v10 == CAudioStream::IsCaptureStream )
    v11 = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)a2 + 8));
  else
    v11 = v10((struct CAudioStream *)((char *)a2 + 8));
  if ( !v11 && !*((_BYTE *)a2 + 42) )
    v7 = v7 * *(float *)&v51;
  v12 = g_PolicyManager;
  v13 = v7 * *((float *)&v51 + 1);
  v14 = *((_DWORD *)a2 + 76);
  v15 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, unsigned int))(*(_QWORD *)g_PolicyManager + 72LL);
  if ( v15 == CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain )
  {
    IsSubjectToSessionDisplayPolicyGain = CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
                                            g_PolicyManager,
                                            v14);
  }
  else
  {
    IsSubjectToSessionDisplayPolicyGain = v15(g_PolicyManager, v14);
    v12 = g_PolicyManager;
  }
  if ( IsSubjectToSessionDisplayPolicyGain )
    v13 = v13 * *((float *)&v51 + 3);
  v17 = *((_DWORD *)a2 + 76);
  v18 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, unsigned int))(*(_QWORD *)v12 + 120LL);
  if ( v18 == CWindowsPolicyManager::IsAnAlwaysAudibleStreamType )
  {
    IsAnAlwaysAudibleStreamType = CWindowsPolicyManager::IsAnAlwaysAudibleStreamType(v12, v17);
  }
  else
  {
    IsAnAlwaysAudibleStreamType = v18(v12, v17);
    v12 = g_PolicyManager;
  }
  if ( !IsAnAlwaysAudibleStreamType )
    v13 = v13 * v52;
  if ( (*(unsigned int (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)v12 + 168LL))(
         v12,
         *((unsigned int *)a2 + 76)) )
  {
    v13 = v13 * v53;
  }
  v20 = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 9);
  CurrentPolicyGain = 0;
  v57 = FLOAT_1_0;
  LOBYTE(v54) = 0;
  v47 = 0LL;
  SpinCount = v20[17].SpinCount;
  lpCriticalSection = v20;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v20 = lpCriticalSection;
  }
  v22 = (CProcess *)v20[17].SpinCount;
  v23 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v22 + 168LL);
  if ( v23 == CProcess::SubjectToStreamClassPolicyGains )
    v24 = CProcess::SubjectToStreamClassPolicyGains(v22);
  else
    v24 = v23(v22);
  if ( !v24
    || ((v25 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, struct IAudioStreamInfo *, bool *, float *, __int64 *))(*(_QWORD *)g_PolicyManager + 48LL),
         v25 != CWindowsPolicyManager::GetPolicyVolumeForStreamClass)
      ? (PolicyVolumeForStreamClass = v25(
                                        g_PolicyManager,
                                        (struct CAudioStream *)((char *)a2 + 8),
                                        (bool *)&v54,
                                        &v57,
                                        &v47))
      : (PolicyVolumeForStreamClass = CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
                                        g_PolicyManager,
                                        (struct CAudioStream *)((char *)a2 + 8),
                                        (bool *)&v54,
                                        &v57,
                                        &v47)),
        CurrentPolicyGain = PolicyVolumeForStreamClass,
        PolicyVolumeForStreamClass >= 0) )
  {
    v27 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a2 + 1) + 56LL);
    if ( v27 == CAudioStream::IsCaptureStream )
      v28 = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)a2 + 8));
    else
      v28 = v27((struct CAudioStream *)((char *)a2 + 8));
    if ( v28 && v57 != 0.0 )
      v57 = FLOAT_1_0;
    v29 = v56 | (unsigned __int8)v54;
    v30 = v47;
    v31 = v57 * v13;
    if ( v48 >= v47 )
      v30 = v48;
    if ( v29 != *((_BYTE *)a2 + 92) )
      *((_BYTE *)a2 + 92) = v29;
    if ( v31 != *((float *)a2 + 22) )
      *((float *)a2 + 22) = v31;
    *((_QWORD *)a2 + 12) = v30;
  }
  (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( CurrentPolicyGain < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      59LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      (unsigned int)CurrentPolicyGain);
  }
  if ( CurrentPolicyGain < 0 )
    goto LABEL_92;
  v32 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, bool, bool))(*(_QWORD *)a2 + 104LL);
  v33 = v32 == CPerStreamVolumeAudioStream::SetSessionMute
      ? CPerStreamVolumeAudioStream::SetSessionMute(a2, v55, 0)
      : v32(a2, v55, 0);
  CurrentPolicyGain = v33;
  if ( v33 < 0 )
    goto LABEL_92;
  v50 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 90);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v34 = *((unsigned int *)this + 193);
  if ( *((_DWORD *)this + 193) )
  {
    if ( v34 == 2 )
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v35 = 0xFFFFFFFFFFFFFFFFuLL / v34;
    if ( v35 < 4 )
      goto LABEL_89;
    v36 = 4 * v34;
  }
  else
  {
    v36 = 0LL;
  }
  v37 = malloc(v36);
  v54 = v37;
  v2 = (float *)v37;
  if ( !v37 )
    goto LABEL_89;
  memcpy_0(v37, this[97], 4 * v34);
  v38 = (void *)this[97];
  if ( !v38 || (v39 = *((unsigned int *)a2 + 20), *((_DWORD *)this + 193) < (unsigned int)v39) )
  {
    operator delete(v38);
    this[97] = 0LL;
    v44 = operator new(saturated_mul(*((unsigned int *)a2 + 20), 4uLL));
    this[97] = v44;
    if ( v44 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 193); i = (unsigned int)(i + 1) )
        *((float *)this[97] + i) = v2[i];
      for ( ; (unsigned int)i < *((_DWORD *)a2 + 20); i = (unsigned int)(i + 1) )
        *((_DWORD *)this[97] + i) = 1065353216;
      v46 = *((_DWORD *)a2 + 20);
      *((_DWORD *)this + 193) = v46;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(&v54, v46);
      v2 = (float *)v54;
      if ( v54 )
      {
        memcpy_0(v54, this[97], 4LL * *((unsigned int *)this + 193));
        goto LABEL_58;
      }
    }
LABEL_89:
    CurrentPolicyGain = -2147024882;
    if ( v50 )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
    goto LABEL_92;
  }
LABEL_58:
  v40 = *((_DWORD *)this + 193);
  if ( v50 )
    LeaveCriticalSection(lpCriticalSection);
  v41 = *(__int64 (__usercall **)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool))(*(_QWORD *)a2 + 96LL);
  if ( v41 == CPerStreamVolumeAudioStream::SetSessionVolume )
    v42 = CPerStreamVolumeAudioStream::SetSessionVolume(a2, v6, v40, v2, 0LL, 1);
  else
    v42 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *, _QWORD, char))v41)(
            a2,
            v39,
            v40,
            v2,
            0LL,
            1);
  CurrentPolicyGain = v42;
  if ( v42 < 0 )
  {
LABEL_92:
    *((_QWORD *)a2 + 9) = 0LL;
    goto LABEL_64;
  }
  CurrentPolicyGain = CAudioSession::AddStream((CAudioSession *)this, a2);
LABEL_64:
  if ( CurrentPolicyGain < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      99LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      (unsigned int)CurrentPolicyGain);
  }
  free(v2);
  return (unsigned int)CurrentPolicyGain;
}
