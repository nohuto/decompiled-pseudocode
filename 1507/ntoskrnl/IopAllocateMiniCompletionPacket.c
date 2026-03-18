/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x14042D3D0
 * Callers:
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     IoAllocateMiniCompletionPacket @ 0x14042D398 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

_BYTE *__fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  _BYTE *result; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  SIZE_T v8; // rdx

  v3 = a1;
  if ( a1 == 4 )
  {
    v8 = 80LL;
    goto LABEL_8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !result )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[7].L;
    ++L->TotalAllocates;
    result = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !result )
    {
      ++L->AllocateMisses;
      if ( a2 )
      {
        v3 = 3;
        result = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 0x38uLL, 0x20706349u);
        goto LABEL_9;
      }
      v8 = 56LL;
LABEL_8:
      result = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v8, 0x20706349u, LowPoolPriority);
LABEL_9:
      if ( !result )
        return result;
    }
  }
  result[16] = v3;
  return result;
}
