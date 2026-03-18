/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1405053D4
 * Callers:
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiContractPagingFiles @ 0x1400EE56C (MiContractPagingFiles.c)
 *     PsReturnProcessQuota @ 0x1400EE610 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x140195D78 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14050550C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeletePhysicalProcessPages @ 0x1406A60B8 (MiDeletePhysicalProcessPages.c)
 */

void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR *BugCheckParameter1)
{
  ULONG_PTR v1; // r9
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int16 *ProcessPartition; // rax
  __int16 *v7; // rdi
  _QWORD *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rax
  ULONG_PTR v11; // rdx
  _QWORD *v12; // rax
  void *v13; // rcx

  v1 = BugCheckParameter1[116];
  v3 = (_QWORD *)BugCheckParameter1[149];
  if ( v1 )
  {
    if ( v3 && v3[1] && *((_DWORD *)v3 + 6) == 1 )
    {
      v10 = (_QWORD *)*v3;
      v11 = 0LL;
      while ( v10 )
      {
        v11 = (ULONG_PTR)v10;
        v10 = (_QWORD *)*v10;
      }
      KeBugCheckEx(0xCBu, v11, 0LL, *(_QWORD *)(v11 + 24), BugCheckParameter1[116]);
    }
    KeBugCheckEx(0x76u, 0LL, (ULONG_PTR)BugCheckParameter1, v1, BugCheckParameter1[149]);
  }
  if ( v3 )
  {
    while ( 1 )
    {
      v12 = (_QWORD *)*v3;
      if ( !*v3 )
        break;
      do
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      if ( !v13 )
        break;
      ExFreePoolWithTag(v13, 0);
    }
    ExFreePoolWithTag(v3, 0);
  }
  v4 = MiDeleteFinalPageTables((ULONG_PTR)BugCheckParameter1);
  PsReturnProcessQuota((ULONG_PTR)BugCheckParameter1, v5, 8uLL);
  ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter1);
  v7 = ProcessPartition;
  if ( ProcessPartition == MiSystemPartition )
  {
    MiReturnResidentAvailable(8uLL);
    _InterlockedExchangeAdd64(&qword_14034F7F8, 8uLL);
  }
  else
  {
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 8uLL);
  }
  if ( BugCheckParameter1[129] )
    MiDeletePhysicalProcessPages(BugCheckParameter1);
  v8 = (_QWORD *)BugCheckParameter1[161];
  if ( v8 )
  {
    MiEmptyPageAccessLog(v8);
    BugCheckParameter1[161] = 0LL;
  }
  v9 = (void *)BugCheckParameter1[189];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    BugCheckParameter1[189] = 0LL;
  }
  MiReturnCommit((__int64)v7, 5 - v4);
  _InterlockedExchangeAdd64(&qword_14034FD08, 0xFFFFFFFFFFFFFFFBuLL);
  if ( BugCheckParameter1[128] )
    MiReleaseProcessReferenceToSessionDataPage();
  MiContractPagingFiles((__int64)v7);
  if ( v7 != MiSystemPartition )
    MiDereferencePartition(v7);
}
