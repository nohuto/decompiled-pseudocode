/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180014DF0 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x18001914C (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800261AC (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800299C0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800361A0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     WPP_SF__guid_ @ 0x180070DE4 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::FinishConstruction(
        CProcess **this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  CProcess **v9; // rdi
  int started; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  RPC_STATUS v13; // eax
  RPC_STATUS v14; // eax
  __int64 (__fastcall *v15)(CPerStreamVolumeAudioSession *__hidden, unsigned int); // rbx
  int v16; // eax
  int (*v17)(CProcess *__hidden, struct IAudioSessionInfo *); // rsi
  int v18; // eax
  TraceLoggingHProvider v19; // rcx
  ATL::CAtlException *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  ATL::CAtlException *v24; // rbx
  __int64 v25; // rdx
  ATL::CAtlException *v26; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v27; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v29; // [rsp+50h] [rbp-38h]
  int v31; // [rsp+98h] [rbp+10h]
  int v32; // [rsp+98h] [rbp+10h]

  v6 = a4;
  v9 = this;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      82,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)a3 + 9),
      a4);
  }
  v9[108] = a2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  started = CAudioSessionInstanceId::Copy((CAudioSessionInstanceId *)(v9 + 98), a3);
  if ( started < 0 )
    goto LABEL_51;
  *((_BYTE *)v9 + 370) = v6 & 1;
  if ( (v6 & 4) != 0 )
  {
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(
        (__int64 *)v9 + 48,
        L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
        v11,
        v12);
    }
    catch ( ATL::CAtlException *v26 )
    {
      v21 = v26;
      if ( *(_DWORD *)v26 == -1073741571 )
        _resetstkoflw();
      v31 = *(_DWORD *)v21;
      started = *(_DWORD *)v21;
      if ( v31 < 0 )
        goto LABEL_51;
      v9 = this;
      v6 = a4;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(
        (__int64 *)v9 + 49,
        L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
        v22,
        v23);
    }
    catch ( ATL::CAtlException *v27 )
    {
      v24 = v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        _resetstkoflw();
      v32 = *(_DWORD *)v24;
      started = *(_DWORD *)v24;
      if ( v32 < 0 )
        goto LABEL_51;
      v9 = this;
      v6 = a4;
    }
    *((_BYTE *)v9 + 369) = 1;
    *((_DWORD *)v9 + 95) = 5000;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((__int64 *)v9 + 48);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((__int64 *)v9 + 49);
  }
  *((_DWORD *)v9 + 152) = ((unsigned __int8)v6 >> 5) & 1;
  *((_DWORD *)v9 + 93) = a5;
  *((_DWORD *)v9 + 94) = v6;
  *((_DWORD *)v9 + 87) = a6;
  v13 = UuidCreate((UUID *)v9 + 22);
  started = v13;
  if ( v13 )
  {
    if ( v13 > 0 )
      started = (unsigned __int16)v13 | 0x80070000;
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v25 = 83LL;
LABEL_42:
      WPP_SF_D(*((_QWORD *)v19 + 2), v25, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, (unsigned int)started);
      goto LABEL_28;
    }
LABEL_29:
    if ( started >= 0 )
      return (unsigned int)started;
    goto LABEL_52;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 84LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v9 + 44);
  }
  v14 = UuidCreate((UUID *)v9 + 25);
  started = v14;
  if ( v14 )
  {
    if ( v14 > 0 )
      started = (unsigned __int16)v14 | 0x80070000;
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v25 = 85LL;
      goto LABEL_42;
    }
    goto LABEL_29;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 86LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v9 + 50);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 109);
  v29 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)v9 + 228) = 1065353216;
  if ( v29 )
    LeaveCriticalSection(lpCriticalSection);
  started = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v9 + 77);
  if ( started >= 0 )
  {
    v15 = (__int64 (__fastcall *)(CPerStreamVolumeAudioSession *__hidden, unsigned int))*((_QWORD *)*v9 + 25);
    v16 = v15 == CPerStreamVolumeAudioSession::CompleteConstruction
        ? CPerStreamVolumeAudioSession::CompleteConstruction((CPerStreamVolumeAudioSession *)v9, v6)
        : v15((CPerStreamVolumeAudioSession *)v9, v6);
    started = v16;
    if ( v16 >= 0 )
    {
      v17 = *(int (**)(CProcess *__hidden, struct IAudioSessionInfo *))(*(_QWORD *)v9[108] + 24LL);
      v18 = v17 == CProcess::RegisterSession
          ? CProcess::RegisterSession(v9[108], (struct IAudioSessionInfo *)v9)
          : ((__int64 (__fastcall *)(CProcess *, CProcess **))v17)(v9[108], v9);
      started = v18;
      if ( v18 >= 0 )
      {
        started = CAudioSession::StartInactiveTimer(v9);
LABEL_28:
        v19 = WPP_GLOBAL_Control;
        goto LABEL_29;
      }
    }
  }
LABEL_51:
  v19 = WPP_GLOBAL_Control;
LABEL_52:
  if ( v19 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v19 + 28) & 0x40) != 0
    && *((_BYTE *)v19 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v19 + 2), 88LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, (unsigned int)started);
  }
  return (unsigned int)started;
}
