/*
 * XREFs of EtwpGetNextRegistration @ 0x1800541BC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x180053E80 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x180054000 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800FD080 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007EA20 (RtlTryAcquireSRWLockShared.c)
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
    Value = qword_1801533D8;
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
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
