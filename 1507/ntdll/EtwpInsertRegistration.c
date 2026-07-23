/*
 * XREFs of EtwpInsertRegistration @ 0x180038DB8
 * Callers:
 *     EtwNotificationRegister @ 0x180038BC0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x180038E58 (EtwpRegistrationCompare.c)
 */

void __fastcall EtwpInsertRegistration(PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v3; // r8
  _RTL_BALANCED_NODE *v4; // rax
  _RTL_BALANCED_NODE **v5; // [rsp+20h] [rbp-18h] BYREF
  __int16 v6; // [rsp+28h] [rbp-10h]

  v5 = &Node[1].Children[1];
  v6 = (__int16)Node[4].Children[0];
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = EtwpRegistrationTable.Root;
  v3 = 0;
  if ( EtwpRegistrationTable.Root )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v5, Root) >= 0 )
      {
        v4 = Root->Children[1];
        if ( !v4 )
        {
          v3 = 1;
          break;
        }
      }
      else
      {
        v4 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          v3 = 0;
          break;
        }
      }
      Root = v4;
    }
  }
  RtlRbInsertNodeEx(&EtwpRegistrationTable, Root, v3, Node);
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
