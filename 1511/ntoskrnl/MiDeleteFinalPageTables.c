/*
 * XREFs of MiDeleteFinalPageTables @ 0x1400055B8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiUnlinkProcessFromSession @ 0x140005204 (MiUnlinkProcessFromSession.c)
 *     MiClearContainingMapping @ 0x140005854 (MiClearContainingMapping.c)
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x140005994 (KeFlushProcessTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDeleteAllHashMappings @ 0x14001C23C (MiDeleteAllHashMappings.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // r15
  KIRQL v12; // bl
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 i; // rbx
  __int64 v17; // rbp
  unsigned __int8 v18; // r14
  unsigned __int8 v19; // di
  _BYTE v21[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v22[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v23[48]; // [rsp+58h] [rbp-60h] BYREF

  v1 = 0LL;
  v3 = *(_QWORD *)(BugCheckParameter2 + 40) >> 12;
  v4 = 0xFFFFF680003FFF00uLL;
  v5 = 3LL;
  memset(v22, 0, sizeof(v22));
  v6 = 48 * v3 - 0x58000000000LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v5;
  }
  while ( v5 );
  v7 = MiMapPageInHyperSpaceWorker(v3, v21, 0x80000000LL);
  v8 = MI_READ_PTE_LOCK_FREE(v7 + 8LL * (((unsigned int)v4 >> 3) & 0x1FF));
  LOBYTE(v9) = v21[0];
  v10 = v8;
  MiUnmapPageInHyperSpaceWorker(v7, v9, 0x80000000LL);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  if ( v10 )
  {
    LOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter2 + 1280));
    LOBYTE(v13) = v12;
    MiDeleteVirtualAddresses(2147352576, 2147352576, 0, v13, (__int64)v22);
    MiDeleteAllHashMappings(BugCheckParameter2 + 1280);
    LOBYTE(v14) = v12;
    MiUnlockWorkingSetExclusive(BugCheckParameter2 + 1280, v14);
    UNLOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
  }
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 3 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      BugCheckParameter2,
      (v6 + 0x58000000000LL) / 48,
      *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(v23, 0LL);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v15 = *(_QWORD *)(BugCheckParameter2 + 864);
  for ( i = 48 * v15 - 0x58000000000LL; ; MiLockAndDecrementShareCount(i, 0LL) )
  {
    v17 = v15;
    v15 = *(_QWORD *)(i + 40) & 0xFFFFFFFFFLL;
    v18 = MiLockPageInline(i);
    MiClearContainingMapping(i);
    *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
    if ( (unsigned int)MiDecrementShareCount(i) == 3 )
      ++v1;
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v18);
    if ( v17 == v15 )
      break;
    i = 48 * v15 - 0x58000000000LL;
  }
  v19 = MiLockPageInline(i);
  if ( (unsigned int)MiDecrementShareCount(i) == 3 )
    ++v1;
  _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v19);
  return v1;
}
