/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003938
 * Callers:
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14002FC0C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140003A10 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140008A00 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(
        const struct tWAVEFORMATEX **a1,
        struct CStreamProcessNode **a2)
{
  char *v4; // rdi
  BOOL v5; // eax
  unsigned int v6; // esi

  v4 = (char *)operator new(0x38uLL);
  if ( v4 )
  {
    v5 = *(_DWORD *)a1 != 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = v5;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 3;
    *(_QWORD *)v4 = &CStreamProcessNode::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v6 = CAudioMediaType::Create(a1[9], (unsigned int)a1[9]->cbSize + 18, (struct IAudioMediaType **)v4 + 6, 0.0);
    if ( (v6 & 0x80000000) == 0 )
    {
      ATL::CComPtr<IAudioMediaType>::operator=(v4 + 8, v4 + 48);
      ATL::CComPtr<IAudioMediaType>::operator=(v4 + 16, v4 + 48);
      *a2 = (struct CStreamProcessNode *)v4;
      return v6;
    }
    (**(void (__fastcall ***)(void *, __int64))v4)(v4, 1LL);
  }
  else
  {
    v6 = -2147024882;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      16LL,
      &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
      v6);
  }
  return v6;
}
