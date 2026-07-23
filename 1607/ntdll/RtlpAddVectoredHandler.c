/*
 * XREFs of RtlpAddVectoredHandler @ 0x180074B10
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180074B00 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180090C40 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlEncodePointer @ 0x180074C30 (RtlEncodePointer.c)
 */

_RTL_SRWLOCK **__fastcall RtlpAddVectoredHandler(int a1, void *a2, unsigned int a3)
{
  __int64 v4; // rbp
  _RTL_SRWLOCK **Heap; // rax
  _RTL_SRWLOCK **v7; // rbx
  _RTL_SRWLOCK *v8; // rsi
  _RTL_SRWLOCK *v9; // rdi
  unsigned __int64 Value; // rax
  _RTL_SRWLOCK **v12; // rax

  v4 = a3;
  Heap = (_RTL_SRWLOCK **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  v7 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = 1;
    Heap[3] = (_RTL_SRWLOCK *)RtlEncodePointer(a2);
    v8 = (_RTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + 24 * v4);
    v9 = v8 + 1;
    RtlAcquireSRWLockExclusive(v8);
    if ( (_RTL_SRWLOCK *)v9->Value == v9 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    if ( a1 )
    {
      Value = v9->Value;
      if ( *(_RTL_SRWLOCK **)(v9->Value + 8) != v9 )
        __fastfail(3u);
      *v7 = (_RTL_SRWLOCK *)Value;
      v7[1] = v9;
      *(_QWORD *)(Value + 8) = v7;
      v9->Value = (unsigned __int64)v7;
    }
    else
    {
      v12 = (_RTL_SRWLOCK **)v8[2].Value;
      if ( *v12 != v9 )
        __fastfail(3u);
      *v7 = v9;
      v7[1] = (_RTL_SRWLOCK *)v12;
      *v12 = (_RTL_SRWLOCK *)v7;
      v8[2].Value = (unsigned __int64)v7;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&LdrpVectorHandlerList + 3 * v4);
  }
  return v7;
}
