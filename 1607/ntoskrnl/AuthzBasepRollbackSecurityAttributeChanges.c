/*
 * XREFs of AuthzBasepRollbackSecurityAttributeChanges @ 0x140234198
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000EC10 (AuthzBasepFinaliseSecurityAttributesList.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400014CC (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140234118 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

bool __fastcall AuthzBasepRollbackSecurityAttributeChanges(_DWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // r14
  _QWORD *v7; // rsi

  v2 = 1;
  AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)a2, 0, 1);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      AuthzBasepFreeSecurityAttributeValues(v4, 0);
      return v2;
    }
    *(_DWORD *)(v4 + 56) = v5 & 0xFFFFFFFB;
    AuthzBasepFreeSecurityAttributeValues(v4, 1);
  }
  v6 = (_QWORD *)(a2 + 96);
  while ( (_QWORD *)*v6 != v6 )
  {
    v7 = (_QWORD *)*v6;
    AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a2, (__int64 *)(*v6 - 16LL), 0);
    if ( (v7[2] & 4) != 0 )
    {
      --*(_DWORD *)(a2 + 64);
      *((_DWORD *)v7 + 4) &= ~4u;
    }
    if ( (v7[2] & 1) == 0 )
      ExFreePoolWithTag(v7 - 2, 0);
  }
  return (*(_BYTE *)(a2 + 56) & 1) == 0;
}
