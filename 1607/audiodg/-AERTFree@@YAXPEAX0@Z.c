/*
 * XREFs of ?AERTFree@@YAXPEAX0@Z @ 0x140012620
 * Callers:
 *     ??_GCAPOExceptionWrapper@@UEAAPEAXI@Z @ 0x140010A40 (--_GCAPOExceptionWrapper@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140011500 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140013600 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140013F5C (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x1400351AC (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140038D60 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 */

void __fastcall AERTFree(void *a1, void *a2)
{
  int v3; // edi
  _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+50h] [rbp-58h]
  int v6; // [rsp+58h] [rbp-50h]
  void *v7; // [rsp+60h] [rbp-48h]
  __int64 v8; // [rsp+68h] [rbp-40h]
  __int64 v9; // [rsp+70h] [rbp-38h]
  __int64 v10; // [rsp+78h] [rbp-30h]
  __int64 v11; // [rsp+80h] [rbp-28h]
  __int64 v12; // [rsp+88h] [rbp-20h]
  __int64 v13; // [rsp+90h] [rbp-18h]

  v3 = -2147467259;
  if ( a2 )
  {
    if ( a1 )
    {
      v3 = RtlFreeMemoryBlockLookaside(a2, a1);
      if ( (v3 & 0xC0000000) == 0xC0000000
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_ae0e5f86dcf339e9416e2a34673eb067_Traceguids, a2);
      }
    }
  }
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.UserTime = 0x20000;
    EventTrace.Size = 120;
    v5 = 0LL;
    v6 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    v13 = v3;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    LOWORD(EventTrace.Version) = 1286;
    v7 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
