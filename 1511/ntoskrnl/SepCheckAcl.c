/*
 * XREFs of SepCheckAcl @ 0x14043562C
 * Callers:
 *     SeCaptureAcl @ 0x1403C2594 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SepCheckAcl(PACL Acl, unsigned int a2)
{
  if ( a2 >= 8 && a2 == Acl->AclSize )
    return RtlValidAcl(Acl);
  else
    return 0;
}
