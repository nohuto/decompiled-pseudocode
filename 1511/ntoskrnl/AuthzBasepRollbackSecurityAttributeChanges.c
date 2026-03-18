/*
 * XREFs of AuthzBasepRollbackSecurityAttributeChanges @ 0x14021A0B8
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000694C (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1400015F0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400016C0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14021A038 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

bool __fastcall AuthzBasepRollbackSecurityAttributeChanges(_DWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *v7; // r14
  _QWORD *v8; // rsi

  v2 = 1;
  AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)a2, 0, 1);
  v6 = *(_DWORD *)(v4 + 56);
  if ( (v6 & 4) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      AuthzBasepFreeSecurityAttributeValues(v4, 0, v5);
      return v2;
    }
    *(_DWORD *)(v4 + 56) = v6 & 0xFFFFFFFB;
    AuthzBasepFreeSecurityAttributeValues(v4, 1, v5);
  }
  v7 = (_QWORD *)(a2 + 96);
  while ( (_QWORD *)*v7 != v7 )
  {
    v8 = (_QWORD *)*v7;
    AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a2, (__int64 *)(*v7 - 16LL), 0);
    if ( (v8[2] & 4) != 0 )
    {
      --*(_DWORD *)(a2 + 64);
      *((_DWORD *)v8 + 4) &= ~4u;
    }
    if ( (v8[2] & 1) == 0 )
      ExFreePoolWithTag(v8 - 2, 0);
  }
  return (*(_BYTE *)(a2 + 56) & 1) == 0;
}
