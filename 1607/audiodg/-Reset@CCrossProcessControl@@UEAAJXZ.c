/*
 * XREFs of ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140039400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x140038490 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14003861C (-DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140039218 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Reset(CCrossProcessControl *this)
{
  int v2; // ebx
  unsigned __int8 v3; // r8
  CCrossProcessBaseEndpoint *v4; // rax
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v4 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v5 = *(_DWORD *)(*((_QWORD *)v4 + 8) + 156LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, v5, v3) )
    {
      if ( (v5 & 1) != 0 )
      {
        v2 = -2005139434;
      }
      else
      {
        WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 1) + 120LL), 0x3E8u);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 16LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 8LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 144LL), 0LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 160LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 1) + 168LL) = 0LL;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 136LL), 1);
        CCrossProcessBaseEndpoint::DrainAndResetQueue(*((CCrossProcessBaseEndpoint **)this + 1));
        AEWMILOG_CONTROL(v6, this, v7, 8u);
      }
    }
    else
    {
      v2 = -2005139387;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x20u,
        (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        v2);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Reset", 0x581u, v2);
  }
  return (unsigned int)v2;
}
