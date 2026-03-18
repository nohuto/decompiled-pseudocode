/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1403E6E18
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 * Callees:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiContractPagingFiles @ 0x14001BDC8 (MiContractPagingFiles.c)
 *     PsReturnProcessQuota @ 0x14001C2A4 (PsReturnProcessQuota.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x140166F8C (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1403E3390 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeletePhysicalProcessPages @ 0x140626D3C (MiDeletePhysicalProcessPages.c)
 */

void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  int *ProcessPartition; // rax
  int *v7; // rdi
  _QWORD *v8; // rcx
  void *v9; // rcx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rdx
  _QWORD *v13; // rax
  void *v14; // rcx

  v1 = *(_QWORD *)(BugCheckParameter2 + 928);
  v3 = *(_QWORD **)(BugCheckParameter2 + 1200);
  if ( v1 )
  {
    if ( v3 && v3[1] && *((_DWORD *)v3 + 6) == 1 )
    {
      v11 = (_QWORD *)*v3;
      v12 = 0LL;
      while ( v11 )
      {
        v12 = (ULONG_PTR)v11;
        v11 = (_QWORD *)*v11;
      }
      KeBugCheckEx(0xCBu, v12, 0LL, *(_QWORD *)(v12 + 24), *(_QWORD *)(BugCheckParameter2 + 928));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v1, *(_QWORD *)(BugCheckParameter2 + 1200));
  }
  if ( v3 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)*v3;
      if ( !*v3 )
        break;
      do
      {
        v14 = v13;
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
      if ( !v14 )
        break;
      ExFreePoolWithTag(v14, 0);
    }
    ExFreePoolWithTag(v3, 0);
  }
  v4 = MiDeleteFinalPageTables(BugCheckParameter2);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v5, 8LL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  v7 = ProcessPartition;
  if ( ProcessPartition == MiSystemPartition )
  {
    MiReturnResidentAvailable(8uLL);
    _InterlockedExchangeAdd64(&qword_1402FF378, 8uLL);
  }
  else
  {
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 8uLL);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1032) )
    MiDeletePhysicalProcessPages(BugCheckParameter2);
  v8 = *(_QWORD **)(BugCheckParameter2 + 1296);
  if ( v8 )
  {
    MiEmptyPageAccessLog(v8);
    *(_QWORD *)(BugCheckParameter2 + 1296) = 0LL;
  }
  v9 = *(void **)(BugCheckParameter2 + 1520);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(BugCheckParameter2 + 1520) = 0LL;
  }
  MiReturnCommit((__int64)v7, 5 - v4);
  _InterlockedExchangeAdd64(&qword_1402FF848, 0xFFFFFFFFFFFFFFFBuLL);
  v10 = *(_QWORD *)(BugCheckParameter2 + 1024);
  if ( v10 )
    MiReleaseProcessReferenceToSessionDataPage(v10);
  MiContractPagingFiles((__int64)v7);
  if ( v7 != MiSystemPartition )
    MiDereferencePartition(v7);
}
