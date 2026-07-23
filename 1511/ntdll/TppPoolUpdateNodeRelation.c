/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x1800060D4
 * Callers:
 *     TpAllocPoolInternal @ 0x1800061E0 (TpAllocPoolInternal.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5174 (TppAdjustRunningThreadGoal.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtQuerySystemInformationEx @ 0x1800A79F0 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  char *Heap; // rbx
  NTSTATUS v3; // edi
  char *i; // rdx
  ULONG SystemInformationLength; // [rsp+48h] [rbp+10h] BYREF
  int InputBuffer; // [rsp+50h] [rbp+18h] BYREF

  InputBuffer = 1;
  SystemInformationLength = 80 * TppNumberNodes;
  Heap = (char *)RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   (TppHeapTag + 786432) | 8,
                   (unsigned int)(80 * TppNumberNodes));
  if ( Heap )
  {
    v3 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           Heap,
           SystemInformationLength,
           &SystemInformationLength);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)TppNumberNodes);
      for ( i = Heap; i < &Heap[SystemInformationLength]; i += *((unsigned int *)i + 1) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *((unsigned int *)i + 2)) = *((_OWORD *)i + 2);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
