/*
 * XREFs of RtlpAddVectoredHandler @ 0x1800729B0
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x1800729A0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x18008E220 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEncodePointer @ 0x180072AD0 (RtlEncodePointer.c)
 */

unsigned __int64 *__fastcall RtlpAddVectoredHandler(int a1, void *a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned __int64 *Heap; // rax
  unsigned __int64 *v7; // rbx
  _RTL_SRWLOCK *v8; // rsi
  unsigned __int64 *v9; // rdi
  _QWORD *v10; // rax
  unsigned __int64 **Value; // rax

  v4 = a3;
  Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  v7 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = 1;
    Heap[3] = (unsigned __int64)RtlEncodePointer(a2);
    v8 = (_RTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + 24 * v4);
    v9 = (unsigned __int64 *)&v8[1];
    RtlAcquireSRWLockExclusive(v8);
    if ( (unsigned __int64 *)*v9 == v9 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    if ( a1 )
    {
      v10 = (_QWORD *)*v9;
      *v7 = *v9;
      v7[1] = (unsigned __int64)v9;
      if ( (unsigned __int64 *)v10[1] != v9 )
        __fastfail(3u);
      v10[1] = v7;
      *v9 = (unsigned __int64)v7;
    }
    else
    {
      Value = (unsigned __int64 **)v8[2].Value;
      *v7 = (unsigned __int64)v9;
      v7[1] = (unsigned __int64)Value;
      if ( *Value != v9 )
        __fastfail(3u);
      *Value = v7;
      v8[2].Value = (unsigned __int64)v7;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&LdrpVectorHandlerList + 3 * v4);
  }
  return v7;
}
