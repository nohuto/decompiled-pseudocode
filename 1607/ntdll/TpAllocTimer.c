/*
 * XREFs of TpAllocTimer @ 0x18003A720
 * Callers:
 *     RtlCreateTimer @ 0x180064830 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800829C0 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     TppInitializeTimer @ 0x18003D268 (TppInitializeTimer.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
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
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8u, 0x168uLL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
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
