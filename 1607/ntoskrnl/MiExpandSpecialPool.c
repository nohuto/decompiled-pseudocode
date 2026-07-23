/*
 * XREFs of MiExpandSpecialPool @ 0x1401EB444
 * Callers:
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x140017A50 (InsertTailListPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiObtainSessionVa @ 0x1400A22A4 (MiObtainSessionVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiVaRegionSessionSpecialPool @ 0x1401EC7D8 (MiVaRegionSessionSpecialPool.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiExpandSpecialPool(char a1)
{
  int v1; // ebx
  int v2; // r15d
  unsigned int v3; // ebp
  KSPIN_LOCK *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 updated; // rax
  __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  v3 = v2 != 0 ? 7 : 13;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = (KSPIN_LOCK *)qword_140327EE8;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7944) >= (unsigned int)dword_140326564 )
      return 0LL;
    v5 = MiObtainSessionVa(1u);
  }
  else
  {
    v4 = &qword_140327800;
    v5 = MiObtainSystemVa(1u, v3);
  }
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v8, v8 + 4088, 0, v3) )
  {
    if ( v4 == &qword_140327800 )
      v1 = v2 != 0 ? 7 : 13;
    MiReturnSystemVa(v7, v7 + 4096, v1, 0LL);
    return 0LL;
  }
  if ( v4 == &qword_140327800 )
    _InterlockedAdd(&dword_140326560, 1u);
  v18 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_GET_PFN_FROM_PTE(&v18);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v9 + 16), 1LL);
  *v11 = updated;
  if ( (unsigned int)MiPteInShadowRange(v11, updated) )
    MiWritePteShadow(v13, v12);
  v14 = (__int64 *)(v4 + 4);
  if ( v2 )
    v14 = (__int64 *)(v4 + 1);
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  v15 = 255LL;
  do
  {
    InsertTailListPte(v14);
    v8 += 16LL;
    --v15;
  }
  while ( v15 );
  if ( v4 != &qword_140327800 )
    MiVaRegionSessionSpecialPool(v16, 1LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
