/*
 * XREFs of ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8
 * Callers:
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x140004C4C (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x14000DBF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?Add@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAHAEBU_GUID@@AEBQEAVCPipeInstance@@@Z @ 0x1400310A0 (-Add@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x140031E20 (-FindKey@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInsta.c)
 *     WPP_SF_qq @ 0x14003314C (WPP_SF_qq.c)
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
  int *v16; // rbx
  CPipeInstance *v17[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v18; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v20; // [rsp+50h] [rbp-48h]

  v17[1] = (CPipeInstance *)-2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v17[0] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  *v3 = 0LL;
  if ( !*((_DWORD *)v4 + 13) )
  {
    ModePipeInstance = 0;
    goto LABEL_47;
  }
  Key = ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::FindKey(
          (char *)v5 + 304,
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
                         *((struct IUnknown **)v5 + 41),
                         v4,
                         *((struct CPipeInstance **)v5 + 16),
                         v17);
    if ( ModePipeInstance >= 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
      {
        v11 = v17[0];
      }
      else
      {
        v11 = v17[0];
        if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, v10, v5, v17[0]);
      }
      ModePipeInstance = CPipeInstance::Initialize(v11);
      if ( ModePipeInstance < 0 )
        goto LABEL_43;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, v12, v5, v11);
      }
      ModePipeInstance = CPipeInstance::ConnectAPOs(v11, 0LL);
      if ( ModePipeInstance < 0 )
        goto LABEL_43;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, v13, v5, v11);
      }
      ModePipeInstance = CPipeInstance::AddConnectionsAndActivateAPOs(v11);
      if ( ModePipeInstance < 0 )
        goto LABEL_43;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, v14, v5, v11);
      }
      ATL::CCritSecLock::CCritSecLock(
        (ATL::CCritSecLock *)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 184));
      ModePipeInstance = 0;
      try
      {
        ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(
          (struct ATL::CAtlPlex **)v5 + 17,
          v17);
      }
      catch ( ATL::CAtlException *v18 )
      {
        v16 = (int *)v18;
        if ( *(_DWORD *)v18 == -1073741571 )
          _resetstkoflw();
        ModePipeInstance = *v16;
        if ( *v16 < 0 )
        {
          if ( v20 )
            LeaveCriticalSection(lpCriticalSection);
          v5 = this;
          v3 = a3;
          goto LABEL_42;
        }
        v5 = this;
        v3 = a3;
        v4 = a2;
        v11 = v17[0];
      }
      if ( v20 )
        LeaveCriticalSection(lpCriticalSection);
      if ( (unsigned int)ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::Add(
                           (__int64)v5 + 304,
                           (struct AUDIO_DEVICE_MODE_DESCRIPTOR *)((char *)v4 + 36),
                           v17) )
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
    v11 = v17[0];
LABEL_43:
    if ( v11 )
      CPipeInstance::`scalar deleting destructor'((LPVOID *)v11);
    goto LABEL_45;
  }
  ModePipeInstance = 0;
LABEL_45:
  if ( *v3 )
    ++*((_DWORD *)*v3 + 56);
LABEL_47:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 232));
  if ( ModePipeInstance < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x34u,
      (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      ModePipeInstance);
  }
  return (unsigned int)ModePipeInstance;
}
