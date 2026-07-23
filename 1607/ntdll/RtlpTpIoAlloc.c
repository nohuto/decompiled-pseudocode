/*
 * XREFs of RtlpTpIoAlloc @ 0x18009052C
 * Callers:
 *     RtlpTpIoLookup @ 0x1800903E0 (RtlpTpIoLookup.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1CC (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TpBindFileToDirect @ 0x18007A054 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x180086728 (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  char *Heap; // rdi
  NTSTATUS v7; // ebx
  char *v8; // rsi
  _DWORD *v9; // r14
  volatile signed __int32 *v10; // rcx
  unsigned __int32 v12; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v7 = -1073741801;
    goto LABEL_7;
  }
  v7 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock, &v13);
  v12 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v8 = Heap + 76;
    v9 = Heap + 72;
    if ( v13 )
    {
      TppGetCurrentThreadNumaNode((__int64)v13, (_DWORD *)Heap + 18, (unsigned __int8 *)Heap + 76);
    }
    else
    {
      *v9 = 0;
      *v8 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = *v9;
    Heap[20] = *v8;
    v10 = v13;
    *((_QWORD *)Heap + 10) = v13;
    v7 = TpBindFileToDirect(a3, (__int64)(Heap + 8), (__int64)v10);
    v12 = v7;
    if ( v7 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v7 = 0;
LABEL_7:
      v12 = v7;
    }
  }
  if ( v7 < 0 )
  {
    if ( v13 )
      TpDereferenceGlobalPool((PVOID)v13);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v12;
    }
  }
  return (unsigned int)v7;
}
