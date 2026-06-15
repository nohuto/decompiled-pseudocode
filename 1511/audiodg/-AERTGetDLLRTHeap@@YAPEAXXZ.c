/*
 * XREFs of ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140015620
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400092E0 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140014B34 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015D80 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140035F5C (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037444 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037590 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400376DC (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037828 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039F40 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 AERTGetDLLRTHeap(void)
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  inited = InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
