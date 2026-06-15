/*
 * XREFs of ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x180039C50
 * Callers:
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x18000F040 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
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
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      -2147467261);
  }
  return v2;
}
