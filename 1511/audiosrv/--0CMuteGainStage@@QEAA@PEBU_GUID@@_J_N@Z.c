/*
 * XREFs of ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x18003A880
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 */

CMuteGainStage *__fastcall CMuteGainStage::CMuteGainStage(CMuteGainStage *this, const struct _GUID *a2)
{
  *(_QWORD *)this = &CGainStage::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 32) = 1;
  *((_OWORD *)this + 1) = MutePolicyGuid;
  *((_DWORD *)this + 9) = 1;
  *(_QWORD *)this = &CMuteGainStage::`vftable';
  *((_BYTE *)this + 48) = 1;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_11d137dc2c7e5e4c147e050d3a8a7805_Traceguids);
  }
  return this;
}
