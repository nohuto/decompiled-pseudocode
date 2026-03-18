/*
 * XREFs of MiInitializeKernelStacks @ 0x1407D3770
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     MiMarkBootGuardPage @ 0x14059A720 (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x1407D4164 (MiMarkBootKernelStack.c)
 */

PSLIST_ENTRY (__fastcall *MiInitializeKernelStacks())(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // r14
  __int64 v5; // rbx
  PSLIST_ENTRY (__fastcall *result)(__int64); // rax

  CurrentThread = KeGetCurrentThread();
  InitializeSListHead(&stru_14034F600);
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = v1 - (unsigned int)KeKernelStackSize;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (v2 >> 9) & 0x7FFFFFFFF8LL;
  MiMarkBootKernelStack(v4 - 0x98000000000LL, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v5, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  __writecr8(CurrentIrql);
  MiMarkBootGuardPage(v5 - 8);
  MiMarkBootGuardPage(v4 - 0x98000000008LL);
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  byte_14034F5F8 = (unsigned int)KeKernelStackSize >> 12;
  result = MiDeleteNoBlockStacks;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteNoBlockStacks;
  return result;
}
