/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003824
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140003A10 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003A90 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140008A00 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceProcessNode::CreateDeviceProcessNode(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CDeviceProcessNode **a2)
{
  char *v4; // rdi
  int v5; // eax
  int v6; // esi
  __int64 v8; // rcx
  struct CEndpointInstance *v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = (char *)operator new(0x38uLL);
  v9 = (struct CEndpointInstance *)v4;
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 16);
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = v5;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 1;
    *(_QWORD *)v4 = &CDeviceProcessNode::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        13LL,
        &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids);
    }
    v6 = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v9);
    if ( v6 >= 0 )
    {
      *((_QWORD *)v4 + 4) = v9;
      v6 = CAudioMediaType::Create(
             *((const struct tWAVEFORMATEX **)a1 + 1),
             (unsigned int)*(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
             (struct IAudioMediaType **)v4 + 6,
             0.0);
      if ( v6 >= 0 )
      {
        ATL::CComPtr<IAudioMediaType>::operator=(v4 + 8, v4 + 48);
        ATL::CComPtr<IAudioMediaType>::operator=(v4 + 16, v4 + 48);
        *a2 = (struct CDeviceProcessNode *)v4;
        return (unsigned int)v6;
      }
    }
  }
  else
  {
    v6 = -2147024882;
  }
  v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      14LL,
      &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
      (unsigned int)v6);
    v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(void *, __int64))v4)(v4, 1LL);
    v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v8 != &WPP_GLOBAL_Control && (*(_DWORD *)(v8 + 28) & 0x20000) != 0 && *(_BYTE *)(v8 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v8 + 16), 15LL, &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids, (unsigned int)v6);
  return (unsigned int)v6;
}
