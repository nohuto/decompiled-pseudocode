/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14014325C
 * Callers:
 *     SmKmStoreHelperWorker @ 0x1400DACBC (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140257B24 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x1400DB534 (SmSetThreadPagePriority.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@@Z @ 0x140143658 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@@Z.c)
 *     SmKmUnlockMdl @ 0x140147C0C (SmKmUnlockMdl.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140258134 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402582E4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x140567F04 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1405686EC (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  void *v7; // rbx
  unsigned __int64 v8; // r15
  struct _MDL *VirtualMemory; // rbp
  int v10; // edx
  int v11; // r14d
  int v12; // ebx
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // rcx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+18h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    VirtualMemory = (struct _MDL *)MmStoreAllocateVirtualMemory(*(_QWORD *)(a3 + 8));
    if ( VirtualMemory )
    {
      v13 = *(_QWORD *)(a1 + 104);
      if ( v13 )
      {
        v15 = SmKmVirtualLockCtxLockMemory(v13);
        v12 = v15;
        if ( v15 < 0 )
        {
          MmStoreFreeVirtualMemory(VirtualMemory);
          goto LABEL_10;
        }
      }
      goto LABEL_9;
    }
LABEL_16:
    v12 = -1073741670;
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v12 = -1073741811;
      goto LABEL_10;
    }
    v7 = *(void **)a3;
    v8 = *(_QWORD *)(a3 + 8);
    VirtualMemory = (struct _MDL *)SmFpAllocate(*(_QWORD *)(a1 + 112), 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( VirtualMemory )
    {
      v10 = *(_DWORD *)(a3 + 16);
      CurrentThread = KeGetCurrentThread();
      v11 = SmSetThreadPagePriority(&CurrentThread, v10);
      v12 = SmKmProbeAndLockAddress(v7, v8, VirtualMemory);
      if ( v11 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(&CurrentThread, v11);
      if ( v12 >= 0 )
      {
        if ( SmFpAllocate(*(_QWORD *)(a1 + 112), 4, a1, (__int64)VirtualMemory, *(_DWORD *)(a3 + 20) & 1) )
        {
LABEL_9:
          v12 = 0;
          *(_QWORD *)(a3 + 24) = VirtualMemory;
          goto LABEL_10;
        }
        v12 = -1073741670;
        SmKmUnlockMdl(VirtualMemory);
      }
      SmFpFree(*(_QWORD *)(a1 + 112), 2LL, a1, VirtualMemory);
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  MmStoreFreeVirtualMemory(*(_QWORD *)a3);
  v14 = *(_QWORD *)(a1 + 104);
  v12 = 0;
  if ( v14 )
    SmKmVirtualLockCtxMemoryUnlocked(v14);
LABEL_10:
  *(_DWORD *)(a3 + 32) = v12;
}
