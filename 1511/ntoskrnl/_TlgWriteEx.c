/*
 * XREFs of _TlgWriteEx @ 0x1401CF38C
 * Callers:
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStop @ 0x140092348 (MiLogProcessWorkingSetsStop.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400C7CC0 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x1400F15D4 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x140108AFC (MiStoreLogNotCandidate.c)
 *     MiLogWsEmptyControl @ 0x14012D9C4 (MiLogWsEmptyControl.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401CF924 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401CFA94 (MiLogOutswappedProcessCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1401E538C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1401E53F4 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1401E5494 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1401E5524 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1401E5668 (MiStoreLogWriteIssueRetry.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406218DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCreateImageFileMapFailure @ 0x140623B00 (MiLogCreateImageFileMapFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14074CCA4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
 */

TLG_STATUS __stdcall TlgWriteEx(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        ULONG64 filter,
        ULONG flags,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v9; // ecx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v11.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)hProvider->ProviderMetadataPtr;
  v9 = *hProvider->ProviderMetadataPtr;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v9;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteEx(hProvider->RegHandle, &v11, 0LL, 1u, 0LL, 0LL, cData, pData);
}
