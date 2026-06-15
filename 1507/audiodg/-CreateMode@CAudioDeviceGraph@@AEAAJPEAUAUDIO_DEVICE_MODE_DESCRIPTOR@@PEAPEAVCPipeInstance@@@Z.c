/*
 * XREFs of ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698
 * Callers:
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006148 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x1400061C0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x1400264C0 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002F4A0 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?Add@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAHAEBU_GUID@@AEBQEAVCPipeInstance@@@Z @ 0x140031564 (-Add@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1400322BC (-FindKey@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInsta.c)
 *     WPP_SF_qq @ 0x140032EF8 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::CreateMode(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  struct CPipeInstance **v3; // r12
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v4; // r13
  CAudioDeviceGraph *v5; // r14
  int ModePipeInstance; // edi
  int Key; // eax
  __int64 v8; // r11
  struct CPipeInstance *v9; // rax
  __int64 v10; // r8
  CPipeInstance *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  int *v17; // rbx
  CPipeInstance *v18[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v19; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v21; // [rsp+50h] [rbp-48h]

  v18[1] = (CPipeInstance *)-2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v18[0] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  *v3 = 0LL;
  if ( !*((_DWORD *)v4 + 13) )
  {
    ModePipeInstance = 0;
    goto LABEL_47;
  }
  Key = ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::FindKey(
          (char *)v5 + 296,
          (char *)v4 + 36);
  if ( Key == -1 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( Key < 0 || Key >= *(_DWORD *)(v8 + 16) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v9 = *(struct CPipeInstance **)(*(_QWORD *)(v8 + 8) + 8LL * Key);
  }
  *v3 = v9;
  if ( !v9 )
  {
    ModePipeInstance = CPipeInstance::CreateModePipeInstance(
                         *((struct IUnknown **)v5 + 14),
                         *((struct IUnknown **)v5 + 40),
                         v4,
                         *((struct CPipeInstance **)v5 + 16),
                         v18);
    if ( ModePipeInstance >= 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) == 0 )
      {
        v11 = v18[0];
      }
      else
      {
        v11 = v18[0];
        if ( *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
          WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 32LL, v10, v5, v18[0]);
      }
      ModePipeInstance = CPipeInstance::Initialize(v11);
      if ( ModePipeInstance < 0 )
        goto LABEL_43;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 33LL, v12, v5, v11);
      }
      ModePipeInstance = CPipeInstance::ConnectAPOs(v11, 0LL);
      if ( ModePipeInstance < 0 )
        goto LABEL_43;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 34LL, v13, v5, v11);
      }
      ModePipeInstance = CPipeInstance::AddConnectionsAndActivateAPOs(v11);
      if ( ModePipeInstance < 0 )
        goto LABEL_43;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 35LL, v14, v5, v11);
      }
      ATL::CCritSecLock::CCritSecLock(
        (ATL::CCritSecLock *)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 184));
      ModePipeInstance = 0;
      try
      {
        ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(
          (__int64 *)v5 + 17,
          (__int64 *)v18,
          v15);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v17 = (int *)v19;
        if ( *(_DWORD *)v19 == -1073741571 )
          _resetstkoflw();
        ModePipeInstance = *v17;
        if ( *v17 < 0 )
        {
          if ( v21 )
            LeaveCriticalSection(lpCriticalSection);
          v5 = this;
          v3 = a3;
          goto LABEL_42;
        }
        v5 = this;
        v3 = a3;
        v4 = a2;
        v11 = v18[0];
      }
      if ( v21 )
        LeaveCriticalSection(lpCriticalSection);
      if ( (unsigned int)ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::Add(
                           (__int64)v5 + 296,
                           (struct AUDIO_DEVICE_MODE_DESCRIPTOR *)((char *)v4 + 36),
                           v18) )
      {
        *v3 = v11;
        v11 = 0LL;
      }
      else
      {
        ModePipeInstance = -2147024882;
      }
      goto LABEL_43;
    }
LABEL_42:
    v11 = v18[0];
LABEL_43:
    if ( v11 )
      CPipeInstance::`scalar deleting destructor'(v11);
    goto LABEL_45;
  }
  ModePipeInstance = 0;
LABEL_45:
  if ( *v3 )
    ++*((_DWORD *)*v3 + 56);
LABEL_47:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 232));
  if ( ModePipeInstance < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x24u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      ModePipeInstance);
  }
  return (unsigned int)ModePipeInstance;
}
