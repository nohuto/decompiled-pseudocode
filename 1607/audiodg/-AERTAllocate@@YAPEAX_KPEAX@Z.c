/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012A20
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000FF60 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObjec.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140013600 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400150B4 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140036584 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400366B4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400367E4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140036914 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140032A50 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x1400331D4 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+60h] [rbp-58h]
  int v13; // [rsp+68h] [rbp-50h]
  void *v14; // [rsp+70h] [rbp-48h]
  unsigned __int64 v15; // [rsp+78h] [rbp-40h]
  __int64 v16; // [rsp+80h] [rbp-38h]
  __int64 v17; // [rsp+88h] [rbp-30h]
  __int64 v18; // [rsp+90h] [rbp-28h]
  __int64 v19; // [rsp+98h] [rbp-20h]
  __int64 v20; // [rsp+A0h] [rbp-18h]
  __int64 v21; // [rsp+C0h] [rbp+8h] BYREF

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
    if ( a1 <= 0x100000 )
      v8 = 0x100000LL;
    else
      v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v8);
    v6 = RtlAllocateMemoryBlockLookaside(a2, a1, &v21);
    if ( v6 >= 0 )
      goto LABEL_3;
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_3;
    }
    v10 = 35LL;
    goto LABEL_20;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    v10 = 36LL;
LABEL_20:
    WPP_SF_Pq(v9[2], v10, v5, a1, a2);
  }
LABEL_3:
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.UserTime = 0x20000;
    EventTrace.Size = 120;
    v20 = v6;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    LOWORD(EventTrace.Version) = 1286;
    v12 = 0LL;
    v13 = 0;
    v14 = a2;
    v18 = 0LL;
    v19 = 0LL;
    v15 = a1;
    v17 = 0LL;
    v16 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  return v21;
}
