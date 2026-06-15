/*
 * XREFs of ?AEWMILOG_CONTROL@@YAXKPEAXE_K@Z @ 0x140039560
 * Callers:
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x14003A580 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x14003A8D0 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x14003AA10 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

void __fastcall AEWMILOG_CONTROL(__int64 a1, void *a2, UCHAR a3)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-58h] BYREF
  void *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v7 = 0;
    v8 = 0LL;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_CONTROL;
    EventTrace.Size = 72;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Type = a3;
    v6 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
