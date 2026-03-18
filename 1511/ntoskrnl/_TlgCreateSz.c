/*
 * XREFs of _TlgCreateSz @ 0x1401BF978
 * Callers:
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400C7CC0 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x1400F15D4 (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x14012D9C4 (MiLogWsEmptyControl.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401CF924 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401CFA94 (MiLogOutswappedProcessCommitRelease.c)
 *     PnpCompareInterruptInformation @ 0x14050B294 (PnpCompareInterruptInformation.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406218DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCreateImageFileMapFailure @ 0x140623B00 (MiLogCreateImageFileMapFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14074CCA4 (MiFlushStrongCodeDriverLoadFailures.c)
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
