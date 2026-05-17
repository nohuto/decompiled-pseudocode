/*
 * XREFs of EtwpGetNextRegistration @ 0x18000C2FC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x18000BE90 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x18000C140 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x1800F3B20 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180070C50 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(unsigned __int64 a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 j; // rbx
  _QWORD *i; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = a1;
    if ( v4 )
    {
      for ( i = *(_QWORD **)v4; i; i = (_QWORD *)*i )
        v4 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a1 + 16); ; j = *(_QWORD *)(v4 + 16) )
      {
        v4 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v4 || *(_QWORD *)v4 == v5 )
          break;
        v5 = v4;
      }
    }
  }
  else
  {
    v4 = qword_180147600;
  }
  while ( v4 )
  {
    v3 = v4;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(v4 + 72) )
    {
      v2 = 1;
      break;
    }
    v9 = *(_QWORD **)(v4 + 8);
    v10 = v4;
    if ( v9 )
    {
      do
      {
        v4 = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v4 || *(_QWORD *)v4 == v10 )
          break;
        v10 = v4;
      }
    }
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 72);
  return v3 & -(__int64)(v2 != 0);
}
