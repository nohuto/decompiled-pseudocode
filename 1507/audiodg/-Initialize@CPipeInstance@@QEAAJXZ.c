/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140012450 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140034414 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006D9C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140009340 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v2; // ebx
  _QWORD *v3; // rbx
  CProcessNode *v4; // rdi
  __int64 *v5; // r10
  _QWORD *v6; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  void *(__fastcall *v11)(CProcessNode *__hidden, unsigned int); // rbp

  if ( (*(_QWORD *)this || *((_DWORD *)this + 2)) && (*((_DWORD *)this + 31) || (*((_BYTE *)this + 128) & 8) != 0) )
  {
    v2 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v2 >= 0 )
      goto LABEL_6;
LABEL_24:
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        44LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v2);
    }
    return (unsigned int)v2;
  }
  v2 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
  if ( v2 < 0 )
    goto LABEL_24;
LABEL_6:
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v3 )
  {
    v4 = (CProcessNode *)v3[2];
    v5 = v3 + 1;
    v6 = v3;
    v3 = (_QWORD *)v3[1];
    if ( *((_DWORD *)v4 + 10) == 4 )
    {
      v8 = *v6;
      if ( v6 == *((_QWORD **)this + 2) )
        *((_QWORD *)this + 2) = v8;
      else
        *v3 = v8;
      v9 = *v5;
      if ( v6 == *((_QWORD **)this + 3) )
        *((_QWORD *)this + 3) = v9;
      else
        *(_QWORD *)(*v6 + 8LL) = v9;
      *v6 = *((_QWORD *)this + 6);
      v10 = (*((_QWORD *)this + 4))-- == 1LL;
      *((_QWORD *)this + 6) = v6;
      if ( v10 )
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((char *)this + 16);
      v11 = **(void *(__fastcall ***)(CProcessNode *__hidden, unsigned int))v4;
      if ( v11 == CProcessNode::`vector deleting destructor' )
        CProcessNode::`vector deleting destructor'(v4, 1u);
      else
        v11(v4, 1u);
    }
  }
  v2 = CPipeInstance::FixupStreamPipe(this);
  if ( v2 < 0 )
    goto LABEL_24;
  return (unsigned int)v2;
}
