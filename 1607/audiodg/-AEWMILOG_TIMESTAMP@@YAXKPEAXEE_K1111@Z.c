/*
 * XREFs of ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x14003C050
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017320 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

void __fastcall AEWMILOG_TIMESTAMP(
        __int64 a1,
        void *a2,
        __int64 a3,
        UCHAR a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-41h] BYREF
  void *v12; // [rsp+50h] [rbp-11h]
  int v13; // [rsp+58h] [rbp-9h]
  unsigned __int64 v14; // [rsp+60h] [rbp-1h]
  unsigned __int64 v15; // [rsp+68h] [rbp+7h]
  unsigned __int64 v16; // [rsp+70h] [rbp+Fh]
  unsigned __int64 v17; // [rsp+78h] [rbp+17h]
  unsigned __int64 v18; // [rsp+80h] [rbp+1Fh]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v13 = 0;
    EventTrace.Size = 104;
    v14 = a5;
    v15 = a6;
    v16 = a7;
    v17 = a8;
    v18 = a9;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_TIMESTAMP;
    EventTrace.Class.Level = 5;
    EventTrace.Class.Type = a4;
    v12 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
