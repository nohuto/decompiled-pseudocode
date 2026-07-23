/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x180053A70
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(volatile signed __int32 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _RTL_SRWLOCK *v6; // rbp
  _QWORD **v7; // rdi
  _QWORD *i; // rdx
  volatile signed __int32 *v9; // r8
  _QWORD *Heap; // rax
  _QWORD *v11; // rsi
  _QWORD *j; // rdx
  volatile signed __int32 *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 result; // rax

  v3 = qword_180145FA8;
  if ( a3 )
  {
    result = 3221225485LL;
  }
  else
  {
    v6 = (_RTL_SRWLOCK *)(qword_180145FA8 + 8);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180145FA8 + 8));
    v7 = (_QWORD **)(v3 + 16);
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
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
      RtlAcquireSRWLockExclusive(v6);
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
      {
        v13 = (volatile signed __int32 *)(j - 4);
        if ( *(j - 2) == a2 )
        {
          _InterlockedIncrement(v13 + 27);
          *a1 = v13;
          RtlReleaseSRWLockExclusive(v6);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
          return 0LL;
        }
      }
      v14 = *v7;
      v15 = v11 + 4;
      v11[4] = *v7;
      v11[5] = v7;
      if ( (_QWORD **)v14[1] != v7 )
        __fastfail(3u);
      v14[1] = v15;
      *v7 = v15;
      *a1 = (volatile signed __int32 *)v11;
      RtlReleaseSRWLockExclusive(v6);
      return 0LL;
    }
    result = 3221225495LL;
  }
  *a1 = 0LL;
  return result;
}
