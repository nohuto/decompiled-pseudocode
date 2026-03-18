/*
 * XREFs of _TlgCreateSz @ 0x1401CDF00
 * Callers:
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiLogTrimWs @ 0x140088154 (MiLogTrimWs.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400CEDA4 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x14013402C (MiLogWsEmptyControl.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401DFA8C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401DFC00 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1401DFCF4 (MiLogResetPagesCommitRelease.c)
 *     PnpCompareInterruptInformation @ 0x1405462D0 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x140659144 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406595C0 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = &File;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
