/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800755F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180025C90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x18006CCCC (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x18006F984 (WPP_SF_qdgg.c)
 *     WPP_SF_q_guid__guid_ @ 0x18007798C (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800779F8 (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x180077A50 (WPP_SF_qgg_HEX__HEX_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2,
        int a3)
{
  char v3; // r14
  float *v5; // r12
  TraceLoggingHProvider v7; // rcx
  char *v8; // rdx
  int v9; // edx
  int v10; // r8d
  TraceLoggingHProvider v11; // rcx
  float *p_fMasterVolume; // r15
  __m128 fMasterVolume_low; // xmm0
  _DWORD *v14; // r13
  __m128 v15; // xmm1
  unsigned int v16; // eax
  __int64 v17; // rsi
  float v18; // xmm0_4
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // esi
  unsigned int v22; // r14d
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  float v26; // xmm1_4
  __int64 v28; // [rsp+20h] [rbp-50h]
  float *v29; // [rsp+40h] [rbp-30h] BYREF
  __int16 v30; // [rsp+48h] [rbp-28h]
  char *v31; // [rsp+50h] [rbp-20h] BYREF
  __int16 v32; // [rsp+58h] [rbp-18h]
  LPCRITICAL_SECTION v33; // [rsp+60h] [rbp-10h] BYREF
  char v34; // [rsp+68h] [rbp-8h]
  char v35; // [rsp+B0h] [rbp+40h]
  char v36; // [rsp+B8h] [rbp+48h]

  v3 = 0;
  v35 = 0;
  v5 = 0LL;
  v36 = 0;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xC6u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (char *)this - 936,
      a2);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = (char *)this - 536;
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 67)
    && *(_QWORD *)a2->guidEventContext.Data4 == *((_QWORD *)v8 + 1) )
  {
    if ( v7 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v7 + 28) & 0x40) != 0
      && *((_BYTE *)v7 + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)v7 + 2),
        0xC7u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (__int64)this - 936);
    }
  }
  else
  {
    if ( v7 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v7 + 28) & 0x40) != 0
      && *((_BYTE *)v7 + 25) >= 4u )
    {
      WPP_SF_q_guid__guid_(*((_QWORD *)v7 + 2), (_DWORD)v8, a3, (_DWORD)this - 936, (__int64)a2, (__int64)this - 536);
    }
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)this - 64));
    v10 = *((_DWORD *)this - 5);
    if ( a2->bMuted == v10 )
    {
      v11 = WPP_GLOBAL_Control;
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          201LL,
          &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          (char *)this - 936,
          v10,
          a2->bMuted);
        v11 = WPP_GLOBAL_Control;
      }
      v35 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    v14 = (_DWORD *)((char *)this - 24);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 6) )
    {
      if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v11 + 28) & 0x40) != 0
        && *((_BYTE *)v11 + 25) >= 4u )
      {
        v15 = (__m128)(unsigned int)*v14;
        v29 = &a2->fMasterVolume;
        v30 = 4;
        v31 = (char *)this - 24;
        v32 = 4;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v11 + 2),
          v9,
          v10,
          (_DWORD)this - 936,
          *(_OWORD *)&_mm_cvtps_pd(v15),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v31,
          (__int64)&v29);
        v11 = WPP_GLOBAL_Control;
      }
      v36 = 1;
    }
    v16 = *((_DWORD *)this - 3);
    if ( a2->nChannels == v16 )
    {
      v5 = (float *)operator new(saturated_mul(v16, 4uLL));
      if ( v5 && (v17 = 0LL, *((_DWORD *)this - 3)) )
      {
        do
        {
          if ( *p_fMasterVolume == 0.0 )
          {
            v18 = FLOAT_1_0;
            v19 = (unsigned int)v17;
            v5[v19] = 1.0;
          }
          else
          {
            v18 = a2->afChannelVolumes[v17] / *p_fMasterVolume;
            v19 = (unsigned int)v17;
            v5[v19] = v18;
          }
          v20 = *((_QWORD *)this - 1);
          if ( v18 == *(float *)(v19 * 4 + v20) )
          {
            v11 = WPP_GLOBAL_Control;
          }
          else
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              LODWORD(v28) = v17;
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xCBu,
                (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
                (char *)this - 936,
                v28,
                *(float *)(v19 * 4 + v20),
                v18);
              v11 = WPP_GLOBAL_Control;
            }
            v3 = 1;
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *((_DWORD *)this - 3) );
        v14 = (_DWORD *)((char *)this - 24);
      }
      else
      {
        v11 = WPP_GLOBAL_Control;
      }
    }
    v21 = 0;
    if ( v34 )
    {
      ATL::CCritSecLock::Unlock(&v33);
      v11 = WPP_GLOBAL_Control;
    }
    if ( v35 || v36 || v3 )
    {
      if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v11 + 28) & 0x40) != 0
        && *((_BYTE *)v11 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v11 + 2), 0xCCu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
        v11 = WPP_GLOBAL_Control;
      }
      if ( v3 )
      {
        v22 = 0;
        if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)v11 + 28) & 0x40) != 0
          && *((_BYTE *)v11 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v11 + 2), 0xCDu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
        }
        ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)this - 64));
        v23 = *((_DWORD *)this - 3);
        if ( a2->nChannels == v23 )
        {
          v24 = 0LL;
          if ( v23 )
          {
            do
            {
              v25 = *((_QWORD *)this - 1);
              v26 = v5[v24];
              if ( *(float *)(v25 + 4 * v24) != v26 )
              {
                *(float *)(v25 + 4 * v24) = v26;
                v22 = v24;
              }
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < *((_DWORD *)this - 3) );
          }
          v21 = 1;
        }
        if ( v34 )
          ATL::CCritSecLock::Unlock(&v33);
        if ( v21 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 920, 1u, &a2->guidEventContext, v22, 1, 0LL);
        v11 = WPP_GLOBAL_Control;
      }
      if ( v35 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 936),
          a2->bMuted,
          (struct _GUID *)&EVENTCONTEXT_AUDIOSUBSYSTEM,
          1);
        v11 = WPP_GLOBAL_Control;
      }
      if ( v36 )
      {
        if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)v11 + 28) & 0x40) != 0
          && *((_BYTE *)v11 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v11 + 2), 0xCEu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
        }
        ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)this - 64));
        *v14 = *(_DWORD *)p_fMasterVolume;
        if ( v34 )
          ATL::CCritSecLock::Unlock(&v33);
        CAudioSession::RecalculateSessionVolume((__int64)this - 920, 0, &a2->guidEventContext, 0, 1, 0LL);
      }
    }
    operator delete(v5);
  }
  return 0LL;
}
