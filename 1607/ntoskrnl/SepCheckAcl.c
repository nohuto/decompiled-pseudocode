/*
 * XREFs of SepCheckAcl @ 0x140479BC4
 * Callers:
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureAcl @ 0x140479ABC (SeCaptureAcl.c)
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
