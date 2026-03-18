/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x140471A08
 * Callers:
 *     IoSetIoCompletionEx2 @ 0x14007DEC0 (IoSetIoCompletionEx2.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F8A70 (NtReleaseWorkerFactoryWorker.c)
 *     IoAllocateMiniCompletionPacket @ 0x14047192C (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
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
LABEL_7:
    result = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v8, 0x20706349u, LowPoolPriority);
    goto LABEL_8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_3;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[7].L;
  ++L->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result )
    goto LABEL_3;
  ++L->AllocateMisses;
  if ( !a2 )
  {
    v8 = 56LL;
    goto LABEL_7;
  }
  v3 = 3;
  result = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 0x38uLL, 0x20706349u);
LABEL_8:
  if ( result )
LABEL_3:
    result[16] = v3;
  return result;
}
