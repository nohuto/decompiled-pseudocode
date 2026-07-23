/*
 * XREFs of MiLockPagedAddress @ 0x14010973C
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x1401F9C70 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x140109FC8 (MiMakeSystemAddressValidSystemWs.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockPagedAddress(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  char *AnyMultiplexedVm; // r15
  LONG *SharedVm; // rdi
  KIRQL v6; // al
  char i; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // ebp
  struct _KEVENT *v13; // rax
  char v14; // al
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( i = v6; ; MiCopyOnWriteEx(v3 << 25 >> 16, v3, -1LL, i, 0) )
  {
    while ( 1 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(v3);
      v16 = v8;
      if ( (v8 & 1) != 0 )
        break;
      LOBYTE(v9) = i;
      MiMakeSystemAddressValidSystemWs(AnyMultiplexedVm, a1, v9);
    }
    if ( (v8 & 0x200) == 0 )
      break;
  }
  v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v16) - 0x58000000000LL;
  MiLockPageAtDpcInline(v10);
  if ( (unsigned int)MiAddLockedPageCharge(v10, 0) )
  {
    v12 = 1;
    v2 = MiCaptureDirtyBitToPfn(v10);
  }
  else
  {
    v12 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 )
  {
    if ( v2 )
    {
      v13 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF);
      MiReleasePageFileInfo(v13, v2, 1);
    }
    v14 = MI_READ_PTE_LOCK_FREE(v3);
    if ( (v14 & 0x20) == 0 || (v14 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v3, 3LL);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(a1, 0, 1u);
  }
  LOBYTE(v11) = i;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v11);
  return v12;
}
