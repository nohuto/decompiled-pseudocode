/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x1800296A0
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002942C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(volatile signed __int32 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _RTL_SRWLOCK *v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *i; // rdx
  volatile signed __int32 *v9; // r8
  _QWORD *Heap; // rax
  _QWORD *v11; // rsi
  _QWORD *j; // rdx
  volatile signed __int32 *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 result; // rax

  v3 = qword_1801530A0;
  if ( a3 )
  {
    result = 3221225485LL;
  }
  else
  {
    v6 = (_RTL_SRWLOCK *)(qword_1801530A0 + 8);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801530A0 + 8));
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
      for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
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
      v14 = (_QWORD *)*v7;
      v15 = v11 + 4;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        __fastfail(3u);
      *v15 = v14;
      v11[5] = v7;
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
