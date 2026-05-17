/*
 * XREFs of EtwpFindRegistration @ 0x18002A0E0
 * Callers:
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18002A90C (EtwpRegistrationCompare.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007EA30 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int16 v11; // [rsp+28h] [rbp-10h]

  v10 = a1;
  v11 = (__int16)a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v4 = (_QWORD *)EtwpRegistrationTable;
  v5 = 0LL;
  while ( v4 )
  {
    v6 = EtwpRegistrationCompare(&v10, v4);
    if ( v6 < 0 )
    {
LABEL_3:
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( v6 <= 0 )
      {
        v5 = v4;
        goto LABEL_3;
      }
      v4 = (_QWORD *)v4[1];
    }
  }
  if ( v5 )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(v5 + 9) )
    {
      v8 = (_QWORD *)v5[1];
      v9 = v5;
      if ( v8 )
      {
        do
        {
          v5 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v5 || (_QWORD *)*v5 == v9 )
            break;
          v9 = v5;
        }
      }
      if ( !v5 || (unsigned int)EtwpRegistrationCompare(&v10, v5) )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v5;
}
