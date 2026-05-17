/*
 * XREFs of LdrpAllocateTls @ 0x1800512B4
 * Callers:
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x180051188 (LdrpInitializeTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x180051458 (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x180051498 (LdrpGetNewTlsVector.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTls(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // r14
  void *ProcessHeap; // r12
  unsigned int v6; // r15d
  void **p_ThreadLocalStoragePointer; // rdi
  _UNKNOWN **v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  __int64 Heap; // rax
  _QWORD *v12; // rcx
  unsigned int i; // r14d
  _QWORD *v15; // r8
  __int64 v16; // [rsp+50h] [rbp-78h]
  __int64 Size; // [rsp+58h] [rbp-70h]
  unsigned int v18; // [rsp+D0h] [rbp+8h] BYREF
  int v19; // [rsp+D8h] [rbp+10h]
  _QWORD *v20; // [rsp+E0h] [rbp+18h]
  _UNKNOWN **v21; // [rsp+E8h] [rbp+20h]

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  v6 = LdrpTlsBitmap;
  v19 = LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
LABEL_10:
    v4->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)LdrpGetNewTlsVector((unsigned int)LdrpTlsBitmap);
  if ( p_ThreadLocalStoragePointer )
  {
    v8 = &LdrpTlsList;
    v21 = &LdrpTlsList;
    v9 = LdrpTlsList;
    while ( v9 != v8 )
    {
      v10 = v9;
      v20 = (_QWORD *)*v9;
      Size = LdrpComputeTlsSizeAndAlignment(v9, &v18);
      v16 = v18;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, Size + v18 + 1LL);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( i = 0; i < v6; ++i )
        {
          v15 = p_ThreadLocalStoragePointer[i];
          if ( v15 )
            RtlFreeHeap((__int64)ProcessHeap, 0, *(v15 - 1));
        }
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)(p_ThreadLocalStoragePointer - 2));
        return 3221225495LL;
      }
      v12 = (_QWORD *)(~v16 & (Heap + v18 + 1));
      *(v12 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v10 + 16)] = v12;
      memmove(v12, (const void *)v10[2], Size);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          (__int64)"TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v10 + 16),
          *((_DWORD *)v10 + 6) - *((_DWORD *)v10 + 4),
          (const void *)v10[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v10 + 16)]);
      v9 = v20;
      v8 = v21;
    }
    goto LABEL_10;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
