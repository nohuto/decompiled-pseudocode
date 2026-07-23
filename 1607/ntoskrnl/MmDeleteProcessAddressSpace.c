/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x14045F548
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     PsReturnProcessQuota @ 0x140075124 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiContractPagingFiles @ 0x140075FBC (MiContractPagingFiles.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x140171DE4 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404C4CA4 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeletePhysicalProcessPages @ 0x14065C570 (MiDeletePhysicalProcessPages.c)
 */

void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR *BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  ULONG_PTR v5; // rdx
  _QWORD *v6; // rax
  void *v7; // rcx
  LONG *SharedVm; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  int *ProcessPartition; // rax
  int *v12; // rbx
  _SLIST_ENTRY *v13; // rcx
  void *v14; // rcx

  v1 = BugCheckParameter2[116];
  v3 = (_QWORD *)BugCheckParameter2[150];
  if ( v1 )
  {
    if ( v3 && v3[1] && *((_DWORD *)v3 + 6) == 1 )
    {
      v4 = (_QWORD *)*v3;
      v5 = 0LL;
      while ( v4 )
      {
        v5 = (ULONG_PTR)v4;
        v4 = (_QWORD *)*v4;
      }
      KeBugCheckEx(0xCBu, v5, 0LL, *(_QWORD *)(v5 + 24), BugCheckParameter2[116]);
    }
    KeBugCheckEx(0x76u, 0LL, (ULONG_PTR)BugCheckParameter2, v1, BugCheckParameter2[150]);
  }
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)*v3;
      if ( !*v3 )
        break;
      do
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      if ( !v7 )
        break;
      ExFreePoolWithTag(v7, 0);
    }
    ExFreePoolWithTag(v3, 0);
  }
  SharedVm = MiGetSharedVm((__int64)(BugCheckParameter2 + 160));
  v9 = MiDeleteFinalPageTables((ULONG_PTR)BugCheckParameter2);
  PsReturnProcessQuota((ULONG_PTR)BugCheckParameter2, v10, 8uLL);
  ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
  v12 = ProcessPartition;
  if ( ProcessPartition == MiSystemPartition )
    MiReturnResidentAvailable(8uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 8uLL);
  if ( BugCheckParameter2[129] )
    MiDeletePhysicalProcessPages(BugCheckParameter2);
  v13 = (_SLIST_ENTRY *)*((_QWORD *)SharedVm + 5);
  if ( v13 )
  {
    MiEmptyPageAccessLog(v13);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v14 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  MiReturnCommit((__int64)v12, 5 - v9);
  _InterlockedExchangeAdd64(&qword_140327950, 0xFFFFFFFFFFFFFFFBuLL);
  if ( BugCheckParameter2[128] )
    MiReleaseProcessReferenceToSessionDataPage();
  MiContractPagingFiles((__int64)v12);
  if ( v12 != MiSystemPartition )
    MiDereferencePartition(v12);
}
