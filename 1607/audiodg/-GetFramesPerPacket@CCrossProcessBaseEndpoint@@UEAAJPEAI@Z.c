/*
 * XREFs of ?GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140038AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFramesPerPacket(CCrossProcessBaseEndpoint *this, unsigned int *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      *a2 = *((_DWORD *)this + 21);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetFramesPerPacket", 0x20Eu, v2);
  return v2;
}
