/*
 * XREFs of MiChargeFullProcessCommitment @ 0x14041AAC0
 * Callers:
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1400638C0 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x140063930 (PspChargeQuota.c)
 *     MiReturnProcessCommitment @ 0x14006C314 (MiReturnProcessCommitment.c)
 *     MiCommitRequestFailed @ 0x1401DBED8 (MiCommitRequestFailed.c)
 *     PsReturnProcessPageFileQuota @ 0x1403E7BCC (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  int *ProcessPartition; // rax
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
      goto LABEL_7;
    if ( PspChangeJobMemoryUsageByProcess(16, a2, a1, 0LL) )
    {
      v2 = 7;
LABEL_7:
      ProcessPartition = MiGetProcessPartition(a1);
      if ( (unsigned int)MiChargeCommit((unsigned __int64)ProcessPartition, a2, 0LL) )
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
