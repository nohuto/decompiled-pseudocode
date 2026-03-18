/*
 * XREFs of MiLockPagedAddress @ 0x14009A36C
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x14012B8A4 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  KIRQL i; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  ULONG_PTR v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // al
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = ExAcquireSpinLockExclusive(&dword_1402FF980); ; MiCopyOnWriteEx(v3 << 25 >> 16, v3, -1LL, i, 0) )
  {
    while ( 1 )
    {
      v5 = MI_READ_PTE_LOCK_FREE(v3);
      v18 = v5;
      if ( (v5 & 1) != 0 )
        break;
      while ( !MiIsAddressValid(BugCheckParameter1) )
      {
        LOBYTE(v6) = v7;
        MiUnlockWorkingSetExclusive((__int64)&dword_1402FF980, v6, v7);
        v8 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          MmFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 2uLL, v9, 0LL, BugCheckParameter1);
        }
        ExAcquireSpinLockExclusive(&dword_1402FF980);
      }
    }
    if ( (v5 & 0x200) == 0 )
      break;
  }
  v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v18) - 0x58000000000LL;
  MiLockPageAtDpcInline(v10);
  if ( (unsigned int)MiAddLockedPageCharge(v10, 0LL) )
  {
    v13 = 1;
    v2 = MiCaptureDirtyBitToPfn(v10);
  }
  else
  {
    v13 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
  {
    if ( v2 )
    {
      v14 = *(_QWORD *)(v10 + 40) >> 40;
      LOWORD(v14) = v14 & 0x3FF;
      v15 = MiPartitionIdToPointer(v14);
      MiReleasePageFileInfo(v15, v2, 1LL);
    }
    v16 = MI_READ_PTE_LOCK_FREE(v3);
    if ( (v16 & 0x20) == 0 || (v16 & 0x42) == 0 )
      MI_WRITE_VALID_PTE_VOLATILE(v3, 3LL);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  LOBYTE(v11) = i;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FF980, v11, v12);
  return v13;
}
