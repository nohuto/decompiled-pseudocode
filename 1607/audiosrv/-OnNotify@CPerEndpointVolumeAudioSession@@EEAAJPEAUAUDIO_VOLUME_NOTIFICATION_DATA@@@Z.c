/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18005D820
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_q_guid_ @ 0x1800564F0 (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x180059030 (WPP_SF_qdgg.c)
 *     WPP_SF_q_guid__guid_ @ 0x18005FF90 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x18005FFFC (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x180060054 (WPP_SF_qgg_HEX__HEX_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2,
        int a3)
{
  char v3; // r14
  float *v5; // r12
  CAudioSession *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  CAudioSession *v12; // rcx
  float *p_fMasterVolume; // r15
  __m128 fMasterVolume_low; // xmm0
  _DWORD *v15; // r13
  __m128 v16; // xmm1
  unsigned int v17; // eax
  __int64 v18; // rsi
  float v19; // xmm0_4
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // esi
  unsigned int v23; // r14d
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  float v27; // xmm1_4
  __int64 v29; // [rsp+20h] [rbp-50h]
  float *v30; // [rsp+40h] [rbp-30h] BYREF
  __int16 v31; // [rsp+48h] [rbp-28h]
  char *v32; // [rsp+50h] [rbp-20h] BYREF
  __int16 v33; // [rsp+58h] [rbp-18h]
  LPCRITICAL_SECTION v34; // [rsp+60h] [rbp-10h] BYREF
  char v35; // [rsp+68h] [rbp-8h]
  char v36; // [rsp+B0h] [rbp+40h]
  char v37; // [rsp+B8h] [rbp+48h]

  v3 = 0;
  v36 = 0;
  v5 = 0LL;
  v37 = 0;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x97u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      (char *)this - 1008,
      a2);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = (char *)this - 608;
  v9 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 76);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 76) )
    v9 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( v7 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v7 + 28) & 0x40) != 0 && *((_BYTE *)v7 + 25) >= 4u )
      WPP_SF_q_guid__guid_(*((_QWORD *)v7 + 2), (_DWORD)v8, a3, (_DWORD)this - 1008, (__int64)a2, (__int64)this - 608);
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this - 136));
    v11 = *((_DWORD *)this - 23);
    if ( a2->bMuted == v11 )
    {
      v12 = WPP_GLOBAL_Control;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          154LL,
          &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          (char *)this - 1008,
          v11,
          a2->bMuted);
        v12 = WPP_GLOBAL_Control;
      }
      v36 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    v15 = (_DWORD *)((char *)this - 96);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 24) )
    {
      if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        v16 = (__m128)(unsigned int)*v15;
        v30 = &a2->fMasterVolume;
        v31 = 4;
        v32 = (char *)this - 96;
        v33 = 4;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v12 + 2),
          v10,
          v11,
          (_DWORD)this - 1008,
          *(_OWORD *)&_mm_cvtps_pd(v16),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v32,
          (__int64)&v30);
        v12 = WPP_GLOBAL_Control;
      }
      v37 = 1;
    }
    v17 = *((_DWORD *)this - 6);
    if ( a2->nChannels == v17 )
    {
      v5 = (float *)operator new(saturated_mul(v17, 4uLL));
      if ( v5 && (v18 = 0LL, *((_DWORD *)this - 6)) )
      {
        do
        {
          if ( *p_fMasterVolume == 0.0 )
          {
            v19 = FLOAT_1_0;
            v20 = (unsigned int)v18;
            v5[v20] = 1.0;
          }
          else
          {
            v19 = a2->afChannelVolumes[v18] / *p_fMasterVolume;
            v20 = (unsigned int)v18;
            v5[v20] = v19;
          }
          v21 = *((_QWORD *)this - 2);
          if ( v19 == *(float *)(v20 * 4 + v21) )
          {
            v12 = WPP_GLOBAL_Control;
          }
          else
          {
            v12 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              LODWORD(v29) = v18;
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x9Cu,
                (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
                (char *)this - 1008,
                v29,
                *(float *)(v20 * 4 + v21),
                v19);
              v12 = WPP_GLOBAL_Control;
            }
            v3 = 1;
          }
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < *((_DWORD *)this - 6) );
        v15 = (_DWORD *)((char *)this - 96);
      }
      else
      {
        v12 = WPP_GLOBAL_Control;
      }
    }
    v22 = 0;
    if ( v35 )
    {
      ATL::CCritSecLock::Unlock(&v34);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v36 || v37 || v3 )
    {
      if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v12 + 2), 0x9Du, (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v3 )
      {
        v23 = 0;
        if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x9Eu, (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
        }
        ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this - 136));
        v24 = *((_DWORD *)this - 6);
        if ( a2->nChannels == v24 )
        {
          v25 = 0LL;
          if ( v24 )
          {
            do
            {
              v26 = *((_QWORD *)this - 2);
              v27 = v5[v25];
              if ( *(float *)(v26 + 4 * v25) != v27 )
              {
                *(float *)(v26 + 4 * v25) = v27;
                v23 = v25;
              }
              v25 = (unsigned int)(v25 + 1);
            }
            while ( (unsigned int)v25 < *((_DWORD *)this - 6) );
          }
          v22 = 1;
        }
        if ( v35 )
          ATL::CCritSecLock::Unlock(&v34);
        if ( v22 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 992, 1u, &a2->guidEventContext, v23, 1, 0LL);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v36 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 1008),
          a2->bMuted,
          (struct _GUID *)&EVENTCONTEXT_AUDIOSUBSYSTEM,
          1);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v37 )
      {
        if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x9Fu, (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
        }
        ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this - 136));
        *v15 = *(_DWORD *)p_fMasterVolume;
        if ( v35 )
          ATL::CCritSecLock::Unlock(&v34);
        CAudioSession::RecalculateSessionVolume((__int64)this - 992, 0, &a2->guidEventContext, 0, 1, 0LL);
      }
    }
    operator delete(v5);
  }
  else if ( v7 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v7 + 28) & 0x40) != 0 && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)v7 + 2),
      0x98u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      (__int64)this - 1008);
  }
  return 0LL;
}
