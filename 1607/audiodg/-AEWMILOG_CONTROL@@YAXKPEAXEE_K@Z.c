/*
 * XREFs of ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x140038490
 * Callers:
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140039400 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140039780 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400398C0 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

void __fastcall AEWMILOG_CONTROL(__int64 a1, void *a2, __int64 a3, UCHAR a4)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-58h] BYREF
  void *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v8 = 0;
    v9 = 0LL;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_CONTROL;
    EventTrace.Size = 72;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Level = 5;
    EventTrace.Class.Type = a4;
    v7 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
