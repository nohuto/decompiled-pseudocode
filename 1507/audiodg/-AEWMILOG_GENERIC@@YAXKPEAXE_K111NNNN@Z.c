/*
 * XREFs of ?AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z @ 0x1400395E4
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039AC0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x14003B1F0 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14003B960 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

void __fastcall AEWMILOG_GENERIC(
        __int64 a1,
        void *a2,
        UCHAR a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-61h] BYREF
  __int64 v14; // [rsp+50h] [rbp-31h]
  int v15; // [rsp+58h] [rbp-29h]
  __int64 v16; // [rsp+60h] [rbp-21h]
  unsigned __int64 v17; // [rsp+68h] [rbp-19h]
  unsigned __int64 v18; // [rsp+70h] [rbp-11h]
  unsigned __int64 v19; // [rsp+78h] [rbp-9h]
  double v20; // [rsp+80h] [rbp-1h]
  double v21; // [rsp+88h] [rbp+7h]
  double v22; // [rsp+90h] [rbp+Fh]
  double v23; // [rsp+98h] [rbp+17h]

  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v14 = 0LL;
    v15 = 0;
    EventTrace.Size = 128;
    v17 = a5;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_GENERIC;
    v18 = a6;
    v20 = a8;
    v21 = a9;
    v19 = a7;
    v22 = a10;
    v23 = a11;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Type = a3;
    v16 = a4;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
