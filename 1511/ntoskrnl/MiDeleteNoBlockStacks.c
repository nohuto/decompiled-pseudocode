/*
 * XREFs of MiDeleteNoBlockStacks @ 0x140014528
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 *     MiEmptyKernelStackCache @ 0x1400C1C3C (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall MiDeleteNoBlockStacks(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rbx
  ULONG_PTR v3; // r8

  if ( !a1 )
    _InterlockedAnd(&dword_1402FF178, 0);
  result = RtlpInterlockedFlushSList(&stru_1402FF140);
  p_Next = &result->Next;
  if ( result )
  {
    do
    {
      v3 = (ULONG_PTR)(p_Next - 510);
      if ( *(p_Next - 2) != ((unsigned __int64)(p_Next - 510) ^ qword_1402FF6C0) )
        KeBugCheckEx(0x1Au, 0x3471uLL, v3, *(_QWORD *)(v3 + 4064), v3 ^ qword_1402FF6C0);
      p_Next = (_QWORD *)*p_Next;
      result = (PSLIST_ENTRY)MiDeleteKernelStack(
                               ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                               *(unsigned int *)(v3 + 4088));
    }
    while ( p_Next );
  }
  return result;
}
