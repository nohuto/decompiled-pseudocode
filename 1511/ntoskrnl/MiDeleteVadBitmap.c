/*
 * XREFs of MiDeleteVadBitmap @ 0x14001C358
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteVadBitmap(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v1 = *(_QWORD *)(BugCheckParameter2 + 912);
  v2 = 0LL;
  if ( v1 )
    KeBugCheckEx(0x1Au, 0x3455uLL, BugCheckParameter2, v1, 0LL);
  v4 = MEMORY[0xFFFFF580108041F8];
  MiReturnFullProcessCharges(BugCheckParameter2, MEMORY[0xFFFFF580108041F8]);
  v5 = MEMORY[0xFFFFF58010804258] + v4;
  _InterlockedExchangeAdd64(&qword_1402FF840, -(__int64)MEMORY[0xFFFFF58010804258]);
  MiDeletePagablePteRange(BugCheckParameter2);
  v6 = MiPartitionIdToPointer(*(unsigned __int16 *)(BugCheckParameter2 + 1460));
  v8 = (unsigned int *)0xFFFFF58010804344LL;
  v9 = 2LL;
  do
  {
    v10 = *v8++;
    v2 += v10;
    --v9;
  }
  while ( v9 );
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 6168), -v2);
  return MiReturnCommit(v6, v5 + v2 - v7);
}
