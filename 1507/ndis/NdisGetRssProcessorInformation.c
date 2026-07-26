/*
 * XREFs of NdisGetRssProcessorInformation @ 0x1C001D030
 * Callers:
 *     ndisGetAdapterRssInfo @ 0x1C00D0CA4 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00D0F10 (ndisGetHardwareInfo.c)
 * Callees:
 *     ndisCalculateRssProcessorCount @ 0x1C001D11C (ndisCalculateRssProcessorCount.c)
 *     ndisPopulateRssProcessorSet @ 0x1C001D1B8 (ndisPopulateRssProcessorSet.c)
 */

NDIS_STATUS __stdcall NdisGetRssProcessorInformation(
        NDIS_HANDLE NdisHandle,
        PNDIS_RSS_PROCESSOR_INFO RssProcessorInfo,
        PSIZE_T Size)
{
  NDIS_STATUS v3; // esi
  NDIS_HANDLE v6; // rbx
  ULONG_PTR v7; // rbp
  ULONG v8; // eax
  NDIS_STATUS result; // eax

  v3 = 0;
  v6 = NdisHandle;
  v7 = 0LL;
  if ( *(_BYTE *)NdisHandle != 17 )
  {
    if ( *(_BYTE *)NdisHandle != 18 )
    {
      v3 = -1073741811;
      goto LABEL_6;
    }
    v6 = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
  }
  v7 = 8LL * (unsigned int)ndisCalculateRssProcessorCount(v6) + 40;
  if ( *Size < v7 )
  {
    v3 = -1073676266;
    goto LABEL_6;
  }
  RssProcessorInfo->Header = (NDIS_OBJECT_HEADER)2622129;
  RssProcessorInfo->PreferredNumaNode = *((_WORD *)v6 + 2228);
  RssProcessorInfo->RssBaseProcessor = (PROCESSOR_NUMBER)*((_DWORD *)v6 + 1111);
  RssProcessorInfo[1].Header = (NDIS_OBJECT_HEADER)*((_DWORD *)v6 + 1112);
  RssProcessorInfo[1].Flags = *((_DWORD *)v6 + 1113);
  v8 = *((_DWORD *)v6 + 1110);
  if ( !v8 )
  {
    if ( *((_DWORD *)v6 + 380) != 1 )
    {
      RssProcessorInfo->MaxNumRssProcessors = 16;
      goto LABEL_5;
    }
    if ( *((_BYTE *)v6 + 1992) )
      v8 = *((_QWORD *)v6 + 286) < 0x2540BE400uLL ? 8 : 16;
    else
      v8 = 4;
  }
  RssProcessorInfo->MaxNumRssProcessors = v8;
LABEL_5:
  ndisPopulateRssProcessorSet(v6, RssProcessorInfo);
LABEL_6:
  result = v3;
  *Size = v7;
  return result;
}
