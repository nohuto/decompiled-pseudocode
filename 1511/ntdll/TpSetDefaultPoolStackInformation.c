/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180081320
 * Callers:
 *     <none>
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolStackInformation @ 0x180081440 (TpSetPoolStackInformation.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18008146C (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *Heap; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+40h] [rbp+8h]

  v10 = 0;
  v9 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, a2, a3, a4);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 16LL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v6 = a1[1];
      if ( Heap[1] < v6 )
      {
        Heap[1] = v6;
        v10 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v10 = 1;
      }
    }
    else
    {
      v9 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v10 && v9 >= 0 )
  {
    v7 = TpPoolReferenceExistingGlobalPool();
    if ( v7 )
    {
      v9 = TpSetPoolStackInformation(v7);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v9;
}
