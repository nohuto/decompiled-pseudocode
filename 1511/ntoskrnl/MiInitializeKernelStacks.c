/*
 * XREFs of MiInitializeKernelStacks @ 0x140762E08
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     MiMarkBootGuardPage @ 0x14052F734 (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x140763814 (MiMarkBootKernelStack.c)
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
  InitializeSListHead(&stru_1402FF140);
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
  byte_1402FF138 = (unsigned int)KeKernelStackSize >> 12;
  result = MiDeleteNoBlockStacks;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteNoBlockStacks;
  return result;
}
