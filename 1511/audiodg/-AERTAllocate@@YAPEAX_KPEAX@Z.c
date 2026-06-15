/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015570
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015D80 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037444 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037590 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400376DC (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037828 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003C35C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x14003CAB8 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  void *v14; // [rsp+78h] [rbp+17h]
  unsigned __int64 v15; // [rsp+80h] [rbp+1Fh]
  __int64 v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  __int64 v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+A0h] [rbp+3Fh]
  __int64 v20; // [rsp+A8h] [rbp+47h]
  __int64 v21; // [rsp+C8h] [rbp+67h] BYREF

  v21 = 0LL;
  if ( !a2 )
  {
    v6 = -1073741670;
    goto LABEL_3;
  }
  v4 = RtlAllocateMemoryBlockLookaside(a2, a1, &v21);
  v6 = v4;
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741670 )
  {
    v8 = 0x100000LL;
    if ( a1 > 0x100000 )
      v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v8);
    v6 = RtlAllocateMemoryBlockLookaside(a2, a1, &v21);
    if ( v6 < 0 )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        v10 = 35LL;
LABEL_19:
        WPP_SF_Pq(v9[2], v10, v5, a1, a2);
      }
    }
  }
  else
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      v10 = 36LL;
      goto LABEL_19;
    }
  }
LABEL_3:
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v12 = 0LL;
    v13 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    EventTrace.Size = 120;
    v20 = v6;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    EventTrace.Class.Type = 6;
    v14 = a2;
    v15 = a1;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  return v21;
}
