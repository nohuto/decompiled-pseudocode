/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005870
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x1400058C0 (-ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceSharedBase *v1; // rcx
  __int64 (*v2)(void); // rax
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (CSystemAudioDeviceSharedBase *)((char *)this - 272);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 160LL);
  if ( (char *)v2 == (char *)CSystemAudioDeviceSharedBase::ResetAPOs )
    v3 = CSystemAudioDeviceSharedBase::ResetAPOs(v1);
  else
    v3 = v2();
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        (unsigned int)v3);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::PumpPaused", 0x262u, v4);
  }
  return v4;
}
