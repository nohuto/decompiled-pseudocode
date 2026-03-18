/*
 * XREFs of MiDeleteSessionPdes @ 0x140116E90
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     MiFreeUnmappedPageTables @ 0x1400A1CD0 (MiFreeUnmappedPageTables.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiDeleteSessionPdes(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int64 v2; // rbx
  volatile LONG *v5; // rsi
  _KPROCESS *v6; // rdx
  KIRQL v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v13[3]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-B0h]
  int v15; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v16; // [rsp+6Ch] [rbp-9Ch]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]

  v2 = 0LL;
  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  v12 = 0LL;
  v5 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
  v17 = 20LL;
  v15 = 2;
  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v7 = ExAcquireSpinLockExclusive(v5);
  if ( BugCheckParameter2 <= a2 )
  {
    do
    {
      MiDeleteValidSystemPte(
        (_QWORD *)BugCheckParameter2,
        (__int64)(BugCheckParameter2 << 25) >> 16,
        (__int64)v5,
        (__int64)&v15,
        &v12);
      BugCheckParameter2 += 8LL;
    }
    while ( BugCheckParameter2 <= a2 );
    v2 = v12;
  }
  MiFlushTbList((__int64)&v15, v6);
  LOBYTE(v8) = v7;
  MiUnlockWorkingSetExclusive((__int64)v5, v8, v9);
  MiFreeUnmappedPageTables(v2, v13);
  MiReturnResidentAvailable(v13[0]);
  _InterlockedExchangeAdd64(&qword_1402FF3C8, v10);
  return MiReturnCommit((__int64)MiSystemPartition, v14);
}
