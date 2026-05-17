/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x1800296B0
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002943C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(volatile signed __int32 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  volatile signed __int64 *v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *i; // rdx
  volatile signed __int32 *v9; // r8
  _QWORD *Heap; // rax
  _QWORD *v11; // rsi
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *j; // rdx
  volatile signed __int32 *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 result; // rax

  v3 = qword_1801530A0;
  if ( a3 )
  {
    result = 3221225485LL;
  }
  else
  {
    v6 = (volatile signed __int64 *)(qword_1801530A0 + 8);
    RtlAcquireSRWLockShared(qword_1801530A0 + 8);
    v7 = (_QWORD *)(v3 + 16);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v9 = (volatile signed __int32 *)(i - 4);
      if ( *(i - 2) == a2 )
      {
        _InterlockedIncrement(v9 + 27);
        *a1 = v9;
        RtlReleaseSRWLockShared(v6);
        return 0LL;
      }
    }
    RtlReleaseSRWLockShared(v6);
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
    v11 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x98uLL);
      *(_DWORD *)v11 = 9963794;
      v11[6] = 0LL;
      v11[7] = 0LL;
      v11[2] = a2;
      v11[9] = v11 + 8;
      v11[8] = v11 + 8;
      *((_DWORD *)v11 + 32) = 0;
      v11[15] = 0LL;
      v11[1] = 0LL;
      *((_DWORD *)v11 + 27) = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)v6, v12, v13, v14);
      for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
      {
        v16 = (volatile signed __int32 *)(j - 4);
        if ( *(j - 2) == a2 )
        {
          _InterlockedIncrement(v16 + 27);
          *a1 = v16;
          RtlReleaseSRWLockExclusive(v6);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
          return 0LL;
        }
      }
      v17 = (_QWORD *)*v7;
      v18 = v11 + 4;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        __fastfail(3u);
      *v18 = v17;
      v11[5] = v7;
      v17[1] = v18;
      *v7 = v18;
      *a1 = (volatile signed __int32 *)v11;
      RtlReleaseSRWLockExclusive(v6);
      return 0LL;
    }
    result = 3221225495LL;
  }
  *a1 = 0LL;
  return result;
}
