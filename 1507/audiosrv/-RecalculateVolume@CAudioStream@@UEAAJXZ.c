/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001D4B0
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180014350 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002F0A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002F1A0 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4 (-GetNext@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this)
{
  int v2; // r15d
  float *v3; // rbx
  _QWORD *v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  size_t v7; // rcx
  float *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 (__fastcall *v11)(CPerStreamVolumeAudioStream *__hidden, unsigned int, float *const, bool *, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  bool v14; // r15
  __int64 v15; // rcx
  float v16; // xmm6_4
  __int64 (__fastcall *v17)(CAudioStream *__hidden, float *); // rsi
  __int64 v18; // rcx
  float *v19; // rax
  void (__fastcall *v20)(CPerStreamVolumeAudioStream *__hidden); // rdi
  int v22; // eax
  _QWORD *Next; // rax
  __int64 v24; // [rsp+30h] [rbp-39h] BYREF
  float *v25; // [rsp+38h] [rbp-31h]
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
  if ( !*((_QWORD *)this + 20) )
    goto LABEL_39;
  v4 = (_QWORD *)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
    goto LABEL_39;
  v5 = *((unsigned int *)this + 20);
  if ( *((_DWORD *)this + 20) )
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
  v8 = (float *)malloc(v7);
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
      v8[v9] = 1.0;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)this + 20) );
  }
  v10 = *((_DWORD *)this + 20);
  v11 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, unsigned int, float *const, bool *, __int64 *))(*(_QWORD *)this + 40LL);
  if ( v11 == CPerStreamVolumeAudioStream::CalculateAPOVolume )
    v12 = CPerStreamVolumeAudioStream::CalculateAPOVolume(this, v10, v8, &v31, &v34);
  else
    v12 = v11(this, v10, v8, &v31, &v34);
  v2 = v12;
  if ( v12 >= 0 )
  {
    v29 = (LPCRITICAL_SECTION)((char *)this + 120);
    v30 = 0;
    ATL::CCritSecLock::Lock(&v29);
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v4 + 24LL))(*v4, &v32);
    if ( v13 == -2147417848 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x43u,
          (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids);
      }
      v32 = 0;
      ATL::CComPtrBase<IPart>::Release(v4);
      v13 = 0;
    }
    if ( *v4 )
    {
      if ( !v13 )
      {
        v14 = v31;
        if ( (v32 != 0) != v31 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_qD(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              68LL,
              &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
              this,
              v31);
            v14 = v31;
          }
          v22 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v4 + 32LL))(
                  *v4,
                  v14,
                  0LL,
                  0LL,
                  0LL);
          if ( v22 < 0 )
          {
            if ( v22 == -2147417848 )
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  0x45u,
                  (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids);
              }
              ATL::CComPtrBase<IPart>::Release(v4);
              v22 = 0;
            }
            v15 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
            {
              goto LABEL_19;
            }
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              70LL,
              &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
              (unsigned int)v22);
          }
        }
      }
    }
    v15 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_19:
    v33 = 0LL;
    if ( (struct _GUID *)v15 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v15 + 28) & 0x200000) != 0
      && *(_BYTE *)(v15 + 25) >= 4u )
    {
      WPP_SF_q(*(_QWORD *)(v15 + 16), 71LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, this);
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, __int64 *, int, __int64 *))(**((_QWORD **)this + 20) + 32LL))(
           *((_QWORD *)this + 20),
           *((unsigned int *)this + 20),
           v3,
           &v33,
           1,
           &v34);
    if ( v2 == -2147417848 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x49u,
          (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids);
      }
      ATL::CComPtrBase<IPart>::Release((char *)this + 160);
      v2 = 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
    v28 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v16 = 0.0;
    LODWORD(v33) = 0;
    v17 = *(__int64 (__fastcall **)(CAudioStream *__hidden, float *))(*((_QWORD *)this + 1) + 72LL);
    if ( v17 == CAudioStream::GetMaxStreamChannelVolume )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          49LL,
          &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          this);
      }
      LODWORD(v33) = 0;
      v18 = *((unsigned int *)this + 20);
      if ( (_DWORD)v18 )
      {
        v19 = (float *)*((_QWORD *)this + 13);
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
    v24 = *((_QWORD *)this + 30);
    while ( v24 )
    {
      Next = (_QWORD *)ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(v18, &v24);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*Next + 24LL))(*Next, *((_QWORD *)this + 7));
    }
    if ( v28 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v30 )
      LeaveCriticalSection(v29);
  }
LABEL_39:
  v20 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *__hidden))(*(_QWORD *)this + 48LL);
  if ( v20 == CPerStreamVolumeAudioStream::ResetVolumeRampDelays )
  {
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  else
  {
    v20(this);
  }
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      74LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      (unsigned int)v2);
  }
  free(v3);
  return (unsigned int)v2;
}
