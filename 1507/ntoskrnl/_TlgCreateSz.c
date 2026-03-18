/*
 * XREFs of _TlgCreateSz @ 0x1401FB4C0
 * Callers:
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010C878 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14012F884 (MiLogTrimWs.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020F294 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020F404 (MiLogOutswappedProcessCommitRelease.c)
 *     PnpCompareInterruptInformation @ 0x140582570 (PnpCompareInterruptInformation.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406A0F7C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518 (MiFlushStrongCodeDriverLoadFailures.c)
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
