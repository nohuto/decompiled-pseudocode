/*
 * XREFs of ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140016374
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140015D40 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039EC0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

__int64 __fastcall AERTCreateZoneHeap(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-29h] BYREF
  __int64 v6; // [rsp+50h] [rbp+7h]
  int v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+90h] [rbp+47h]
  __int64 v15; // [rsp+B8h] [rbp+6Fh] BYREF

  v15 = 0LL;
  v2 = RtlCreateMemoryZone(&v15, a1, 0LL);
  v3 = v2;
  if ( (v2 & 0xC0000000) == 0xC0000000
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 49LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
  }
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v6 = 0LL;
    v7 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    EventTrace.Size = 120;
    v8 = v15;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    EventTrace.Class.Type = 3;
    v9 = a1;
    v14 = v3;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  return v15;
}
