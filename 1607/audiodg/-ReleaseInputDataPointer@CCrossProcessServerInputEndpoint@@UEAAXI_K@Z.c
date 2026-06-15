/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400141F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     WPP_SF_s @ 0x140039AAC (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14003C358 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-79h] BYREF
  char *v10; // [rsp+50h] [rbp-49h]
  int v11; // [rsp+58h] [rbp-41h]
  __int64 v12; // [rsp+60h] [rbp-39h]
  __int64 v13; // [rsp+68h] [rbp-31h]
  __int64 v14; // [rsp+70h] [rbp-29h]
  struct _EVENT_TRACE_HEADER v15; // [rsp+80h] [rbp-19h] BYREF
  char *v16; // [rsp+B0h] [rbp+17h]
  int v17; // [rsp+B8h] [rbp+1Fh]
  __int64 v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+2Fh]
  __int64 v20; // [rsp+D0h] [rbp+37h]

  v4 = a2;
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.Size = 88;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    EventTrace.UserTime = 0x20000;
    LOWORD(EventTrace.Version) = 1287;
    v10 = (char *)this - 440;
    v11 = 0;
    v12 = v4;
    v13 = 0LL;
    v14 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  if ( (_DWORD)v4 && ((*(_DWORD *)(*((_QWORD *)this - 47) + 156LL) & 1) != 0 || (*((_BYTE *)this - 288) & 1) != 0) )
  {
    v5 = *((_QWORD *)this - 47);
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 < 0 )
    {
      AEWMILOG_SECURITY(v6, (char *)this - 440, a3);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) )
      {
        WPP_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          38LL,
          &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
          "Security failure - memory overwrite detected - Invalid offset.");
      }
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, 0LL);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x645u, -2147467259);
    }
    else if ( *((_DWORD *)this + 4) <= 1u )
    {
      v7 = (unsigned int)(v4 * *((_DWORD *)this - 90) - *((_DWORD *)this + 20)) + v6;
      if ( v7 > *(_QWORD *)(v5 + 8) )
        v7 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 16) = v7;
    }
  }
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&v15, 0, 0x40uLL);
    v16 = (char *)this - 440;
    v19 = *((int *)this + 4);
    v15.Size = 88;
    v15.UserTime = 0x20000;
    v15.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(v15.Version) = 1288;
    v17 = 0;
    v18 = v4;
    v20 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &v15);
  }
  v8 = (void *)*((_QWORD *)this - 40);
  *((_DWORD *)this + 4) = 3;
  SetEvent(v8);
}
