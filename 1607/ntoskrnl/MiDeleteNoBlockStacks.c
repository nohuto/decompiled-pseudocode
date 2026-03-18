/*
 * XREFs of MiDeleteNoBlockStacks @ 0x1400BE128
 * Callers:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     MiWorkingSetManager @ 0x1400BDF08 (MiWorkingSetManager.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x140166E80 (RtlpInterlockedFlushSList.c)
 */

void __fastcall MiDeleteNoBlockStacks(__int64 a1)
{
  PSLIST_ENTRY v1; // rbx
  __int64 v2; // r9
  ULONG_PTR v3; // r8

  if ( !a1 )
    _InterlockedAnd(&dword_1403275A0, 0);
  v1 = RtlpInterlockedFlushSList(&stru_140327550);
  while ( v1 )
  {
    v3 = (ULONG_PTR)&v1[-255];
    if ( v1[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v1[-255] ^ qword_140327780) )
      KeBugCheckEx(0x1Au, 0x3471uLL, v3, *(_QWORD *)(v3 + 4064), v3 ^ qword_140327780);
    v1 = v1->Next;
    MiDeleteKernelStack(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(unsigned int *)(v3 + 4088), v3, v2);
  }
}
