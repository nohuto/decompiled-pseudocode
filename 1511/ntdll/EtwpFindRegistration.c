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

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  int v6; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int16 v11; // [rsp+28h] [rbp-10h]

  v10 = a1;
  v11 = (__int16)a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v4 = 0LL;
  v5 = (_QWORD *)EtwpRegistrationTable;
  EtwpProvLockOwner = (int)NtCurrentTeb()->ClientId.UniqueThread;
  while ( v5 )
  {
    v6 = EtwpRegistrationCompare(&v10, v5);
    if ( v6 < 0 )
    {
LABEL_3:
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( v6 <= 0 )
      {
        v4 = v5;
        goto LABEL_3;
      }
      v5 = (_QWORD *)v5[1];
    }
  }
  if ( v4 )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(v4 + 9) )
    {
      v8 = (_QWORD *)v4[1];
      v9 = v4;
      if ( v8 )
      {
        do
        {
          v4 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v9 )
            break;
          v9 = v4;
        }
      }
      if ( !v4 || (unsigned int)EtwpRegistrationCompare(&v10, v4) )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v4 = 0LL;
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v4;
}
