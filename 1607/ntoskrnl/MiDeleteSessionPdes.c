/*
 * XREFs of MiDeleteSessionPdes @ 0x140126258
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiFreeUnmappedPageTables @ 0x1400E1870 (MiFreeUnmappedPageTables.c)
 *     MiDeleteValidSystemPte @ 0x1400FE970 (MiDeleteValidSystemPte.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiDeleteSessionPdes(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // r14
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  _KPROCESS *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  KIRQL v11; // r12
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v15[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-B0h]
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v18; // [rsp+64h] [rbp-9Ch]
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]

  v2 = 0LL;
  v16 = 0LL;
  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  v19 = 20LL;
  v17 = 2;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  SharedVm = MiGetSharedVm(v5);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v7;
  if ( BugCheckParameter2 <= a2 )
  {
    do
    {
      MiDeleteValidSystemPte(
        (_QWORD *)BugCheckParameter2,
        (__int64)(BugCheckParameter2 << 25) >> 16,
        v5,
        (__int64)&v17,
        (__m128i **)&v14);
      BugCheckParameter2 += 8LL;
    }
    while ( BugCheckParameter2 <= a2 );
    v2 = v14;
  }
  MiFlushTbList((__int64)&v17, v8, v9, v10);
  LOBYTE(v12) = v11;
  MiUnlockWorkingSetExclusive(v5, v12);
  MiFreeUnmappedPageTables(v2, v15);
  MiReturnResidentAvailable(v15[0]);
  return MiReturnCommit((__int64)MiSystemPartition, v16);
}
