/*
 * XREFs of ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x180002090
 * Callers:
 *     ?GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x180001EE0 (-GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelCount(CVolumeControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 29);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this, v3);
    }
  }
  else
  {
    v2 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelCount", 0x184u, -2147467261);
  }
  return v2;
}
