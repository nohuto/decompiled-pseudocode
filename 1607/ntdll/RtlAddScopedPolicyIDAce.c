/*
 * XREFs of RtlAddScopedPolicyIDAce @ 0x1800E1920
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x18006B620 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAddScopedPolicyIDAce(PACL Acl, ULONG AceRevision, ULONG AceFlags, ULONG AccessMask, PSID Sid)
{
  NTSTATUS result; // eax
  int v10; // ecx
  unsigned __int8 AclRevision; // bp
  _WORD *v12; // r9
  unsigned __int16 v13; // dx
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h]
  unsigned __int16 v16; // [rsp+2Ch] [rbp-3Ch]

  FirstFree = 0LL;
  v15 = 0;
  v16 = 4352;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2) - v15;
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - v16;
  if ( v10 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = AceRevision;
  if ( Acl->AclRevision > (unsigned __int8)AceRevision )
    AclRevision = Acl->AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || AccessMask )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = FirstFree;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_DWORD *)FirstFree + 1) = 0;
  v12[1] = v13;
  *((_BYTE *)v12 + 1) = AceFlags;
  *(_BYTE *)v12 = 19;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v12 + 4, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
