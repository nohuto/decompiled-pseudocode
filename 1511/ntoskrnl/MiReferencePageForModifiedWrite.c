/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14002FDF8
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x14002F79C (MiBuildMappedCluster.c)
 *     MiFillNoReservationCluster @ 0x140108078 (MiFillNoReservationCluster.c)
 *     MiAddToReservationCluster @ 0x1401091BC (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140109954 (MiGetPageForWriteCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140113844 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x1400E56EC (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rax
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
      MiUnlinkPageFromList(BugCheckParameter2);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    *(_BYTE *)(BugCheckParameter2 + 34) |= 8u;
    ++*(_WORD *)(BugCheckParameter2 + 32);
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1LL, 0LL) & 0x10) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
      MiClearPfnImageVerified(BugCheckParameter2, 28LL);
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
