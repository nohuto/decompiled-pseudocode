/*
 * XREFs of EtwpInsertRegistration @ 0x180054648
 * Callers:
 *     EtwNotificationRegister @ 0x1800541F0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180031350 (RtlRbInsertNodeEx.c)
 *     EtwpRegistrationCompare @ 0x1800546E8 (EtwpRegistrationCompare.c)
 */

signed __int64 __fastcall EtwpInsertRegistration(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  bool v6; // r8
  _QWORD *v7; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+28h] [rbp-10h]

  v9 = a1 + 32;
  v10 = *(_WORD *)(a1 + 96);
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v5 = (_QWORD *)EtwpRegistrationTable;
  v6 = 0;
  if ( EtwpRegistrationTable )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v9, v5) >= 0 )
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
        {
          v6 = 0;
          break;
        }
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&EtwpRegistrationTable, (unsigned __int64)v5, v6, a1);
  EtwpProvLockOwner = 0;
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
