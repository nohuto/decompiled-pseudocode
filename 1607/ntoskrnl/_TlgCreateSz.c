/*
 * XREFs of _TlgCreateSz @ 0x1401CDD4C
 * Callers:
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400CCC44 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14010C344 (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x14013459C (MiLogWsEmptyControl.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401DF8B8 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401DFA2C (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1401DFB20 (MiLogResetPagesCommitRelease.c)
 *     PnpCompareInterruptInformation @ 0x140546810 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x140659228 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406596A4 (MiLogStrongCodeDriverLoadFailure.c)
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
