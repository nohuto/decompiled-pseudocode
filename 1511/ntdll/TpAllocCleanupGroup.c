/*
 * XREFs of TpAllocCleanupGroup @ 0x18007F830
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _QWORD *Heap; // rax
  _TP_CLEANUP_GROUP *v3; // rcx
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  NTSTATUS v6; // [rsp+20h] [rbp-18h]
  PVOID BaseAddress; // [rsp+40h] [rbp+8h]

  if ( !CleanupGroupReturn || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter(CleanupGroupReturn);
    return -1073741811;
  }
  else
  {
    *CleanupGroupReturn = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 0x50uLL);
    v3 = (_TP_CLEANUP_GROUP *)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *((_DWORD *)Heap + 1) = 0;
      Heap[1] = 0LL;
      Heap[7] = 0LL;
      v4 = Heap + 2;
      v4[1] = v4;
      *v4 = v4;
      *((_QWORD *)v3 + 9) = (char *)v3 + 64;
      *((_QWORD *)v3 + 8) = (char *)v3 + 64;
      result = 0;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *((_QWORD *)v3 + 6) = 0LL;
      v6 = 0;
      *CleanupGroupReturn = v3;
    }
    else
    {
      result = -1073741801;
      v6 = -1073741801;
    }
    if ( result < 0 )
    {
      if ( v3 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, BaseAddress);
        return v6;
      }
    }
  }
  return result;
}
