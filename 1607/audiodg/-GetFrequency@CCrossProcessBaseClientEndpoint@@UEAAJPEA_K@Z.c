/*
 * XREFs of ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140038B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetFrequency(
        CCrossProcessBaseClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 82, 1, 1) )
    {
      *a2 = *(unsigned int *)(*((_QWORD *)this - 39) + 160LL);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetFrequency", 0x495u, v2);
  return v2;
}
