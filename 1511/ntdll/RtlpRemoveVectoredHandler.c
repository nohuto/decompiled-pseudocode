/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x1800822F0
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x1800822E0 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800CDE00 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  char *v6; // rdi
  unsigned __int64 i; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v4 = (int)a2;
  v6 = (char *)&LdrpVectorHandlerList + 24 * (unsigned int)a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)v6, a2, 3LL * (unsigned int)a2, a4);
  for ( i = *((_QWORD *)v6 + 1); ; i = *(_QWORD *)i )
  {
    if ( (char *)i == v6 + 8 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( (*(_DWORD *)(i + 16))-- == 1 )
  {
    v9 = *(_QWORD **)i;
    v10 = *(_QWORD **)(i + 8);
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v10 != i )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    if ( v10 == v9 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, i);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
  }
  return 1LL;
}
