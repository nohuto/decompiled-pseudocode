/*
 * XREFs of RtlpAddVectoredHandler @ 0x180074B20
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180074B10 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180090C50 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlEncodePointer @ 0x180074C40 (RtlEncodePointer.c)
 */

char *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 Heap; // rax
  char *v7; // rbx
  char *v8; // rsi
  char *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char **v14; // rax

  v4 = a3;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  v7 = (char *)Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 16) = 1;
    *(_QWORD *)(Heap + 24) = RtlEncodePointer(a2);
    v8 = (char *)&LdrpVectorHandlerList + 24 * v4;
    v9 = v8 + 8;
    RtlAcquireSRWLockExclusive((unsigned __int64)v8, (char *)(3 * v4), v10, v11);
    if ( *(char **)v9 == v9 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    if ( a1 )
    {
      v12 = *(_QWORD *)v9;
      if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *(_QWORD *)v7 = v12;
      *((_QWORD *)v7 + 1) = v9;
      *(_QWORD *)(v12 + 8) = v7;
      *(_QWORD *)v9 = v7;
    }
    else
    {
      v14 = (char **)*((_QWORD *)v8 + 2);
      if ( *v14 != v9 )
        __fastfail(3u);
      *(_QWORD *)v7 = v9;
      *((_QWORD *)v7 + 1) = v14;
      *v14 = v7;
      *((_QWORD *)v8 + 2) = v7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&LdrpVectorHandlerList + 3 * v4);
  }
  return v7;
}
