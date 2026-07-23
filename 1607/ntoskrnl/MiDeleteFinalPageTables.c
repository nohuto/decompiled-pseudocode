/*
 * XREFs of MiDeleteFinalPageTables @ 0x140075B18
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiClearContainingMapping @ 0x140075DB4 (MiClearContainingMapping.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x140075EFC (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x140075F18 (MiUnlinkProcessFromSession.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiDeleteAllHashMappings @ 0x1400FF190 (MiDeleteAllHashMappings.c)
 *     MiGetTopPteAddress @ 0x14012A960 (MiGetTopPteAddress.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 TopPteAddress; // rax
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // r15
  int v10; // ebx
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v17; // rsi
  __int64 i; // rbx
  __int64 v19; // rbp
  unsigned __int8 v20; // r14
  unsigned __int8 v21; // si
  _QWORD v23[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v24[48]; // [rsp+50h] [rbp-68h] BYREF

  v1 = 0LL;
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  v4 = BugCheckParameter2 + 1280;
  v5 = 48LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 12) - 0x58000000000LL;
  KiStackAttachProcess(BugCheckParameter2);
  TopPteAddress = MiGetTopPteAddress(2147352576LL);
  if ( MI_READ_PTE_LOCK_FREE(TopPteAddress) )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    SharedVm = MiGetSharedVm(v4);
    v8 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v9 = v8;
    v10 = 0;
    while ( v10 )
    {
      v11 = qword_1403269D8;
      if ( qword_1403269D8 )
        goto LABEL_6;
LABEL_8:
      if ( ++v10 >= 2 )
      {
        MiDeleteAllHashMappings(v4);
        LOBYTE(v15) = v9;
        MiUnlockWorkingSetExclusive(v4, v15);
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
        goto LABEL_10;
      }
    }
    v11 = 2147352576LL;
LABEL_6:
    v12 = MiGetTopPteAddress(v11);
    if ( MI_READ_PTE_LOCK_FREE(v12) )
    {
      LOBYTE(v13) = v9;
      MiDeleteVirtualAddresses(v14, v14, 0, v13, (__int64)v23);
    }
    goto LABEL_8;
  }
LABEL_10:
  BugCheckParameter4 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 3 )
    KeBugCheckEx(0x1Au, 0x3453uLL, BugCheckParameter2, (v5 + 0x58000000000LL) / 48, BugCheckParameter4);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(v24, 0LL);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v17 = *(_QWORD *)(BugCheckParameter2 + 864);
  for ( i = 48 * v17 - 0x58000000000LL; ; MiLockAndDecrementShareCount(i, 0LL) )
  {
    v19 = v17;
    v17 = *(_QWORD *)(i + 40) & 0xFFFFFFFFFLL;
    v20 = MiLockPageInline(i);
    MiClearContainingMapping(i);
    *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
    if ( (unsigned int)MiDecrementShareCount(i) == 3 )
      ++v1;
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v20);
    if ( v19 == v17 )
      break;
    i = 48 * v17 - 0x58000000000LL;
  }
  v21 = MiLockPageInline(i);
  if ( (unsigned int)MiDecrementShareCount(i) == 3 )
    ++v1;
  _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v21);
  return v1;
}
