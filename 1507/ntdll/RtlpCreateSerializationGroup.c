/*
 * XREFs of RtlpCreateSerializationGroup @ 0x18000ADB4
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18000A8BC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     memset @ 0x180098540 (memset.c)
 */

volatile signed __int32 *__fastcall RtlpCreateSerializationGroup(int a1)
{
  _QWORD *i; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx

  RtlAcquireSRWLockShared(qword_180146F28 + 48);
  for ( i = *(_QWORD **)(qword_180146F28 + 32); i != (_QWORD *)(qword_180146F28 + 32); i = (_QWORD *)*i )
  {
    v3 = (volatile signed __int32 *)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement(v3 + 8);
      RtlReleaseSRWLockShared(qword_180146F28 + 48);
      return v3;
    }
  }
  RtlReleaseSRWLockShared(qword_180146F28 + 48);
  result = (volatile signed __int32 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 40LL);
  v3 = result;
  if ( result )
  {
    memset((void *)result, 0, 0x28uLL);
    v5 = qword_180146F28;
    *v3 = 2623763;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 1) = a1;
    *((_DWORD *)v3 + 8) = 1;
    RtlAcquireSRWLockExclusive(v5 + 48);
    v6 = qword_180146F28;
    v7 = qword_180146F28 + 32;
    for ( j = *(_QWORD **)(qword_180146F28 + 32); j != (_QWORD *)v7; j = (_QWORD *)*j )
    {
      v9 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v9 + 8);
        RtlReleaseSRWLockExclusive(qword_180146F28 + 48);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
        return v9;
      }
    }
    v10 = *(_QWORD **)(qword_180146F28 + 40);
    v11 = v3 + 2;
    *((_QWORD *)v3 + 1) = v7;
    *((_QWORD *)v3 + 2) = v10;
    if ( *v10 != v7 )
      __fastfail(3u);
    *v10 = v11;
    *(_QWORD *)(v7 + 8) = v11;
    RtlReleaseSRWLockExclusive(v6 + 48);
    return v3;
  }
  return result;
}
