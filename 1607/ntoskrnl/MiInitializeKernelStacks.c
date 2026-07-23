/*
 * XREFs of MiInitializeKernelStacks @ 0x14078E3DC
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     MiMarkBootGuardPage @ 0x14054E61C (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x14078E4F0 (MiMarkBootKernelStack.c)
 */

void (__fastcall *MiInitializeKernelStacks())(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdi
  __int64 v5; // rbx
  void (__fastcall *result)(__int64); // rax

  CurrentThread = KeGetCurrentThread();
  InitializeSListHead(&stru_140327590);
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = v1 - (unsigned int)KeKernelStackSize;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v4, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v5, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  __writecr8(CurrentIrql);
  MiMarkBootGuardPage((_BYTE *)(v5 - 8));
  MiMarkBootGuardPage((_BYTE *)(v4 - 8));
  stru_1403275C0.Parameter = 0LL;
  stru_1403275C0.List.Flink = 0LL;
  byte_140327580 = (unsigned int)KeKernelStackSize >> 12;
  result = MiDeleteNoBlockStacks;
  stru_1403275C0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteNoBlockStacks;
  return result;
}
