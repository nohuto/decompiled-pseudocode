/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140430960
 * Callers:
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2F58 (MiSplitReducedCommitClonePage.c)
 *     MiCommitPageTablesForVad @ 0x140430A30 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x1406624FC (MiCreateLargePageVad.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14002BB20 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x14002BB90 (PspChargeQuota.c)
 *     MiReturnProcessCommitment @ 0x1400A3E4C (MiReturnProcessCommitment.c)
 *     MiCommitRequestFailed @ 0x1401ECDEC (MiCommitRequestFailed.c)
 *     PsReturnProcessPageFileQuota @ 0x14042E3CC (PsReturnProcessPageFileQuota.c)
 *     PsChangeJobMemoryUsageByProcess @ 0x14068008C (PsChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  unsigned int v5; // ebp
  __int64 v6; // rdx
  int *ProcessPartition; // rax
  unsigned int v9; // r14d

  v2 = 0;
  v5 = 2;
  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1040), a1, 2, a2) >= 0 )
  {
    v2 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v2 = 3;
      if ( (*(_DWORD *)(a1 + 768) & 0x10) == 0 )
      {
LABEL_5:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit((__int64)ProcessPartition, a2, 0) )
          return 0LL;
        v5 = 4;
        goto LABEL_12;
      }
      if ( (unsigned __int8)PsChangeJobMemoryUsageByProcess(16LL, a2, a1) )
      {
        v2 = 7;
        goto LABEL_5;
      }
      v5 = 3;
    }
LABEL_12:
    v9 = -1073741523;
    goto LABEL_13;
  }
  v5 = 1;
  v9 = -1073741524;
LABEL_13:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (v2 & 4) != 0 )
    PsChangeJobMemoryUsageByProcess(16LL, -(__int64)a2, a1);
  MiCommitRequestFailed(a1, v6, a2, v5);
  return v9;
}
