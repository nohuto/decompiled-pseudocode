/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14011E8F4
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002DC4 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140220ADC (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x1400049CC (SmSetThreadPagePriority.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 *     SmKmUnlockMdl @ 0x14011EF08 (SmKmUnlockMdl.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14011F440 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140221054 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14022119C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x14053260C (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140533000 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 (__fastcall **a3)(__int64, __int64))
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ebx
  __int64 (__fastcall *v9)(__int64, __int64); // r12
  unsigned __int64 v10; // r13
  struct _MDL *v11; // r14
  int v12; // ebp
  __int64 VirtualMemory; // rbp
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rcx
  struct _MDL *v16; // r15
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+18h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    VirtualMemory = MmStoreAllocateVirtualMemory(a3[1]);
    if ( VirtualMemory )
    {
      v14 = *(_QWORD *)(a1 + 112);
      if ( v14 )
      {
        v8 = SmKmVirtualLockCtxLockMemory(v14);
        if ( v8 < 0 )
        {
          MmStoreFreeVirtualMemory(VirtualMemory);
          goto LABEL_6;
        }
      }
      a3[4] = (__int64 (__fastcall *)(__int64, __int64))VirtualMemory;
      goto LABEL_14;
    }
LABEL_21:
    v8 = -1073741670;
    goto LABEL_6;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v8 = (*a3)(a1, (__int64)a3);
      else
        v8 = -1073741811;
      goto LABEL_6;
    }
    v9 = *a3;
    v10 = (unsigned __int64)a3[1];
    v11 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 2, a1, 0LL, *((_DWORD *)a3 + 5) & 1);
    if ( v11 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = SmSetThreadPagePriority(&CurrentThread);
      v8 = SmKmProbeAndLockAddress(v9, v10, v11, 0);
      if ( v8 == -1073741395 && (*((_DWORD *)a3 + 5) & 1) != 0 )
      {
        v16 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 4, a1, 0LL, 1);
        v8 = SmKmProbeAndLockAddress(v9, v10, v11, 1u);
        if ( v8 >= 0 )
          v11->Next = v16;
        else
          SmFpFree(*(_QWORD *)(a1 + 120), 4, a1, v16);
      }
      if ( v12 != *((_DWORD *)a3 + 4) )
        SmSetThreadPagePriority(&CurrentThread);
      if ( v8 >= 0 )
      {
        if ( SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 5, a1, (__int64)v11, *((_DWORD *)a3 + 5) & 1) )
        {
          a3[4] = (__int64 (__fastcall *)(__int64, __int64))v11;
LABEL_14:
          v8 = 0;
          goto LABEL_6;
        }
        v8 = -1073741670;
        SmKmUnlockMdl(v11);
      }
      SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, v11);
      goto LABEL_6;
    }
    goto LABEL_21;
  }
  MmStoreFreeVirtualMemory(*a3);
  v15 = *(_QWORD *)(a1 + 112);
  v8 = 0;
  if ( v15 )
    SmKmVirtualLockCtxMemoryUnlocked(v15);
LABEL_6:
  *((_DWORD *)a3 + 10) = v8;
}
