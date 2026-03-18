/*
 * XREFs of MiDeleteNoBlockStacks @ 0x140012424
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 *     MiEmptyKernelStackCache @ 0x14012FF64 (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall MiDeleteNoBlockStacks(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rbx
  ULONG_PTR v3; // r8

  if ( !a1 )
    _InterlockedAnd(&dword_14034F638, 0);
  result = RtlpInterlockedFlushSList(&stru_14034F600);
  p_Next = &result->Next;
  if ( result )
  {
    do
    {
      v3 = (ULONG_PTR)(p_Next - 510);
      if ( *(p_Next - 2) != ((unsigned __int64)(p_Next - 510) ^ qword_14034FB80) )
        KeBugCheckEx(0x1Au, 0x3471uLL, v3, *(_QWORD *)(v3 + 4064), v3 ^ qword_14034FB80);
      p_Next = (_QWORD *)*p_Next;
      result = (PSLIST_ENTRY)MiDeleteKernelStack(
                               ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                               *(unsigned int *)(v3 + 4088));
    }
    while ( p_Next );
  }
  return result;
}
