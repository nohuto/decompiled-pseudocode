/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x180075D10
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180075D00 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800C4AD0 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(_RTL_SRWLOCK *a1, unsigned int a2)
{
  _RTL_SRWLOCK *v4; // rdi
  _RTL_SRWLOCK *i; // rbx
  _RTL_SRWLOCK *Value; // rdx
  _RTL_SRWLOCK *v8; // rax

  v4 = (_RTL_SRWLOCK *)((char *)&LdrpVectorHandlerList + 24 * a2);
  RtlAcquireSRWLockExclusive(v4);
  for ( i = (_RTL_SRWLOCK *)v4[1].Value; ; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( i == &v4[1] )
    {
      RtlReleaseSRWLockExclusive(v4);
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( (*(_DWORD *)&i[2].0)-- == 1 )
  {
    Value = (_RTL_SRWLOCK *)i->Value;
    v8 = (_RTL_SRWLOCK *)i[1].Value;
    if ( *(_RTL_SRWLOCK **)(i->Value + 8) != i || (_RTL_SRWLOCK *)v8->Value != i )
      __fastfail(3u);
    v8->Value = (unsigned __int64)Value;
    Value[1].Value = (unsigned __int64)v8;
    if ( v8 == Value )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
    RtlReleaseSRWLockExclusive(v4);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v4);
  }
  return 1LL;
}
