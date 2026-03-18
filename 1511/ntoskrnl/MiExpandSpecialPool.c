/*
 * XREFs of MiExpandSpecialPool @ 0x1401DA974
 * Callers:
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400B2424 (InsertTailListPte.c)
 *     MiObtainSessionVa @ 0x1400EDA74 (MiObtainSessionVa.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaRegionSessionSpecialPool @ 0x1401DBCE8 (MiVaRegionSessionSpecialPool.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiExpandSpecialPool(char a1)
{
  int v1; // edi
  int v2; // r15d
  unsigned int v3; // ebx
  KSPIN_LOCK *v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  __int64 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  v3 = v2 != 0 ? 7 : 13;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = (KSPIN_LOCK *)qword_1402FFCA8;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7816) >= (unsigned int)dword_1402FE264 )
      return 0LL;
    v5 = MiObtainSessionVa(1u);
  }
  else
  {
    v4 = &qword_1402FF700;
    v5 = MiObtainSystemVa(1u, v3);
  }
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v8, v8 + 4088, 0, v3) )
  {
    if ( v4 == &qword_1402FF700 )
      v1 = v2 != 0 ? 7 : 13;
    MiReturnSystemVa(v7, v7 + 4096, v1, 0LL);
    return 0LL;
  }
  if ( v4 == &qword_1402FF700 )
    _InterlockedAdd(&dword_1402FE260, 1u);
  v15 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v15) - 0x58000000000LL;
  v10 = *(unsigned int *)(v9 + 16) | 0x100000000LL;
  *(_QWORD *)(v9 + 16) = v10;
  if ( (unsigned int)MiPteInShadowRange(v9 + 16) )
    MiWritePteShadow(v9 + 16, v10);
  v11 = (__int64 *)(v4 + 4);
  if ( v2 )
    v11 = (__int64 *)(v4 + 1);
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  v12 = 255LL;
  do
  {
    InsertTailListPte(v11, (__int64 *)v8);
    v8 += 16LL;
    --v12;
  }
  while ( v12 );
  if ( v4 != &qword_1402FF700 )
    MiVaRegionSessionSpecialPool(v13, 1LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
