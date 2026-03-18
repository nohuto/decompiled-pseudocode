/*
 * XREFs of _TlgWriteEx @ 0x1401E12FC
 * Callers:
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiLogTrimWs @ 0x140088154 (MiLogTrimWs.c)
 *     MiLogProcessWorkingSetsStop @ 0x140088D38 (MiLogProcessWorkingSetsStop.c)
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400CEDA4 (MmNotifyProcessInSwapTrigger.c)
 *     MiStoreLogNotCandidate @ 0x140115C24 (MiStoreLogNotCandidate.c)
 *     MiLogWsEmptyControl @ 0x14013402C (MiLogWsEmptyControl.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401DFA8C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401DFC00 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1401DFCF4 (MiLogResetPagesCommitRelease.c)
 *     MiLogCommitRequestFailed @ 0x1401ECE34 (MiLogCommitRequestFailed.c)
 *     MiStoreLogFullPagefile @ 0x1401F49E4 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1401F4A58 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1401F4B00 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1401F4BA4 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1401F4D14 (MiStoreLogWriteIssueRetry.c)
 *     MiLogReserveVaFailed @ 0x140658BFC (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140659144 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406595C0 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140013360 (EtwWriteEx.c)
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
