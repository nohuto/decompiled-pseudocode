/*
 * XREFs of SepDeleteClaimAttributes @ 0x140695A00
 * Callers:
 *     SepSetTokenClaims @ 0x14047959C (SepSetTokenClaims.c)
 *     SepTokenDeleteMethod @ 0x1404A25E0 (SepTokenDeleteMethod.c)
 *     SepDeleteLogonSessionClaims @ 0x1404E53E4 (SepDeleteLogonSessionClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteClaimAttributes(PVOID P)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v2 )
    {
      AuthzBasepFreeSecurityAttributesList(v2);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v3 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v3 )
    {
      AuthzBasepFreeSecurityAttributesList(v3);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
