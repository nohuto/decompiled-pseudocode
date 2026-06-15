/*
 * XREFs of ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x180026240
 * Callers:
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800262A0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x180025F28 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteHardware::GetLevelData(CMuteHardware *this)
{
  int MuteValue; // eax
  unsigned int v2; // ebx

  MuteValue = CMuteHardware::GetMuteValue(this, (int *)this + 6);
  v2 = MuteValue;
  if ( MuteValue < 0 )
    AudSrvTraceLoggingErrorHelper("CMuteHardware::GetLevelData", 0x140u, MuteValue);
  return v2;
}
