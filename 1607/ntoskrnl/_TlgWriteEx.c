/*
 * XREFs of _TlgWriteEx @ 0x1401E1128
 * Callers:
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400CCC44 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14010C344 (MiLogTrimWs.c)
 *     MiLogProcessWorkingSetsStop @ 0x14010CF28 (MiLogProcessWorkingSetsStop.c)
 *     MiStoreLogNotCandidate @ 0x140116194 (MiStoreLogNotCandidate.c)
 *     MiLogWsEmptyControl @ 0x14013459C (MiLogWsEmptyControl.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401DF8B8 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401DFA2C (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1401DFB20 (MiLogResetPagesCommitRelease.c)
 *     MiLogCommitRequestFailed @ 0x1401ECC60 (MiLogCommitRequestFailed.c)
 *     MiStoreLogFullPagefile @ 0x1401F4810 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1401F4884 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1401F492C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1401F49D0 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1401F4B40 (MiStoreLogWriteIssueRetry.c)
 *     MiLogReserveVaFailed @ 0x140658CE0 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140659228 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406596A4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
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
