/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180059804
 * Callers:
 *     EtwNotificationUnregister @ 0x1800596F0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001C030 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode((PRTL_RB_TREE)&EtwpRegistrationTable, Node);
  memset(Node, 171, sizeof(_RTL_BALANCED_NODE));
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
