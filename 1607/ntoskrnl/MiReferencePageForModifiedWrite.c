/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1400FFD38
 * Callers:
 *     MiBuildMappedCluster @ 0x14001F140 (MiBuildMappedCluster.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x140116364 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140116BC4 (MiGetPageForWriteCluster.c)
 *     MmStoreProbeAndLockPages @ 0x1401228E0 (MmStoreProbeAndLockPages.c)
 *     MiFillNoReservationCluster @ 0x140123C70 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiChargeForWriteInProgressPage @ 0x140100B1C (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  int *v4; // rax
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // rdx

  v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    ++*(_WORD *)(BugCheckParameter2 + 32);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 8u;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
      MiClearPfnImageVerified(BugCheckParameter2, 0x1Cu);
    }
    return v5;
  }
  v7 = (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0;
  if ( (a2 & 2) != 0 )
    v7 = (unsigned int)v7 | 2;
  result = MiChargeForWriteInProgressPage(v4, v7);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
