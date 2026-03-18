/*
 * XREFs of SepCheckAcl @ 0x14046BECC
 * Callers:
 *     SeCaptureAcl @ 0x14046BDC8 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
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
