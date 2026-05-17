/*
 * XREFs of TpAllocTimer @ 0x18000A620
 * Callers:
 *     RtlCreateTimer @ 0x1800081A0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800513D0 (RtlpInitializeWnf.c)
 * Callees:
 *     TppInitializeTimer @ 0x18000CF00 (TppInitializeTimer.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocTimer(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // edi
  __int64 Heap; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8u, 352LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 168) = retaddr;
      result = TppInitializeTimer(
                 Heap,
                 0,
                 a3,
                 v4,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)TppTimerpTaskVFuncs);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v9 + 80) = a2;
        *a1 = v9;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
