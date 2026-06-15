/*
 * XREFs of ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140014D40
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140013600 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140032A50 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x1400331D4 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTZoneAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+38h] [rbp-29h] BYREF
  __int64 v9; // [rsp+68h] [rbp+7h]
  int v10; // [rsp+70h] [rbp+Fh]
  void *v11; // [rsp+78h] [rbp+17h]
  unsigned __int64 v12; // [rsp+80h] [rbp+1Fh]
  __int64 v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]
  __int64 v15; // [rsp+98h] [rbp+37h]
  __int64 v16; // [rsp+A0h] [rbp+3Fh]
  __int64 v17; // [rsp+A8h] [rbp+47h]
  __int64 v18; // [rsp+D8h] [rbp+77h] BYREF

  v18 = 0LL;
  v4 = RtlAllocateMemoryZone(a2, a1, &v18);
  if ( !v18 )
  {
    v6 = 0x100000LL;
    if ( a1 > 0x100000 )
      v6 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v6);
    v4 = RtlAllocateMemoryZone(a2, a1, &v18);
    if ( !v18
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_Pq(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, v7, a1, a2);
    }
  }
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v9 = 0LL;
    v10 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    EventTrace.Size = 120;
    v17 = v4;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    LOWORD(EventTrace.Version) = 1286;
    v11 = a2;
    v12 = a1;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  return v18;
}
