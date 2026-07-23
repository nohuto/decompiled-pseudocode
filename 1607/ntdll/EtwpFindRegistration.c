/*
 * XREFs of EtwpFindRegistration @ 0x18002A0D0
 * Callers:
 *     EtwDeliverDataBlock @ 0x180054000 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18002A8FC (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007EA20 (RtlTryAcquireSRWLockShared.c)
 */

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  PRTL_BALANCED_NODE v2; // rdi
  _RTL_SRWLOCK *v3; // rbx
  int v4; // eax
  _RTL_SRWLOCK *Value; // rax
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+28h] [rbp-10h]

  v8 = a1;
  v9 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = EtwpRegistrationTable;
  v3 = 0LL;
  while ( v2 )
  {
    v4 = EtwpRegistrationCompare(&v8, v2);
    if ( v4 < 0 )
    {
LABEL_3:
      v2 = v2->Children[0];
    }
    else
    {
      if ( v4 <= 0 )
      {
        v3 = (_RTL_SRWLOCK *)v2;
        goto LABEL_3;
      }
      v2 = v2->Children[1];
    }
  }
  if ( v3 )
  {
    while ( !RtlTryAcquireSRWLockShared(v3 + 9) )
    {
      Value = (_RTL_SRWLOCK *)v3[1].Value;
      v7 = v3;
      if ( Value )
      {
        do
        {
          v3 = Value;
          Value = (_RTL_SRWLOCK *)Value->Value;
        }
        while ( Value );
      }
      else
      {
        while ( 1 )
        {
          v3 = (_RTL_SRWLOCK *)(v3[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v3 || (_RTL_SRWLOCK *)v3->Value == v7 )
            break;
          v7 = v3;
        }
      }
      if ( !v3 || (unsigned int)EtwpRegistrationCompare(&v8, v3) )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v3 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v3;
}
