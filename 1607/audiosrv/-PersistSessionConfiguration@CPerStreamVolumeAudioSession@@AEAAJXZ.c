/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005E2E8
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180008B10 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180008C20 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005DD10 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x180058F9C (WPP_SF_g.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x18005A9A8 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005AA00 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x18005F0DC (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_dSD @ 0x18005FD90 (WPP_SF_dSD.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  int v2; // edi
  float v3; // xmm0_4
  HRESULT v4; // eax
  HRESULT v5; // edi
  int v6; // r9d
  unsigned int v7; // esi
  int v8; // edx
  int v9; // r8d
  int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  __int16 v13; // ax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-60h]
  LPCRITICAL_SECTION v18; // [rsp+30h] [rbp-50h] BYREF
  char v19; // [rsp+38h] [rbp-48h]
  LPCRITICAL_SECTION v20; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  SAFEARRAY *v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]
  SAFEARRAY *v28; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1016));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x85u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((unsigned __int8 *)this + 1008));
  }
  if ( *((_QWORD *)this + 132) && *((_BYTE *)this + 1008) )
  {
    v28 = 0LL;
    v22 = 4LL;
    v23 = 0LL;
    v24 = 0LL;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    v3 = *((float *)this + 228);
    *(float *)&v23 = v3;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x86u,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        v3);
    }
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64 *))(**((_QWORD **)this + 132) + 48LL))(
           *((_QWORD *)this + 132),
           &PKEY_AudioSession_MasterVolume,
           &v22);
    v5 = v4;
    if ( v4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x87u,
          (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          *((const wchar_t **)this + 107),
          v4);
      }
      v5 = 0;
    }
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    v6 = *((_DWORD *)this + 246);
    if ( v6 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x88u,
          (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          v6);
      }
      v5 = ATL::CComSafeArray<float,4>::Create(&v28, *((_DWORD *)this + 246));
      if ( !v5 )
      {
        v7 = 0;
        if ( *((_DWORD *)this + 246) )
        {
          while ( 1 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x89u,
                (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
                v7,
                *(float *)(*((_QWORD *)this + 124) + 4LL * v7));
            }
            v5 = ATL::CComSafeArray<float,4>::SetAt(&v28, v7, *((_QWORD *)this + 124) + 4LL * v7);
            if ( v5 )
              break;
            if ( ++v7 >= *((_DWORD *)this + 246) )
              goto LABEL_37;
          }
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dSD(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, v7, *((_QWORD *)this + 107), v5);
          }
        }
      }
    }
LABEL_37:
    v10 = *((_DWORD *)this + 246);
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    if ( v10 )
    {
      if ( !v5 )
      {
        v11 = *((_QWORD *)this + 132);
        LOWORD(v22) = 8196;
        v23 = v28;
        v12 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v11 + 48LL))(
                v11,
                &PKEY_AudioSession_ChannelVolume,
                &v22);
        if ( v12 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(v17) = v12;
            WPP_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x8Bu,
              (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
              *((const wchar_t **)this + 107),
              v17);
          }
        }
      }
    }
    v25 = 11LL;
    v26 = 0LL;
    v27 = 0LL;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    if ( *((_DWORD *)this + 229) )
      v13 = -1;
    else
      v13 = 0;
    LOWORD(v26) = v13;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 140LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
    }
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    v14 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64 *))(**((_QWORD **)this + 132) + 48LL))(
            *((_QWORD *)this + 132),
            &PKEY_AudioSession_Mute,
            &v25);
    if ( v14
      && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v17) = v14;
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x8Du,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((const wchar_t **)this + 107),
        v17);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 132) + 56LL))(*((_QWORD *)this + 132));
    v2 = v15;
    if ( v15 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v17) = v15;
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x8Eu,
          (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          *((const wchar_t **)this + 107),
          v17);
      }
      v2 = 0;
    }
    ATL::CComSafeArray<float,4>::Destroy(&v28);
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::PersistSessionConfiguration", 5343, v2);
  }
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
  return (unsigned int)v2;
}
