/*
 * XREFs of ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140016A30 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14003AF50 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003B2D0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003B670 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003BE00 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003C510 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003C8B0 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

void __fastcall AEWMILOG_DATA(__int64 a1, void *a2, UCHAR a3, __int64 a4, unsigned __int64 a5, unsigned __int64 a6)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-68h] BYREF
  void *v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  unsigned __int64 v13; // [rsp+68h] [rbp-20h]
  unsigned __int64 v14; // [rsp+70h] [rbp-18h]

  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v11 = 0;
    EventTrace.Size = 88;
    v13 = a5;
    v14 = a6;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    EventTrace.Class.Type = a3;
    v10 = a2;
    v12 = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
