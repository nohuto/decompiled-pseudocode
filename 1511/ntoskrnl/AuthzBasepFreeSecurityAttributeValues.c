/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x1400015F0
 * Callers:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1400015A8 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140005F10 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14009E680 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14021A0B8 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400016C0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  void *v6; // rbx
  _DWORD *v7; // rbp

  if ( !a2 )
  {
    v5 = (_QWORD *)(a1 + 72);
    while ( (_QWORD *)*v5 != v5 )
    {
      v6 = (void *)*v5;
      LOBYTE(a3) = 1;
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, *v5, a3);
      ExFreePoolWithTag(v6, 0);
    }
  }
  v4 = *(_QWORD **)(a1 + 96);
  while ( v4 != (_QWORD *)(a1 + 96) )
  {
    v7 = v4 - 2;
    v4 = (_QWORD *)*v4;
    if ( (v7[8] & 1) == 0 )
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v7, 0LL);
      ExFreePoolWithTag(v7, 0);
    }
  }
}
