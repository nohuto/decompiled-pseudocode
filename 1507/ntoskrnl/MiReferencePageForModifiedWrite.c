/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1400E69AC
 * Callers:
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x1400E4A80 (MiBuildMappedCluster.c)
 *     MiFillNoReservationCluster @ 0x14013A3CC (MiFillNoReservationCluster.c)
 *     MiAddToReservationCluster @ 0x14013AA00 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14013B604 (MiGetPageForWriteCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140145CAC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x14011E720 (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int16 *v4; // rax
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
      MiUnlinkPageFromList(BugCheckParameter2, 0LL);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    *(_BYTE *)(BugCheckParameter2 + 34) |= 8u;
    ++*(_WORD *)(BugCheckParameter2 + 32);
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) )
      {
        *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
        MiClearPfnImageVerified(BugCheckParameter2, 0x1Cu);
      }
    }
    return v5;
  }
  v7 = (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400) != 0;
  if ( (a2 & 2) != 0 )
    v7 = (unsigned int)v7 | 2;
  result = MiChargeForWriteInProgressPage(v4, v7);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
