/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003AAF4
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180035770 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180075AD0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x180072050 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800720A8 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180076A2C (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_dSD @ 0x18007774C (WPP_SF_dSD.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  int v3; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // r9d
  unsigned int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rdi
  int v13; // eax
  int v14; // r8d
  __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  LPCRITICAL_SECTION v18; // [rsp+30h] [rbp-40h] BYREF
  char v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+68h] [rbp-8h]
  __int64 v26; // [rsp+A0h] [rbp+30h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 944);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xB0u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((unsigned __int8 *)this + 936));
  }
  if ( *((_QWORD *)this + 123) && *((_BYTE *)this + 936) )
  {
    v26 = 0LL;
    v20 = 4LL;
    v21 = 0LL;
    v22 = 0LL;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    LODWORD(v21) = *((_DWORD *)this + 228);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 177LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids);
    }
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 123) + 48LL))(
           *((_QWORD *)this + 123),
           &PKEY_AudioSession_MasterVolume,
           &v20);
    v6 = v5;
    if ( v5 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          178,
          (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          *((_QWORD *)this + 107),
          v5);
      }
      v6 = 0;
    }
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    v7 = *((_DWORD *)this + 231);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xB3u,
          (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          v7);
      }
      v6 = ATL::CComSafeArray<float,4>::Create(&v26, *((unsigned int *)this + 231));
      if ( !v6 )
      {
        v8 = 0;
        if ( *((_DWORD *)this + 231) )
        {
          while ( 1 )
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                180LL,
                &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
                v8,
                *(float *)(*((_QWORD *)this + 116) + 4LL * v8));
            }
            v6 = ATL::CComSafeArray<float,4>::SetAt(&v26, v8, *((_QWORD *)this + 116) + 4LL * v8);
            if ( v6 )
              break;
            if ( ++v8 >= *((_DWORD *)this + 231) )
              goto LABEL_39;
          }
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dSD(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v8, *((_QWORD *)this + 107), v6);
          }
        }
      }
    }
LABEL_39:
    v11 = *((_DWORD *)this + 231);
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    if ( v11 )
    {
      if ( !v6 )
      {
        v12 = *((_QWORD *)this + 123);
        LOWORD(v20) = 8196;
        v21 = v26;
        v13 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int64 *))(*(_QWORD *)v12 + 48LL))(
                v12,
                &PKEY_AudioSession_ChannelVolume,
                &v20);
        if ( v13 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              182,
              (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
              *((_QWORD *)this + 107),
              v13);
          }
        }
      }
    }
    v23 = 11LL;
    v24 = 0LL;
    v25 = 0LL;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    v14 = *((_DWORD *)this + 229);
    if ( v14 )
      v15 = -1;
    else
      v15 = 0;
    LOWORD(v24) = v15;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        183LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (unsigned int)v15,
        v14);
    }
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 123) + 48LL))(
            *((_QWORD *)this + 123),
            &PKEY_AudioSession_Mute,
            &v23);
    if ( v16
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        184,
        (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        *((_QWORD *)this + 107),
        v16);
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 123) + 56LL))(*((_QWORD *)this + 123));
    v3 = v17;
    if ( v17 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          185,
          (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
          *((_QWORD *)this + 107),
          v17);
      }
      v3 = 0;
    }
    ATL::CComSafeArray<float,4>::Destroy(&v26);
  }
  LeaveCriticalSection(v1);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBAu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v3);
  }
  return (unsigned int)v3;
}
