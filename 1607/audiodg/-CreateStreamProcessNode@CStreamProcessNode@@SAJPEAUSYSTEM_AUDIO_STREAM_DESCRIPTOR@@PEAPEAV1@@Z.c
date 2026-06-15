/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014F78
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140015050 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(
        const struct tWAVEFORMATEX **a1,
        struct CStreamProcessNode **a2)
{
  char *v4; // rbx
  BOOL v5; // eax
  unsigned int v6; // edi

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
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_00124d7d191530a40c6a65552c411b8b_Traceguids, v6);
  }
  AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamProcessNode", 0x192u, v6);
  return v6;
}
