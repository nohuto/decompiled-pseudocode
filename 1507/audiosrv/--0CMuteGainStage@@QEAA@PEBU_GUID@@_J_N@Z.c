/*
 * XREFs of ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x1800058A8
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180010610 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xCu,
      (__int64)&WPP_11d137dc2c7e5e4c147e050d3a8a7805_Traceguids);
  }
  return this;
}
