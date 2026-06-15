/*
 * XREFs of ?AEWMILOG_DROP@@YAXKPEAX_K1@Z @ 0x14003E494
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017D00 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

void __fastcall AEWMILOG_DROP(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-58h] BYREF
  void *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-10h]

  if ( g_u32AEWMILogLevel )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v9 = 0;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DROP;
    EventTrace.Size = 80;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Type = 0;
    v8 = a2;
    v10 = a3;
    v11 = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
