/*
 * XREFs of ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140038690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetBufferSize(struct _RTL_CRITICAL_SECTION *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx

  v2 = this - 9;
  v5 = 0;
  EnterCriticalSection(this - 9);
  if ( a2 )
  {
    if ( LODWORD(this[-8].DebugInfo) )
      *a2 = LODWORD(this[-7].SpinCount) / LODWORD(this[-8].LockSemaphore);
    else
      v5 = -2005139437;
  }
  else
  {
    v5 = -2147467261;
  }
  LeaveCriticalSection(v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        v5);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetBufferSize", 0x430u, v5);
  }
  return (unsigned int)v5;
}
