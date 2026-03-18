/*
 * XREFs of SepCheckAcl @ 0x14047ACF4
 * Callers:
 *     SeCaptureSecurityDescriptor @ 0x140420EC0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureAcl @ 0x14047ABEC (SeCaptureAcl.c)
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
