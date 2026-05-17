/*
 * XREFs of EtwpFindRegistration @ 0x18000C3E8
 * Callers:
 *     EtwDeliverDataBlock @ 0x18000C140 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x180038E58 (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x180070C50 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  int v4; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+28h] [rbp-10h]

  v8 = a1;
  v9 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = 0LL;
  v3 = (_QWORD *)EtwpRegistrationTable;
  EtwpProvLockOwner = (int)NtCurrentTeb()->ClientId.UniqueThread;
  while ( v3 )
  {
    v4 = EtwpRegistrationCompare(&v8, v3);
    if ( v4 < 0 )
    {
LABEL_3:
      v3 = (_QWORD *)*v3;
    }
    else
    {
      if ( v4 <= 0 )
      {
        v2 = v3;
        goto LABEL_3;
      }
      v3 = (_QWORD *)v3[1];
    }
  }
  if ( v2 )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(v2 + 9) )
    {
      v6 = (_QWORD *)v2[1];
      v7 = v2;
      if ( v6 )
      {
        do
        {
          v2 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        while ( 1 )
        {
          v2 = (_QWORD *)(v2[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v2 || (_QWORD *)*v2 == v7 )
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
