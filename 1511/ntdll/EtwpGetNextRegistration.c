/*
 * XREFs of EtwpGetNextRegistration @ 0x180052AFC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1800514A4 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800F39C0 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B490 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(_RTL_SRWLOCK *a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 Value; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 j; // rbx
  _QWORD *i; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( a1 )
  {
    Value = a1[1].Value;
    v5 = (unsigned __int64)a1;
    if ( Value )
    {
      for ( i = *(_QWORD **)Value; i; i = (_QWORD *)*i )
        Value = (unsigned __int64)i;
    }
    else
    {
      for ( j = a1[2].Value; ; j = *(_QWORD *)(Value + 16) )
      {
        Value = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Value || *(_QWORD *)Value == v5 )
          break;
        v5 = Value;
      }
    }
  }
  else
  {
    Value = (unsigned __int64)EtwpRegistrationTable.Min;
  }
  while ( Value )
  {
    v3 = Value;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Value + 72)) )
    {
      v2 = 1;
      break;
    }
    v9 = *(_QWORD **)(Value + 8);
    v10 = Value;
    if ( v9 )
    {
      do
      {
        Value = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
    }
    else
    {
      while ( 1 )
      {
        Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Value || *(_QWORD *)Value == v10 )
          break;
        v10 = Value;
      }
    }
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
