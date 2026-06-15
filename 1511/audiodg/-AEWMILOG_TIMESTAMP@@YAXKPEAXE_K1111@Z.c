/*
 * XREFs of ?AEWMILOG_TIMESTAMP@@YAXKPEAXE_K1111@Z @ 0x14003E0A4
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017D00 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

void __fastcall AEWMILOG_TIMESTAMP(
        __int64 a1,
        void *a2,
        UCHAR a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+28h] [rbp-39h] BYREF
  void *v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  unsigned __int64 v15; // [rsp+70h] [rbp+Fh]
  unsigned __int64 v16; // [rsp+78h] [rbp+17h]
  unsigned __int64 v17; // [rsp+80h] [rbp+1Fh]
  unsigned __int64 v18; // [rsp+88h] [rbp+27h]

  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v13 = 0;
    EventTrace.Size = 104;
    v15 = a5;
    v16 = a6;
    v17 = a7;
    v18 = a8;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_TIMESTAMP;
    EventTrace.Class.Type = a3;
    v12 = a2;
    v14 = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
