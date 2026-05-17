/*
 * XREFs of RtlpCreateSerializationGroup @ 0x180051C38
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

volatile signed __int32 *__fastcall RtlpCreateSerializationGroup(int a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // rax
  unsigned __int64 v6; // rbx
  volatile signed __int32 *result; // rax
  __int64 v8; // rcx
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v15; // rdi
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rcx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180145FA8 + 48), a2, a3, a4);
  for ( i = *(_QWORD **)(qword_180145FA8 + 32); i != (_QWORD *)(qword_180145FA8 + 32); i = (_QWORD *)*i )
  {
    v6 = (unsigned __int64)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180145FA8 + 48));
      return (volatile signed __int32 *)v6;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180145FA8 + 48));
  result = (volatile signed __int32 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v6 = (unsigned __int64)result;
  if ( result )
  {
    memset((void *)result, 0, 0x28uLL);
    v8 = qword_180145FA8;
    *(_DWORD *)v6 = 2623763;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 4) = a1;
    *(_DWORD *)(v6 + 32) = 1;
    RtlAcquireSRWLockExclusive(v8 + 48, v9, v10, v11);
    v12 = qword_180145FA8;
    v13 = qword_180145FA8 + 32;
    for ( j = *(_QWORD **)(qword_180145FA8 + 32); j != (_QWORD *)v13; j = (_QWORD *)*j )
    {
      v15 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v15 + 8);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180145FA8 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        return v15;
      }
    }
    v16 = *(unsigned __int64 **)(qword_180145FA8 + 40);
    v17 = v6 + 8;
    *(_QWORD *)(v6 + 8) = v13;
    *(_QWORD *)(v6 + 16) = v16;
    if ( *v16 != v13 )
      __fastfail(3u);
    *v16 = v17;
    *(_QWORD *)(v13 + 8) = v17;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v12 + 48));
    return (volatile signed __int32 *)v6;
  }
  return result;
}
