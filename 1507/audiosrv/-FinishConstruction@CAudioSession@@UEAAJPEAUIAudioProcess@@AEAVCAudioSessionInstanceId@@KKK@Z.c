/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18000FE10
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000BD44 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x18000C6C0 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EF5C (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180011BF0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     WPP_SF__guid_ @ 0x180072E00 (WPP_SF__guid_.c)
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
  RPC_STATUS v11; // eax
  RPC_STATUS v12; // eax
  __int64 (__fastcall *v13)(CPerStreamVolumeAudioSession *__hidden, unsigned int); // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(CProcess *__hidden, struct IAudioSessionInfo *); // rsi
  int v16; // eax
  __int64 v17; // rcx
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  __int64 v21; // rdx
  ATL::CAtlException *v22; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v23; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v25; // [rsp+50h] [rbp-38h]
  int v27; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+98h] [rbp+10h]

  v6 = a4;
  v9 = this;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      82,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)a3 + 9),
      a4);
  }
  v9[89] = a2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  started = CAudioSessionInstanceId::Copy((CAudioSessionInstanceId *)(v9 + 79), a3);
  if ( started < 0 )
    goto LABEL_51;
  *((_BYTE *)v9 + 226) = v6 & 1;
  if ( (v6 & 4) != 0 )
  {
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9 + 30, L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202");
    }
    catch ( ATL::CAtlException *v22 )
    {
      v19 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _resetstkoflw();
      v27 = *(_DWORD *)v19;
      started = *(_DWORD *)v19;
      if ( v27 < 0 )
        goto LABEL_51;
      v9 = this;
      v6 = a4;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9 + 31, L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203");
    }
    catch ( ATL::CAtlException *v23 )
    {
      v20 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        _resetstkoflw();
      v28 = *(_DWORD *)v20;
      started = *(_DWORD *)v20;
      if ( v28 < 0 )
        goto LABEL_51;
      v9 = this;
      v6 = a4;
    }
    *((_BYTE *)v9 + 225) = 1;
    *((_DWORD *)v9 + 59) = 5000;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((LPWSTR *)v9 + 30);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((LPWSTR *)v9 + 31);
  }
  *((_DWORD *)v9 + 114) = ((unsigned __int8)v6 >> 5) & 1;
  *((_DWORD *)v9 + 57) = a5;
  *((_DWORD *)v9 + 58) = v6;
  *((_DWORD *)v9 + 51) = a6;
  v11 = UuidCreate((UUID *)v9 + 13);
  started = v11;
  if ( v11 )
  {
    if ( v11 > 0 )
      started = (unsigned __int16)v11 | 0x80070000;
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v21 = 83LL;
LABEL_42:
      WPP_SF_D(*(_QWORD *)(v17 + 16), v21, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, (unsigned int)started);
      goto LABEL_28;
    }
LABEL_29:
    if ( started >= 0 )
      return (unsigned int)started;
    goto LABEL_52;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF__guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      84LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v9 + 26);
  }
  v12 = UuidCreate((UUID *)v9 + 16);
  started = v12;
  if ( v12 )
  {
    if ( v12 > 0 )
      started = (unsigned __int16)v12 | 0x80070000;
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v21 = 85LL;
      goto LABEL_42;
    }
    goto LABEL_29;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF__guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      86LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v9 + 32);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 90);
  v25 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *((_DWORD *)v9 + 190) = 1065353216;
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  started = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v9 + 58);
  if ( started >= 0 )
  {
    v13 = (__int64 (__fastcall *)(CPerStreamVolumeAudioSession *__hidden, unsigned int))*((_QWORD *)*v9 + 25);
    v14 = v13 == CPerStreamVolumeAudioSession::CompleteConstruction
        ? CPerStreamVolumeAudioSession::CompleteConstruction((CPerStreamVolumeAudioSession *)v9, v6)
        : v13((CPerStreamVolumeAudioSession *)v9, v6);
    started = v14;
    if ( v14 >= 0 )
    {
      v15 = *(__int64 (__fastcall **)(CProcess *__hidden, struct IAudioSessionInfo *))(*(_QWORD *)v9[89] + 24LL);
      v16 = v15 == CProcess::RegisterSession
          ? CProcess::RegisterSession(v9[89], (struct IAudioSessionInfo *)v9)
          : v15(v9[89], (struct IAudioSessionInfo *)v9);
      started = v16;
      if ( v16 >= 0 )
      {
        started = CAudioSession::StartInactiveTimer(v9);
LABEL_28:
        v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        goto LABEL_29;
      }
    }
  }
LABEL_51:
  v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_52:
  if ( (struct _GUID *)v17 != &WPP_GLOBAL_Control && (*(_BYTE *)(v17 + 28) & 0x40) != 0 && *(_BYTE *)(v17 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v17 + 16), 88LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, (unsigned int)started);
  return (unsigned int)started;
}
