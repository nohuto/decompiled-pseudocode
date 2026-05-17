/*
 * XREFs of _TlgWrite @ 0x180047838
 * Callers:
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x180049C90 (EtwEventWriteTransfer.c)
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  unsigned int v6; // ecx
  _DWORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v8[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v9 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)off_180142178;
  v6 = *(unsigned __int16 *)off_180142178;
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwEventWriteTransfer(qword_180142190, (unsigned int)v8, 0, 0, cData, (__int64)pData);
}
