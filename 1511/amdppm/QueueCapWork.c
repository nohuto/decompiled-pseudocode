/*
 * XREFs of QueueCapWork @ 0x1C0001618
 * Callers:
 *     QuickCapTraceDpc @ 0x1C00015E0 (QuickCapTraceDpc.c)
 *     LongCapTraceDpc @ 0x1C0001600 (LongCapTraceDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueCapWork(PVOID *a1, __int64 a2, __int64 a3)
{
  ULONG v6; // eax
  char *PoolWithTag; // rax
  char *v8; // rdi

  v6 = IoSizeofWorkItem();
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 24, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 1) = a2;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 2) = a3;
    IoInitializeWorkItem(*a1, (PIO_WORKITEM)(PoolWithTag + 24));
    IoQueueWorkItem((PIO_WORKITEM)(v8 + 24), CapLogWorker, DelayedWorkQueue, v8);
  }
}
