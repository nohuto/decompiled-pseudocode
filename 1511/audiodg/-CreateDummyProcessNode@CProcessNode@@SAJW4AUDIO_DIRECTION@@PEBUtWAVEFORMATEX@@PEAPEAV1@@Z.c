/*
 * XREFs of ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140012E70
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140012120 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140011480 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017A60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessNode::CreateDummyProcessNode(int a1, const struct tWAVEFORMATEX *a2, _QWORD *a3)
{
  CAudioMediaType *v6; // rbx
  _QWORD *v7; // rsi
  int v8; // ebp
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rdi
  __int64 v10; // r14
  unsigned int (__fastcall *v11)(CAudioMediaType *__hidden); // rdi
  __int64 v12; // r14
  __int64 (__fastcall *v13)(CAudioMediaType *); // rdi
  struct IAudioMediaType *v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  v7 = operator new(0x30uLL);
  if ( v7 )
  {
    *v7 = &CProcessNode::`vftable';
    v7[1] = 0LL;
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = a1;
    v7[4] = 0LL;
    *((_DWORD *)v7 + 10) = 4;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = CAudioMediaType::Create(a2, (unsigned int)a2->cbSize + 18, &v15, 0.0);
    if ( v8 >= 0 )
    {
      v6 = (CAudioMediaType *)v15;
      if ( (struct IAudioMediaType *)v7[1] != v15 )
      {
        if ( v15 )
        {
          AddRef = v15->lpVtbl->AddRef;
          if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
            CAudioMediaType::AddRef((CAudioMediaType *)v15);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v15);
        }
        v10 = v7[1];
        if ( v10 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(v7[1]);
        v7[1] = v6;
      }
      if ( (CAudioMediaType *)v7[2] != v6 )
      {
        if ( v6 )
        {
          v11 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v6 + 8LL);
          if ( v11 == CAudioMediaType::AddRef )
            CAudioMediaType::AddRef(v6);
          else
            v11(v6);
        }
        v12 = v7[2];
        if ( v12 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(v7[2]);
        v7[2] = v6;
      }
      *a3 = v7;
      goto LABEL_20;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    v6 = (CAudioMediaType *)v15;
  }
  else
  {
    v8 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
      (unsigned int)v8);
  }
LABEL_20:
  if ( v6 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v13 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v13(v6);
  }
  return (unsigned int)v8;
}
