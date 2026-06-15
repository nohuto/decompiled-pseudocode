/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140007990 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400345A8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000BBD4 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000E764 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x1400113C0 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v2; // ebx
  _QWORD *v3; // rbx
  CProcessNode *v4; // rdi
  _QWORD *v5; // rdx
  __int64 result; // rax
  void *(__fastcall *v7)(CProcessNode *__hidden, unsigned int); // rbp

  if ( (*(_QWORD *)this || *((_DWORD *)this + 2)) && (*((_DWORD *)this + 32) || (*((_BYTE *)this + 132) & 8) != 0) )
  {
    v2 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v2 < 0 )
      goto LABEL_17;
  }
  else
  {
    v2 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v2 < 0 )
    {
LABEL_17:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          44LL,
          &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
          (unsigned int)v2);
      }
      return (unsigned int)v2;
    }
  }
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v3 )
  {
    v4 = (CProcessNode *)v3[2];
    v5 = v3;
    v3 = (_QWORD *)v3[1];
    if ( *((_DWORD *)v4 + 10) == 4 )
    {
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((_QWORD *)this + 2, v5);
      v7 = **(void *(__fastcall ***)(CProcessNode *__hidden, unsigned int))v4;
      if ( v7 == CProcessNode::`vector deleting destructor' )
        CProcessNode::`vector deleting destructor'(v4, 1u);
      else
        v7(v4, 1u);
    }
  }
  result = CPipeInstance::FixupStreamPipe(this);
  v2 = result;
  if ( (int)result < 0 )
    goto LABEL_17;
  return result;
}
