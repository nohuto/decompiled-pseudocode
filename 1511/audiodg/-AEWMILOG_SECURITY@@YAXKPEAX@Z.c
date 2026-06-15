/*
 * XREFs of ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E41C
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140014060 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014320 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B58 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A3E0 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14003AF20 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003B2A0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

void __fastcall AEWMILOG_SECURITY(__int64 a1, void *a2)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-48h] BYREF
  void *v4; // [rsp+50h] [rbp-18h]
  int v5; // [rsp+58h] [rbp-10h]

  if ( g_u32AEWMILogLevel )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v5 = 0;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_SECURITY;
    EventTrace.Size = 64;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Type = 0;
    v4 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
