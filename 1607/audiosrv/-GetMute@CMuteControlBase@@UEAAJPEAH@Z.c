/*
 * XREFs of ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x180026270
 * Callers:
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180017C20 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteControlBase::GetMute(CMuteControlBase *this, int *a2)
{
  unsigned int v2; // ebx

  v2 = -2147467261;
  if ( a2 )
  {
    v2 = 0;
    *a2 = *((_DWORD *)this + 6);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::GetMute", 0x103u, -2147467261);
  }
  return v2;
}
