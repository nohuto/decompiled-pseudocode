/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1404BBC10
 * Callers:
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x14008D1B8 (MiReturnProcessCommitment.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14008F8D0 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x14008F940 (PspChargeQuota.c)
 *     MiCommitRequestFailed @ 0x140220B88 (MiCommitRequestFailed.c)
 *     PsReturnProcessPageFileQuota @ 0x14041AE70 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14041AEA0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  __int16 *ProcessPartition; // rax
  unsigned int v7; // ebp

  v2 = 0;
  if ( (PEPROCESS)a1 != PsInitialSystemProcess && (int)PspChargeQuota(*(_QWORD *)(a1 + 1040), a1, 2, a2) < 0 )
  {
    v7 = -1073741524;
    goto LABEL_11;
  }
  v2 = 1;
  if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
  {
    v2 = 3;
    if ( (*(_DWORD *)(a1 + 768) & 0x10) == 0 )
      goto LABEL_5;
    if ( PspChangeJobMemoryUsageByProcess(16, a2, a1, 0LL) )
    {
      v2 = 7;
LABEL_5:
      ProcessPartition = MiGetProcessPartition(a1);
      if ( (unsigned int)MiChargeCommit((__int64)ProcessPartition, a2, 0) )
        return 0LL;
    }
  }
  v7 = -1073741523;
LABEL_11:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (v2 & 4) != 0 )
    PspChangeJobMemoryUsageByProcess(16, -(__int64)a2, a1, 0LL);
  MiCommitRequestFailed(a1);
  return v7;
}
