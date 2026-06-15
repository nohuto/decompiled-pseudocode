/*
 * XREFs of ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x180027A54
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
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
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_bfe4e2b61ee73595151d7148963b9c3a_Traceguids);
  }
  return this;
}
