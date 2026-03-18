/*
 * XREFs of RtlAddMandatoryAce @ 0x1404C90D0
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140413138 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14041382C (IopCreateSecurityDescriptorPerType.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlFirstFreeAce @ 0x1404C9220 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1404C9610 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlAddMandatoryAce(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ULONG MandatoryFlags,
        UCHAR AceType,
        PSID LabelSid)
{
  __int64 v6; // rdi
  int v9; // eax
  UCHAR AclRevision; // si
  PACE v11; // r9
  WORD v12; // dx
  NTSTATUS result; // eax
  PACE Ace; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(Ace) = 0;
  v6 = *(_QWORD *)&MandatoryFlags;
  WORD2(Ace) = 4096;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(*(PSID *)&MandatoryFlags) )
    return -1073741704;
  v9 = *(_DWORD *)(v6 + 2) - (_DWORD)Ace;
  if ( !v9 )
    v9 = *(unsigned __int16 *)(v6 + 6) - WORD2(Ace);
  if ( v9 )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u )
    return -1073741735;
  if ( AclRevision <= 2u )
    AclRevision = 2;
  if ( (Flags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  if ( ((unsigned int)LabelSid & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return -1073741705;
  v11 = Ace;
  v12 = 4 * (*(unsigned __int8 *)(v6 + 1) + 4);
  if ( !Ace || (char *)Ace + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  Ace->Header.AceSize = v12;
  v11->Header.AceFlags = Flags;
  v11->Header.AceType = 17;
  v11->AccessMask = (unsigned int)LabelSid;
  memmove(&v11[1], (const void *)v6, 4 * (unsigned int)*(unsigned __int8 *)(v6 + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
