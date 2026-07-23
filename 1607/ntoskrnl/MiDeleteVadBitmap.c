/*
 * XREFs of MiDeleteVadBitmap @ 0x140075150
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiDeleteVadBitmap(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  int *v8; // rax
  __int64 v9; // r8
  unsigned int *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx

  v1 = *(_QWORD *)(BugCheckParameter2 + 912);
  v2 = 0LL;
  if ( v1 )
    KeBugCheckEx(0x1Au, 0x3455uLL, BugCheckParameter2, v1, 0LL);
  v4 = qword_140327FD0;
  v5 = *(unsigned int *)(qword_140327FD0 + 276840448);
  MiReturnFullProcessCharges(BugCheckParameter2, v5);
  v6 = *(unsigned int *)(v4 + 276840544);
  v7 = v6 + v5;
  _InterlockedExchangeAdd64(&qword_140327948, -v6);
  MiDeletePagablePteRange(BugCheckParameter2, qword_140327FD0, v4 + 276840447);
  v8 = MiPartitionIdToPointer(*(_WORD *)(BugCheckParameter2 + 1444));
  v10 = (unsigned int *)(v4 + 276840796);
  v11 = 2LL;
  do
  {
    v12 = *v10++;
    v2 += v12;
    --v11;
  }
  while ( v11 );
  _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 923, -v2);
  return MiReturnCommit((__int64)v8, v7 + v2 - v9);
}
