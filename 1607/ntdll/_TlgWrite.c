/*
 * XREFs of _TlgWrite @ 0x1800D1CD0
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180009290 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082740 (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18005AF60 (EtwEventWriteTransfer.c)
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  unsigned int v7; // ecx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v10 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwEventWriteTransfer(*((_QWORD *)hProvider + 4), (int)v9, 0LL, 0LL, cData, (__int64)pData);
}
