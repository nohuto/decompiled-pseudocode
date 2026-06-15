/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z @ 0x18001B890 (-IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z @ 0x18001B8B0 (-IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18001CBA0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18001CCC0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180020D50 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800270A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180027FF0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800763A0 (-Reallocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(const void **this, struct CAudioStream *a2)
{
  float *v2; // rbx
  int CurrentPolicyGain; // esi
  float v6; // xmm8_4
  float v7; // xmm6_4
  _BOOL8 (__fastcall *v8)(CAudioStream *); // rdi
  BOOL IsCaptureStream; // eax
  _BOOL8 (__fastcall *v10)(CAudioStream *); // rdi
  BOOL v11; // eax
  CWindowsPolicyManager *v12; // rsi
  float v13; // xmm6_4
  unsigned int v14; // r13d
  _BOOL8 (__fastcall *v15)(CWindowsPolicyManager *, unsigned int); // rdi
  BOOL IsSubjectToSessionDisplayPolicyGain; // eax
  unsigned int v17; // r13d
  _BOOL8 (__fastcall *v18)(CWindowsPolicyManager *, int); // rdi
  BOOL IsAnAlwaysAudibleStreamType; // eax
  float v20; // xmm7_4
  char v21; // r13
  int v22; // eax
  HANDLE LockSemaphore; // rax
  char v24; // r13
  float v25; // xmm7_4
  char v26; // r13
  LPCRITICAL_SECTION v27; // rcx
  float v28; // xmm7_4
  __int64 (__fastcall *v29)(CPerStreamVolumeAudioStream *, char, char); // rdi
  int v30; // eax
  unsigned __int64 v31; // rdi
  size_t v32; // rcx
  void *v33; // rax
  __int64 v34; // rdx
  const void *v35; // rax
  unsigned int i; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // esi
  __int64 (__fastcall *v41)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool); // rdi
  int v42; // eax
  unsigned __int8 v44; // [rsp+38h] [rbp-69h]
  bool v45; // [rsp+39h] [rbp-68h] BYREF
  void *v46; // [rsp+40h] [rbp-61h] BYREF
  LPCRITICAL_SECTION v47; // [rsp+48h] [rbp-59h] BYREF
  char v48; // [rsp+50h] [rbp-51h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-49h] BYREF
  char v50; // [rsp+60h] [rbp-41h]
  __int64 v51; // [rsp+68h] [rbp-39h]
  __int128 v52; // [rsp+70h] [rbp-31h] BYREF
  __int64 v53; // [rsp+80h] [rbp-21h]

  v2 = 0LL;
  *((_QWORD *)a2 + 8) = this;
  v52 = _xmm;
  v53 = 0x3F8000003F800000LL;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)this,
                        0LL,
                        &v45,
                        (struct SessionPolicyGains *)&v52,
                        (__int64 *)&v47);
  if ( CurrentPolicyGain )
    goto LABEL_78;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 109);
  v50 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((float *)this + 228);
  v44 = *((_DWORD *)this + 229) != 0;
  if ( v50 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 98LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a2);
  }
  v7 = FLOAT_1_0;
  v8 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v8 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)a2 + 8));
  else
    IsCaptureStream = v8((struct CAudioStream *)((char *)a2 + 8));
  if ( !IsCaptureStream )
    v7 = *((float *)&v52 + 2);
  v10 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v10 == CAudioStream::IsCaptureStream )
    v11 = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)a2 + 8));
  else
    v11 = v10((struct CAudioStream *)((char *)a2 + 8));
  if ( !v11 && !*((_BYTE *)a2 + 42) )
    v7 = v7 * *(float *)&v52;
  v12 = g_PolicyManager;
  v13 = v7 * *((float *)&v52 + 1);
  v14 = *((_DWORD *)a2 + 76);
  v15 = *(_BOOL8 (__fastcall **)(CWindowsPolicyManager *, unsigned int))(*(_QWORD *)g_PolicyManager + 72LL);
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
    v13 = v13 * *((float *)&v52 + 3);
  v17 = *((_DWORD *)a2 + 76);
  v18 = *(_BOOL8 (__fastcall **)(CWindowsPolicyManager *, int))(*(_QWORD *)v12 + 120LL);
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
    v13 = v13 * *(float *)&v53;
  if ( (*(unsigned int (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)v12 + 176LL))(
         v12,
         *((unsigned int *)a2 + 76)) )
  {
    v13 = v13 * *((float *)&v53 + 1);
  }
  v20 = FLOAT_1_0;
  v21 = 0;
  v51 = 0LL;
  v22 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, char *, __int128 *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          (char *)a2 + 8,
          &v52);
  CurrentPolicyGain = v22;
  if ( v22 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        55LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        (unsigned int)v22);
    }
  }
  else
  {
    lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 8);
    LockSemaphore = lpCriticalSection[21].LockSemaphore;
    v46 = LockSemaphore;
    if ( LockSemaphore )
      (*(void (__fastcall **)(void *))(*(_QWORD *)LockSemaphore + 8LL))(v46);
    v46 = lpCriticalSection[21].LockSemaphore;
    if ( (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v46 + 168LL))(v46) )
    {
      v21 = v52;
      v20 = *((float *)&v52 + 1);
      v51 = v53;
    }
    v24 = BYTE8(v52) | v21;
    v25 = v20 * *((float *)&v52 + 3);
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8) && v25 != 0.0 )
      v25 = FLOAT_1_0;
    v26 = v45 | v24;
    v27 = v47;
    v28 = v25 * v13;
    if ( (__int64)v47 < v51 )
      v27 = (LPCRITICAL_SECTION)v51;
    if ( v26 != *((_BYTE *)a2 + 84) )
      *((_BYTE *)a2 + 84) = v26;
    if ( v28 != *((float *)a2 + 20) )
      *((float *)a2 + 20) = v28;
    *((_QWORD *)a2 + 11) = v27;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v46 + 16LL))(v46);
  }
  if ( CurrentPolicyGain < 0 )
    goto LABEL_78;
  v29 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, char, char))(*(_QWORD *)a2 + 112LL);
  v30 = v29 == CPerStreamVolumeAudioStream::SetSessionMute
      ? CPerStreamVolumeAudioStream::SetSessionMute(a2, v44, 0)
      : v29(a2, v44, 0);
  CurrentPolicyGain = v30;
  if ( v30 < 0 )
    goto LABEL_78;
  v48 = 0;
  v47 = (LPCRITICAL_SECTION)(this + 109);
  ATL::CCritSecLock::Lock(&v47);
  v31 = *((unsigned int *)this + 231);
  if ( *((_DWORD *)this + 231) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v31 < 4 )
      goto LABEL_76;
    v32 = 4 * v31;
  }
  else
  {
    v32 = 0LL;
  }
  v33 = malloc(v32);
  v46 = v33;
  v2 = (float *)v33;
  if ( !v33 )
  {
LABEL_76:
    CurrentPolicyGain = -2147024882;
    if ( v48 )
      ATL::CCritSecLock::Unlock(&v47);
    goto LABEL_78;
  }
  memcpy_0(v33, this[116], 4 * v31);
  if ( !this[116] || *((_DWORD *)this + 231) < *((_DWORD *)a2 + 18) )
  {
    operator delete((void *)this[116]);
    this[116] = 0LL;
    v35 = operator new(saturated_mul(*((unsigned int *)a2 + 18), 4uLL));
    this[116] = v35;
    if ( v35 )
    {
      for ( i = 0; i < *((_DWORD *)this + 231); *((float *)this[116] + v37) = v2[v37] )
        v37 = i++;
      for ( ; i < *((_DWORD *)a2 + 18); *((_DWORD *)this[116] + v38) = 1065353216 )
        v38 = i++;
      v39 = *((_DWORD *)a2 + 18);
      *((_DWORD *)this + 231) = v39;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(&v46, v39);
      v2 = (float *)v46;
      if ( v46 )
      {
        memcpy_0(v46, this[116], 4LL * *((unsigned int *)this + 231));
        goto LABEL_69;
      }
    }
    goto LABEL_76;
  }
LABEL_69:
  v40 = *((_DWORD *)this + 231);
  if ( v48 )
    LeaveCriticalSection(v47);
  v41 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool))(*(_QWORD *)a2 + 104LL);
  if ( v41 == CPerStreamVolumeAudioStream::SetSessionVolume )
    v42 = CPerStreamVolumeAudioStream::SetSessionVolume(a2, v6, v40, v2, 0LL, 1);
  else
    v42 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *, _QWORD, char))v41)(
            a2,
            v34,
            v40,
            v2,
            0LL,
            1);
  CurrentPolicyGain = v42;
  if ( v42 < 0 )
  {
LABEL_78:
    *((_QWORD *)a2 + 8) = 0LL;
    goto LABEL_79;
  }
  CurrentPolicyGain = CAudioSession::AddStream((CAudioSession *)this, a2);
LABEL_79:
  if ( CurrentPolicyGain < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      99LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (unsigned int)CurrentPolicyGain);
  }
  free(v2);
  return (unsigned int)CurrentPolicyGain;
}
