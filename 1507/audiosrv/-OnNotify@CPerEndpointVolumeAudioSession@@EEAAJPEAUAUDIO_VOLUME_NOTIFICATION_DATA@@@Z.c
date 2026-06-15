/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18007A1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18000EA40 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180010610 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x18006E2CC (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x18007126C (WPP_SF_qdgg.c)
 *     WPP_SF_q_guid__guid_ @ 0x18007C69C (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x18007C708 (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x18007C760 (WPP_SF_qgg_HEX__HEX_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2,
        int a3)
{
  char v3; // r14
  float *v5; // r12
  __int64 v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
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
  v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q_guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xC6u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      (char *)this - 784,
      a2);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v8 = (char *)this - 528;
  v9 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 66);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 66) )
    v9 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control && (*(_BYTE *)(v7 + 28) & 0x40) != 0 && *(_BYTE *)(v7 + 25) >= 4u )
      WPP_SF_q_guid__guid_(*(_QWORD *)(v7 + 16), (_DWORD)v8, a3, (_DWORD)this - 784, (__int64)a2, (__int64)this - 528);
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this - 64));
    v11 = *((_DWORD *)this - 5);
    if ( a2->bMuted == v11 )
    {
      v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    else
    {
      v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qdd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          201LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          (char *)this - 784,
          v11,
          a2->bMuted);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      v36 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    v15 = (_DWORD *)((char *)this - 24);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 6) )
    {
      if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(v12 + 28) & 0x40) != 0
        && *(_BYTE *)(v12 + 25) >= 4u )
      {
        v16 = (__m128)(unsigned int)*v15;
        v30 = &a2->fMasterVolume;
        v31 = 4;
        v32 = (char *)this - 24;
        v33 = 4;
        WPP_SF_qgg_HEX__HEX_(
          *(_QWORD *)(v12 + 16),
          v10,
          v11,
          (_DWORD)this - 784,
          *(_OWORD *)&_mm_cvtps_pd(v16),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v32,
          (__int64)&v30);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      v37 = 1;
    }
    v17 = *((_DWORD *)this - 3);
    if ( a2->nChannels == v17 )
    {
      v5 = (float *)operator new(saturated_mul(v17, 4uLL));
      if ( v5 && (v18 = 0LL, *((_DWORD *)this - 3)) )
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
          v21 = *((_QWORD *)this - 1);
          if ( v19 == *(float *)(v20 * 4 + v21) )
          {
            v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          }
          else
          {
            v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              LODWORD(v29) = v18;
              WPP_SF_qdgg(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0xCBu,
                (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
                (char *)this - 784,
                v29,
                *(float *)(v20 * 4 + v21),
                v19);
              v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            }
            v3 = 1;
          }
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < *((_DWORD *)this - 3) );
        v15 = (_DWORD *)((char *)this - 24);
      }
      else
      {
        v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
    }
    v22 = 0;
    if ( v35 )
    {
      ATL::CCritSecLock::Unlock(&v34);
      v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( v36 || v37 || v3 )
    {
      if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(v12 + 28) & 0x40) != 0
        && *(_BYTE *)(v12 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v12 + 16), 0xCCu, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v3 )
      {
        v23 = 0;
        if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(v12 + 28) & 0x40) != 0
          && *(_BYTE *)(v12 + 25) >= 4u )
        {
          WPP_SF_(*(_QWORD *)(v12 + 16), 0xCDu, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
        }
        ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this - 64));
        v24 = *((_DWORD *)this - 3);
        if ( a2->nChannels == v24 )
        {
          v25 = 0LL;
          if ( v24 )
          {
            do
            {
              v26 = *((_QWORD *)this - 1);
              v27 = v5[v25];
              if ( *(float *)(v26 + 4 * v25) != v27 )
              {
                *(float *)(v26 + 4 * v25) = v27;
                v23 = v25;
              }
              v25 = (unsigned int)(v25 + 1);
            }
            while ( (unsigned int)v25 < *((_DWORD *)this - 3) );
          }
          v22 = 1;
        }
        if ( v35 )
          ATL::CCritSecLock::Unlock(&v34);
        if ( v22 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 768, 1u, &a2->guidEventContext, v23, 1, 0LL);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v36 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 784),
          a2->bMuted,
          (struct _GUID *)&EVENTCONTEXT_AUDIOSUBSYSTEM,
          1);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v37 )
      {
        if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(v12 + 28) & 0x40) != 0
          && *(_BYTE *)(v12 + 25) >= 4u )
        {
          WPP_SF_(*(_QWORD *)(v12 + 16), 0xCEu, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
        }
        ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this - 64));
        *v15 = *(_DWORD *)p_fMasterVolume;
        if ( v35 )
          ATL::CCritSecLock::Unlock(&v34);
        CAudioSession::RecalculateSessionVolume((__int64)this - 768, 0, &a2->guidEventContext, 0, 1, 0LL);
      }
    }
    operator delete(v5);
  }
  else if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control && (*(_BYTE *)(v7 + 28) & 0x40) != 0 && *(_BYTE *)(v7 + 25) >= 4u )
  {
    WPP_SF_q(*(_QWORD *)(v7 + 16), 0xC7u, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids, (char *)this - 784);
  }
  return 0LL;
}
