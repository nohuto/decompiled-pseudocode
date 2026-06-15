/*
 * XREFs of ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x1800416A0
 * Callers:
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180041110 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x1800411F4 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 */

__int64 __fastcall CMuteHardware::GetLevelData(CMuteHardware *this)
{
  int MuteValue; // ebx

  MuteValue = CMuteHardware::GetMuteValue(this, (int *)this + 6);
  if ( MuteValue < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      MuteValue);
  }
  return (unsigned int)MuteValue;
}
