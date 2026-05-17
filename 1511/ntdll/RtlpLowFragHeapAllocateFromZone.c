/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x18007522C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocateFromZone(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 Heap; // rax
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 3280);
    if ( v4 )
    {
      v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
      if ( (unsigned int)v5 < 0xF )
        return (v5 << 6) + v4 + 32;
    }
    Heap = RtlAllocateHeap(*(_QWORD *)(a1 + 24), 0x800000u, 1008LL);
    v12 = (_QWORD *)Heap;
    if ( !Heap )
      return 0LL;
    *(_DWORD *)(Heap + 16) = 1;
    v6 = (Heap + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive(a1, v9, v10, v11);
    if ( v4 == *(_QWORD *)(a1 + 8 * v3 + 3280) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    RtlFreeHeap(*(_QWORD *)(a1 + 24), 0x800000u, (unsigned __int64)v12);
  }
  v13 = *(_QWORD **)(a1 + 16);
  *v12 = a1 + 8;
  v12[1] = v13;
  if ( *v13 != a1 + 8 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 8 * v3 + 3280) = v12;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
