/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x18007A460
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x18007A580 (TpSetPoolStackInformation.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007D7D8 (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *Heap; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+40h] [rbp+8h]

  v12 = 0;
  v11 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock, a2, a3, a4);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 16LL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v6 = a1[1];
      if ( Heap[1] < v6 )
      {
        Heap[1] = v6;
        v12 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v12 = 1;
      }
    }
    else
    {
      v11 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v12 && v11 >= 0 )
  {
    v7 = TpPoolReferenceExistingGlobalPool();
    if ( v7 )
    {
      v11 = TpSetPoolStackInformation(v7);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (char *)&TppPoolpGlobalPoolLock, v8, v9);
    }
  }
  return (unsigned int)v11;
}
