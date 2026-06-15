/*
 * XREFs of ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x14003C104
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014330 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400175F0 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140017900 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140039E60 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003A1F0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003A5B0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003AD70 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

void __fastcall AEWMILOG_DATA(
        __int64 a1,
        void *a2,
        __int64 a3,
        UCHAR a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-60h] BYREF
  void *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  unsigned __int64 v12; // [rsp+60h] [rbp-20h]
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]
  unsigned __int64 v14; // [rsp+70h] [rbp-10h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v11 = 0;
    EventTrace.Size = 88;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    EventTrace.Class.Level = 5;
    EventTrace.Class.Type = a4;
    v10 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
