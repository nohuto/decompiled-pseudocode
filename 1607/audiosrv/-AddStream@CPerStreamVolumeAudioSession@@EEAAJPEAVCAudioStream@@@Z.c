/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014540 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x1800153B0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x1800163A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x1800164C0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001A160 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001A1E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18005EA94 (-Reallocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(const void **this, struct CAudioStream *a2)
{
  float *v3; // rbx
  float v5; // xmm6_4
  int CurrentPolicyGain; // edi
  float v7; // xmm7_4
  bool v8; // r12
  CAudioStream *v9; // rcx
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rax
  int IsCaptureStream; // eax
  CAudioStream *v12; // rcx
  __int64 (__fastcall *v13)(CAudioStream *__hidden); // rax
  int v14; // eax
  float v15; // xmm6_4
  __int64 (__fastcall *v16)(CPerStreamVolumeAudioStream *__hidden, bool, bool); // rax
  int v17; // eax
  size_t v18; // rcx
  unsigned __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rdx
  void *v22; // rcx
  unsigned int v23; // edi
  __int64 (__usercall *v24)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool); // rax
  int v25; // eax
  void *v27; // rax
  __int64 i; // r8
  unsigned int v29; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v31; // [rsp+50h] [rbp-21h]
  __int128 v32; // [rsp+58h] [rbp-19h] BYREF
  float v33; // [rsp+68h] [rbp-9h]
  float v34; // [rsp+6Ch] [rbp-5h]
  void *v35; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+6Fh] BYREF

  v3 = 0LL;
  v5 = FLOAT_1_0;
  *((_QWORD *)a2 + 8) = this;
  v32 = _xmm;
  v33 = 1.0;
  v34 = 1.0;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)this,
                        0LL,
                        (bool *)&v35,
                        (struct SessionPolicyGains *)&v32,
                        &v36);
  if ( CurrentPolicyGain )
    goto LABEL_62;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 109);
  v31 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = *((float *)this + 228);
  v8 = *((_DWORD *)this + 229) != 0;
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, a2);
  }
  v9 = (struct CAudioStream *)((char *)a2 + 8);
  v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v10 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v9);
  else
    IsCaptureStream = v10(v9);
  if ( !IsCaptureStream )
    v5 = *((float *)&v32 + 2);
  v12 = (struct CAudioStream *)((char *)a2 + 8);
  v13 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v13 == CAudioStream::IsCaptureStream )
    v14 = CAudioStream::IsCaptureStream(v12);
  else
    v14 = v13(v12);
  if ( !v14 && !*((_BYTE *)a2 + 42) )
    v5 = v5 * *(float *)&v32;
  v15 = v5 * *((float *)&v32 + 1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
         g_PolicyManager,
         *((unsigned int *)a2 + 120)) )
  {
    v15 = v15 * *((float *)&v32 + 3);
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 112LL))(
          g_PolicyManager,
          *((unsigned int *)a2 + 120)) )
    v15 = v15 * v33;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 168LL))(
         g_PolicyManager,
         *((unsigned int *)a2 + 120)) )
  {
    v15 = v15 * v34;
  }
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, (bool)v35, v15, v36, 0);
  if ( CurrentPolicyGain < 0 )
    goto LABEL_62;
  v16 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, bool, bool))(*(_QWORD *)a2 + 112LL);
  v17 = v16 == CPerStreamVolumeAudioStream::SetSessionMute
      ? CPerStreamVolumeAudioStream::SetSessionMute(a2, v8, 0)
      : v16(a2, v8, 0);
  CurrentPolicyGain = v17;
  if ( v17 < 0 )
    goto LABEL_62;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 109);
  v31 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v18 = *((unsigned int *)this + 246);
  if ( *((_DWORD *)this + 246) )
  {
    if ( v18 == 2 )
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v19 = 0xFFFFFFFFFFFFFFFFuLL / v18;
    if ( v19 < 4 )
    {
LABEL_60:
      CurrentPolicyGain = -2147024882;
      if ( !v31 )
        goto LABEL_62;
      goto LABEL_61;
    }
    v18 *= 4LL;
  }
  v20 = malloc(v18);
  v35 = v20;
  v3 = (float *)v20;
  if ( !v20 )
    goto LABEL_60;
  memcpy_0(v20, this[124], 4LL * *((unsigned int *)this + 246));
  v22 = (void *)this[124];
  if ( !v22 || *((_DWORD *)this + 246) < *((_DWORD *)a2 + 20) )
  {
    operator delete(v22);
    this[124] = 0LL;
    v27 = operator new(saturated_mul(*((unsigned int *)a2 + 20), 4uLL));
    this[124] = v27;
    if ( v27 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 246); i = (unsigned int)(i + 1) )
        *((float *)this[124] + i) = v3[i];
      for ( ; (unsigned int)i < *((_DWORD *)a2 + 20); i = (unsigned int)(i + 1) )
        *((_DWORD *)this[124] + i) = 1065353216;
      v29 = *((_DWORD *)a2 + 20);
      *((_DWORD *)this + 246) = v29;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(&v35, v29);
      v3 = (float *)v35;
      if ( v35 )
      {
        memcpy_0(v35, this[124], 4LL * *((unsigned int *)this + 246));
        goto LABEL_35;
      }
      CurrentPolicyGain = -2147024882;
      if ( !v31 )
        goto LABEL_62;
    }
    else
    {
      CurrentPolicyGain = -2147024882;
      if ( !v31 )
        goto LABEL_62;
    }
LABEL_61:
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
    goto LABEL_62;
  }
LABEL_35:
  v23 = *((_DWORD *)this + 246);
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  v24 = *(__int64 (__usercall **)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool))(*(_QWORD *)a2 + 104LL);
  if ( v24 == CPerStreamVolumeAudioStream::SetSessionVolume )
    v25 = CPerStreamVolumeAudioStream::SetSessionVolume(a2, v7, v23, v3, 0LL, 1);
  else
    v25 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *))v24)(a2, v21, v23, v3);
  CurrentPolicyGain = v25;
  if ( v25 >= 0 )
  {
    CurrentPolicyGain = CAudioSession::AddStream((CAudioSession *)this, a2);
    goto LABEL_41;
  }
LABEL_62:
  *((_QWORD *)a2 + 8) = 0LL;
LABEL_41:
  if ( CurrentPolicyGain < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::AddStream", 0xC9Fu, CurrentPolicyGain);
  free(v3);
  return (unsigned int)CurrentPolicyGain;
}
