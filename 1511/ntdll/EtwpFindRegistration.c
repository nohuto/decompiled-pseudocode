/*
 * XREFs of EtwpFindRegistration @ 0x1800540F8
 * Callers:
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x1800546E8 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B490 (RtlTryAcquireSRWLockShared.c)
 */

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_BALANCED_NODE *Root; // rdi
  int v4; // eax
  _RTL_SRWLOCK *Value; // rax
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+28h] [rbp-10h]

  v8 = a1;
  v9 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = 0LL;
  Root = EtwpRegistrationTable.Root;
  EtwpProvLockOwner = (int)NtCurrentTeb()->ClientId.UniqueThread;
  while ( Root )
  {
    v4 = EtwpRegistrationCompare(&v8, Root);
    if ( v4 < 0 )
    {
LABEL_3:
      Root = Root->Children[0];
    }
    else
    {
      if ( v4 <= 0 )
      {
        v2 = (_RTL_SRWLOCK *)Root;
        goto LABEL_3;
      }
      Root = Root->Children[1];
    }
  }
  if ( v2 )
  {
    while ( !RtlTryAcquireSRWLockShared(v2 + 9) )
    {
      Value = (_RTL_SRWLOCK *)v2[1].Value;
      v7 = v2;
      if ( Value )
      {
        do
        {
          v2 = Value;
          Value = (_RTL_SRWLOCK *)Value->Value;
        }
        while ( Value );
      }
      else
      {
        while ( 1 )
        {
          v2 = (_RTL_SRWLOCK *)(v2[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v2 || (_RTL_SRWLOCK *)v2->Value == v7 )
            break;
          v7 = v2;
        }
      }
      if ( !v2 || (unsigned int)EtwpRegistrationCompare(&v8, v2) )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v2 = 0LL;
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v2;
}
