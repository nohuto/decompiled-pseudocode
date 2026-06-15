/*
 * XREFs of ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400398C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140032E54 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x140038490 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140039218 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Stop(CCrossProcessControl *this)
{
  unsigned __int8 v2; // r8
  int v3; // ebx
  CCrossProcessBaseEndpoint *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v4 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v5 = *(_DWORD *)(*((_QWORD *)v4 + 8) + 156LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, v5, v2) )
    {
      if ( (v5 & 1) != 0 )
      {
        v3 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 156LL), 0xFFFFFFFC);
        AERTUnlockZoneHeap(
          *(void **)(*((_QWORD *)this + 1) + 112LL),
          (void *)(unsigned int)_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 136LL), 1));
        AEWMILOG_CONTROL(v6, this, v7, 7u);
      }
      else
      {
        v3 = -2005139433;
      }
    }
    else
    {
      v3 = -2005139387;
    }
  }
  else
  {
    v3 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        v3);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Stop", 0x5F9u, v3);
  }
  return (unsigned int)v3;
}
