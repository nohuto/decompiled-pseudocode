/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14011066C
 * Callers:
 *     SmKmStoreHelperWorker @ 0x1400F71C0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140208890 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x1400F7AD8 (SmSetThreadPagePriority.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     SmKmUnlockMdl @ 0x1401109B8 (SmKmUnlockMdl.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140110F80 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140208F68 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402090B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1404F3F5C (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  void *v7; // r12
  unsigned __int64 v8; // r13
  struct _MDL *v9; // r14
  int v10; // ebp
  int v11; // ebx
  __int64 VirtualMemory; // rbp
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // rcx
  struct _MDL *v15; // r15
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+18h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    VirtualMemory = MmStoreAllocateVirtualMemory(*(_QWORD *)(a3 + 8));
    if ( VirtualMemory )
    {
      v13 = *(_QWORD *)(a1 + 104);
      if ( v13 )
      {
        v11 = SmKmVirtualLockCtxLockMemory(v13);
        if ( v11 < 0 )
        {
          MmStoreFreeVirtualMemory(VirtualMemory);
          goto LABEL_12;
        }
      }
      *(_QWORD *)(a3 + 24) = VirtualMemory;
      goto LABEL_11;
    }
LABEL_18:
    v11 = -1073741670;
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v11 = -1073741811;
      goto LABEL_12;
    }
    v7 = *(void **)a3;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( v9 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = SmSetThreadPagePriority(&CurrentThread);
      v11 = SmKmProbeAndLockAddress(v7, v8, v9, 0);
      if ( v11 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v15 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 4, a1, 0LL, 1);
        v11 = SmKmProbeAndLockAddress(v7, v8, v9, 1u);
        if ( v11 >= 0 )
          v9->Next = v15;
        else
          SmFpFree(*(_QWORD *)(a1 + 112), 4, a1, v15);
      }
      if ( v10 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(&CurrentThread);
      if ( v11 >= 0 )
      {
        if ( SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 5, a1, (__int64)v9, *(_DWORD *)(a3 + 20) & 1) )
        {
          *(_QWORD *)(a3 + 24) = v9;
LABEL_11:
          v11 = 0;
          goto LABEL_12;
        }
        v11 = -1073741670;
        SmKmUnlockMdl(v9);
      }
      SmFpFree(*(_QWORD *)(a1 + 112), 2, a1, v9);
      goto LABEL_12;
    }
    goto LABEL_18;
  }
  MmStoreFreeVirtualMemory(*(_QWORD *)a3);
  v14 = *(_QWORD *)(a1 + 104);
  v11 = 0;
  if ( v14 )
    SmKmVirtualLockCtxMemoryUnlocked(v14);
LABEL_12:
  *(_DWORD *)(a3 + 32) = v11;
}
