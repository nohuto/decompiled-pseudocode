/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400162C0
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015420 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140015D40 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037274 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400373C4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037514 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037664 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003CE24 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x14003D370 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
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
      v9 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
      {
        v10 = 35LL;
LABEL_19:
        WPP_SF_Pq(*(_QWORD *)(v9 + 16), v10, v5, a1, a2);
      }
    }
  }
  else
  {
    v9 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
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
