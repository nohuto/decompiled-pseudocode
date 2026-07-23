/*
 * XREFs of EtwpInsertRegistration @ 0x18002A85C
 * Callers:
 *     EtwNotificationRegister @ 0x18002A400 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC10 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18002A8FC (EtwpRegistrationCompare.c)
 */

void __fastcall EtwpInsertRegistration(PRTL_BALANCED_NODE Node)
{
  PRTL_BALANCED_NODE v2; // rdi
  BOOLEAN v3; // bl
  _RTL_BALANCED_NODE *v4; // rax
  _RTL_BALANCED_NODE **v5; // [rsp+20h] [rbp-18h] BYREF
  __int16 v6; // [rsp+28h] [rbp-10h]

  v5 = &Node[1].Children[1];
  v6 = (__int16)Node[4].Children[0];
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = EtwpRegistrationTable;
  v3 = 0;
  if ( EtwpRegistrationTable )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v5, v2) >= 0 )
      {
        v4 = v2->Children[1];
        if ( !v4 )
        {
          v3 = 1;
          break;
        }
      }
      else
      {
        v4 = v2->Children[0];
        if ( !v2->Children[0] )
          break;
      }
      v2 = v4;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)&EtwpRegistrationTable, v2, v3, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
