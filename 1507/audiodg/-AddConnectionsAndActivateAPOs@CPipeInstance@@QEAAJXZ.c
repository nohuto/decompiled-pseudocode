/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x1400061C0
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F2B0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 * Callees:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140005FF0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140009820 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400330E0 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 */

__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(CPipeInstance *this)
{
  __int64 v1; // rdi
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  CConnectionInstance *v6; // rsi
  struct IAudioProcessor *v7; // rdx
  int v8; // eax
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 18);
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v1 + 32LL))(v1, &v11);
  if ( v3 < 0 )
    goto LABEL_14;
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    v5 = *(_QWORD *)&WPP_GLOBAL_Control;
    do
    {
      v6 = *(CConnectionInstance **)(v4 + 16);
      v4 = *(_QWORD *)(v4 + 8);
      v7 = (struct IAudioProcessor *)*((_QWORD *)this + 18);
      v8 = *((_DWORD *)v6 + 4);
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v3 = -2147418113;
          goto LABEL_19;
        }
        v9 = CConnectionInstance::AddCaptureConnection(v6, v7, v11);
      }
      else
      {
        v9 = CConnectionInstance::AddRenderConnection(v6, v7, v11);
      }
      v3 = v9;
      if ( v9 >= 0 )
      {
        *((_DWORD *)v6 + 1) = 1;
        goto LABEL_8;
      }
      v5 = *(_QWORD *)&WPP_GLOBAL_Control;
LABEL_19:
      if ( (unsigned int *)v5 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(v5 + 28) & 0x20000) == 0
        || *(_BYTE *)(v5 + 25) < 2u )
      {
        goto LABEL_9;
      }
      WPP_SF_D(*(_QWORD *)(v5 + 16), 12LL, &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids, (unsigned int)v3);
LABEL_8:
      v5 = *(_QWORD *)&WPP_GLOBAL_Control;
LABEL_9:
      if ( v3 < 0 )
        goto LABEL_23;
    }
    while ( v4 );
  }
  v3 = CPipeInstance::ActivateAPOs(this, v11);
  if ( v3 < 0
    || (result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 40LL))(
                   *((_QWORD *)this + 18),
                   v11),
        v3 = result,
        (int)result < 0) )
  {
LABEL_14:
    v5 = *(_QWORD *)&WPP_GLOBAL_Control;
LABEL_23:
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18), v11);
      v5 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
    if ( (unsigned int *)v5 != &WPP_GLOBAL_Control && (*(_DWORD *)(v5 + 28) & 0x20000) != 0 && *(_BYTE *)(v5 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v5 + 16), 47LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)v3);
    return (unsigned int)v3;
  }
  else
  {
    *((_DWORD *)this + 29) = 1;
  }
  return result;
}
