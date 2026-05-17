/*
 * XREFs of RtlpAddVectoredHandler @ 0x1800670E0
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x1800670D0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180083BA0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEncodePointer @ 0x180067200 (RtlEncodePointer.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 Heap; // rax
  _QWORD *v7; // rbx
  char *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v14; // rax

  v4 = a3;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
  v7 = (_QWORD *)Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 16) = 1;
    *(_QWORD *)(Heap + 24) = RtlEncodePointer(a2);
    v8 = (char *)&LdrpVectorHandlerList + 24 * v4;
    v9 = v8 + 8;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v8, (char *)(3 * v4), v10, v11);
    if ( (_QWORD *)*v9 == v9 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    if ( a1 )
    {
      v12 = (_QWORD *)*v9;
      *v7 = *v9;
      v7[1] = v9;
      if ( (_QWORD *)v12[1] != v9 )
        __fastfail(3u);
      v12[1] = v7;
      *v9 = v7;
    }
    else
    {
      v14 = (_QWORD *)*((_QWORD *)v8 + 2);
      *v7 = v9;
      v7[1] = v14;
      if ( (_QWORD *)*v14 != v9 )
        __fastfail(3u);
      *v14 = v7;
      *((_QWORD *)v8 + 2) = v7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&LdrpVectorHandlerList + 3 * v4);
  }
  return v7;
}
