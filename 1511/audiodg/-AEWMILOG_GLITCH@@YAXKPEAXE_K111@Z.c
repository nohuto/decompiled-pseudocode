/*
 * XREFs of ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E050
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014320 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140018390 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14003AF20 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003B640 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

void __fastcall AEWMILOG_GLITCH(
        __int64 a1,
        void *a2,
        UCHAR a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-60h] BYREF
  void *v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]
  unsigned __int64 v16; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v12 = 0;
    EventTrace.Size = 96;
    v14 = a5;
    v15 = a6;
    v16 = a7;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_GLITCH;
    EventTrace.Class.Type = a3;
    v11 = a2;
    v13 = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
