/*
 * XREFs of EtwpGetNextRegistration @ 0x1800541CC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x180053E90 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800FD080 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007EA30 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // si
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 j; // rbx
  _QWORD *i; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx

  v5 = 0;
  v6 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = a1;
    if ( v7 )
    {
      for ( i = *(_QWORD **)v7; i; i = (_QWORD *)*i )
        v7 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a1 + 16); ; j = *(_QWORD *)(v7 + 16) )
      {
        v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)v7 == v8 )
          break;
        v8 = v7;
      }
    }
  }
  else
  {
    v7 = qword_1801533D8;
  }
  while ( v7 )
  {
    v6 = v7;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(v7 + 72) )
    {
      v5 = 1;
      break;
    }
    v12 = *(_QWORD **)(v7 + 8);
    v13 = v7;
    if ( v12 )
    {
      do
      {
        v7 = (unsigned __int64)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)v7 == v13 )
          break;
        v13 = v7;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return v6 & -(__int64)(v5 != 0);
}
