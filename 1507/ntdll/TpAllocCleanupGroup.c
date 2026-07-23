/*
 * XREFs of TpAllocCleanupGroup @ 0x1800738F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _PEB_LDR_DATA *Ldr; // rdx
  _QWORD *Heap; // rax
  _TP_CLEANUP_GROUP *v4; // rcx
  _QWORD *v5; // rax
  NTSTATUS result; // eax
  NTSTATUS v7; // [rsp+20h] [rbp-18h]
  PVOID BaseAddress; // [rsp+40h] [rbp+8h]

  if ( !CleanupGroupReturn || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(CleanupGroupReturn, Ldr);
    return -1073741811;
  }
  else
  {
    *CleanupGroupReturn = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 0x50uLL);
    v4 = (_TP_CLEANUP_GROUP *)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *((_DWORD *)Heap + 1) = 0;
      Heap[1] = 0LL;
      Heap[7] = 0LL;
      v5 = Heap + 2;
      v5[1] = v5;
      *v5 = v5;
      *((_QWORD *)v4 + 9) = (char *)v4 + 64;
      *((_QWORD *)v4 + 8) = (char *)v4 + 64;
      result = 0;
      *((_QWORD *)v4 + 4) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      *((_QWORD *)v4 + 6) = 0LL;
      v7 = 0;
      *CleanupGroupReturn = v4;
    }
    else
    {
      result = -1073741801;
      v7 = -1073741801;
    }
    if ( result < 0 )
    {
      if ( v4 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, BaseAddress);
        return v7;
      }
    }
  }
  return result;
}
