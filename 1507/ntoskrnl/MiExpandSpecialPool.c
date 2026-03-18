/*
 * XREFs of MiExpandSpecialPool @ 0x14021F2B8
 * Callers:
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiObtainSessionVa @ 0x140129230 (MiObtainSessionVa.c)
 *     MiVaRegionSessionSpecialPool @ 0x1402209BC (MiVaRegionSessionSpecialPool.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiExpandSpecialPool(char a1)
{
  int v1; // ebx
  int v2; // r15d
  int v3; // ebp
  KSPIN_LOCK *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  unsigned __int64 *v11; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 updated; // rax
  __int64 *v14; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  __int64 *v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  v3 = v2 != 0 ? 7 : 13;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = (KSPIN_LOCK *)qword_140350170;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7816) >= (unsigned int)dword_14034E71C )
      return 0LL;
    v5 = MiObtainSessionVa(1u);
  }
  else
  {
    v4 = &qword_14034FBC0;
    v5 = MiObtainSystemVa(1u, v3);
  }
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v8, v8 + 4088, 0, v3) )
  {
    if ( v4 == &qword_14034FBC0 )
      v1 = v2 != 0 ? 7 : 13;
    MiReturnSystemVa(v7, v7 + 4096, v1, 0LL);
    return 0LL;
  }
  if ( v4 == &qword_14034FBC0 )
    _InterlockedAdd(&dword_14034E718, 1u);
  v9 = 0x90482413000LL;
  v10 = 2040LL;
  v11 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v11;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v11, *v11);
  v21 = PteShadow;
  if ( (unsigned __int64)&v21 + v9 <= v10 )
    PteShadow = MiReadPteShadow(&v21, PteShadow);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16), 1LL);
  *v14 = updated;
  if ( (unsigned __int64)v14 + v15 <= v16 )
    MiWritePteShadow(v14, updated);
  v17 = (__int64 *)(v4 + 4);
  if ( v2 )
    v17 = (__int64 *)(v4 + 1);
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  v18 = 255LL;
  do
  {
    InsertTailListPte(v17, v8);
    v8 += 16LL;
    --v18;
  }
  while ( v18 );
  if ( v4 != &qword_14034FBC0 )
    MiVaRegionSessionSpecialPool(v19, 1LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
