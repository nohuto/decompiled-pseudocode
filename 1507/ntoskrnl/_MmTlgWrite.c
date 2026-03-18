/*
 * XREFs of _MmTlgWrite @ 0x14020EAE0
 * Callers:
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010C878 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14012F884 (MiLogTrimWs.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020F294 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020F404 (MiLogOutswappedProcessCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402315CC (MiStoreLogFullPagefile.c)
 *     MiStoreLogNotCandidate @ 0x140231634 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402316E8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140231778 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140231800 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14023193C (MiStoreLogWriteIssueRetry.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406A0F7C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140014D70 (EtwWriteEx.c)
 */

NTSTATUS __fastcall MmTlgWrite(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a6)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR v9; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = ((_DWORD)a2 - (unsigned int)&TraceLoggingMetadata) | (*a2 << 24);
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v9.Keyword = *(_QWORD *)(a2 + 3);
  a6->Ptr = *(_QWORD *)(a1 + 8);
  v7 = **(unsigned __int16 **)(a1 + 8);
  a6[1].Ptr = (ULONGLONG)(a2 + 11);
  a6->Size = v7;
  a6->Reserved = 2;
  a6[1].Size = *(unsigned __int16 *)(a2 + 11);
  a6[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v9, 0LL, 1u, 0LL, 0LL, UserDataCount, a6);
}
