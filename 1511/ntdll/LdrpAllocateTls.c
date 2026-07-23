/*
 * XREFs of LdrpAllocateTls @ 0x180040D98
 * Callers:
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x1800407A4 (LdrpInitializeTls.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x180040F44 (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x180040F84 (LdrpGetNewTlsVector.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // r14
  void *ProcessHeap; // r12
  unsigned int SizeOfBitMap; // r15d
  __int64 p_ThreadLocalStoragePointer; // rdi
  _UNKNOWN **v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // r13
  PVOID Heap; // rax
  _QWORD *v8; // rcx
  unsigned int i; // r14d
  __int64 v11; // r8
  __int64 v12; // [rsp+50h] [rbp-78h]
  __int64 Size; // [rsp+58h] [rbp-70h]
  unsigned int v14; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+D8h] [rbp+10h]
  _QWORD *v16; // [rsp+E0h] [rbp+18h]
  _UNKNOWN **v17; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v15 = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = (__int64)&v0->ThreadLocalStoragePointer;
LABEL_10:
    v0->ThreadLocalStoragePointer = (void *)p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    v4 = &LdrpTlsList;
    v17 = &LdrpTlsList;
    v5 = LdrpTlsList;
    while ( v5 != v4 )
    {
      v6 = v5;
      v16 = (_QWORD *)*v5;
      Size = LdrpComputeTlsSizeAndAlignment(v5, &v14);
      v12 = v14;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, Size + v14 + 1LL);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( i = 0; i < SizeOfBitMap; ++i )
        {
          v11 = *(_QWORD *)(p_ThreadLocalStoragePointer + 8LL * i);
          if ( v11 )
            RtlFreeHeap(ProcessHeap, 0, *(PVOID *)(v11 - 8));
        }
        RtlFreeHeap(ProcessHeap, 0, (PVOID)(p_ThreadLocalStoragePointer - 16));
        return 3221225495LL;
      }
      v8 = (_QWORD *)(~v12 & ((unsigned __int64)Heap + v14 + 1));
      *(v8 - 1) = Heap;
      *(_QWORD *)(p_ThreadLocalStoragePointer + 8LL * *((unsigned int *)v6 + 16)) = v8;
      memmove(v8, (const void *)v6[2], Size);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          (__int64)"TlsVector %p Index %d : %d bytes copied from %p to %p\n");
      v5 = v16;
      v4 = v17;
    }
    goto LABEL_10;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
