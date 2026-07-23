/*
 * XREFs of RtlAddCompoundAce @ 0x1800D0480
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x1800201C0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180020360 (RtlValidAcl.c)
 *     RtlCopySid @ 0x18004E900 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddCompoundAce(
        PACL Acl,
        ULONG AceRevision,
        UCHAR AceType,
        ACCESS_MASK AccessMask,
        PSID ServerSid,
        PSID ClientSid)
{
  unsigned __int8 AclRevision; // r14
  NTSTATUS result; // eax
  _WORD *v12; // rdi
  unsigned __int16 v13; // dx
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(ServerSid) || !RtlValidSid(ClientSid) )
    return -1073741704;
  if ( Acl->AclRevision > 4u || AceRevision - 3 > 1 )
    return -1073741735;
  AclRevision = AceRevision;
  if ( Acl->AclRevision > (unsigned __int8)AceRevision )
    AclRevision = Acl->AclRevision;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = FirstFree;
  v13 = 4 * (*((unsigned __int8 *)ClientSid + 1) + *((unsigned __int8 *)ServerSid + 1) + 7);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v13;
  v12[4] = AceType;
  *v12 = 4;
  *((_DWORD *)v12 + 1) = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)ServerSid + 1) + 8, v12 + 6, ServerSid);
  RtlCopySid(4 * *((unsigned __int8 *)ClientSid + 1) + 8, &v12[2 * *((unsigned __int8 *)ServerSid + 1) + 10], ClientSid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
