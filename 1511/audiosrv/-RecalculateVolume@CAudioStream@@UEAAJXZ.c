/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001FB90
 * Callers:
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18001CBA0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180021E70 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18001CD00 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180093480 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this)
{
  int v2; // r15d
  void *v3; // rbx
  Microsoft::WRL::WeakRef *v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 (__fastcall *v11)(CPerStreamVolumeAudioStream *, unsigned int, unsigned __int64, bool *, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  bool v14; // r15
  TraceLoggingHProvider v15; // rcx
  float v16; // xmm6_4
  __int64 (__fastcall *v17)(CAudioStream *__hidden, float *); // rsi
  __int64 v18; // rcx
  float *v19; // rax
  void (__fastcall *v20)(CPerStreamVolumeAudioStream *); // rdi
  int v22; // eax
  _QWORD *Next; // rax
  __int64 v24; // [rsp+30h] [rbp-39h] BYREF
  void *v25; // [rsp+38h] [rbp-31h]
  __int64 v26; // [rsp+40h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-21h] BYREF
  char v28; // [rsp+50h] [rbp-19h]
  LPCRITICAL_SECTION v29; // [rsp+58h] [rbp-11h] BYREF
  char v30; // [rsp+60h] [rbp-9h]
  bool v31; // [rsp+D0h] [rbp+67h] BYREF
  char v32; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = -2LL;
  v2 = 0;
  v3 = 0LL;
  v25 = 0LL;
  if ( !*((_QWORD *)this + 19) )
    goto LABEL_39;
  v4 = (CAudioStream *)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) )
    goto LABEL_39;
  v5 = *((unsigned int *)this + 18);
  if ( *((_DWORD *)this + 18) )
  {
    if ( v5 == 2 )
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v6 = 0xFFFFFFFFFFFFFFFFuLL / v5;
    if ( v6 < 4 )
      goto LABEL_75;
    v7 = 4 * v5;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = malloc(v7);
  v3 = v8;
  v25 = v8;
  if ( !v8 )
  {
LABEL_75:
    v2 = -2147024882;
    goto LABEL_39;
  }
  v9 = 0LL;
  if ( (_DWORD)v5 )
  {
    do
    {
      *((_DWORD *)v8 + v9) = 1065353216;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)this + 18) );
  }
  v10 = *((_DWORD *)this + 18);
  v11 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int, unsigned __int64, bool *, __int64 *))(*(_QWORD *)this + 40LL);
  if ( v11 == CPerStreamVolumeAudioStream::CalculateAPOVolume )
    v12 = CPerStreamVolumeAudioStream::CalculateAPOVolume(this, v10, (unsigned __int64)v8, &v31, &v34);
  else
    v12 = v11(this, v10, (unsigned __int64)v8, &v31, &v34);
  v2 = v12;
  if ( v12 >= 0 )
  {
    v29 = (LPCRITICAL_SECTION)((char *)this + 112);
    v30 = 0;
    ATL::CCritSecLock::Lock(&v29);
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, &v32);
    if ( v13 == -2147417848 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Fu, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
      }
      v32 = 0;
      Microsoft::WRL::WeakRef::~WeakRef(v4);
      v13 = 0;
    }
    if ( *(_QWORD *)v4 )
    {
      if ( !v13 )
      {
        v14 = v31;
        if ( (v32 != 0) != v31 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              64LL,
              &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
              this,
              v31);
            v14 = v31;
          }
          v22 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD, _QWORD, _QWORD))(**(_QWORD **)v4 + 32LL))(
                  *(_QWORD *)v4,
                  v14,
                  0LL,
                  0LL,
                  0LL);
          if ( v22 < 0 )
          {
            if ( v22 == -2147417848 )
            {
              if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x41u,
                  (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
              }
              Microsoft::WRL::WeakRef::~WeakRef(v4);
              v22 = 0;
            }
            v15 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
            {
              goto LABEL_19;
            }
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              66LL,
              &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
              (unsigned int)v22);
          }
        }
      }
    }
    v15 = WPP_GLOBAL_Control;
LABEL_19:
    v33 = 0LL;
    if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v15 + 7) & 0x200000) != 0
      && *((_BYTE *)v15 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v15 + 2), 67LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, this);
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, __int64 *, int, __int64 *))(**((_QWORD **)this + 19) + 32LL))(
           *((_QWORD *)this + 19),
           *((unsigned int *)this + 18),
           v3,
           &v33,
           1,
           &v34);
    if ( v2 == -2147417848 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x45u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
      }
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 152));
      v2 = 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 192);
    v28 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v16 = 0.0;
    LODWORD(v33) = 0;
    v17 = *(__int64 (__fastcall **)(CAudioStream *__hidden, float *))(*((_QWORD *)this + 1) + 72LL);
    if ( v17 == CAudioStream::GetMaxStreamChannelVolume )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, this);
      }
      LODWORD(v33) = 0;
      v18 = *((unsigned int *)this + 18);
      if ( (_DWORD)v18 )
      {
        v19 = (float *)*((_QWORD *)this + 12);
        do
        {
          if ( *v19 > v16 )
          {
            v16 = *v19;
            *(float *)&v33 = *v19;
          }
          ++v19;
          --v18;
        }
        while ( v18 );
      }
    }
    else
    {
      v17((CAudioStream *)((char *)this + 8), (float *)&v33);
    }
    v24 = *((_QWORD *)this + 29);
    while ( v24 )
    {
      Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                         v18,
                         &v24);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*Next + 24LL))(*Next, *((_QWORD *)this + 6));
    }
    if ( v28 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v30 )
      LeaveCriticalSection(v29);
  }
LABEL_39:
  v20 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *))(*(_QWORD *)this + 48LL);
  if ( v20 == CPerStreamVolumeAudioStream::ResetVolumeRampDelays )
  {
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  else
  {
    v20(this);
  }
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      70LL,
      &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      (unsigned int)v2);
  }
  free(v3);
  return (unsigned int)v2;
}
