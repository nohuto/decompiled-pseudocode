/*
 * XREFs of RtlAddMandatoryAce @ 0x1404342D0
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1403BF560 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1403C07F4 (IopCreateSecurityDescriptorPerType.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     ExpKeyedEventInitialization @ 0x14075AE80 (ExpKeyedEventInitialization.c)
 *     SepInitSystemDacls @ 0x14075E344 (SepInitSystemDacls.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlValidAcl @ 0x140435170 (RtlValidAcl.c)
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
  unsigned __int8 *v6; // rbx
  UCHAR v7; // r14
  int v9; // ecx
  UCHAR AclRevision; // si
  PACL v11; // rdx
  PACL v12; // rcx
  unsigned int v13; // r9d
  ACL *v14; // r8
  USHORT v15; // dx
  NTSTATUS result; // eax

  v6 = *(unsigned __int8 **)&MandatoryFlags;
  v7 = Flags;
  if ( !Acl )
    return -1073741705;
  if ( *(_QWORD *)&MandatoryFlags <= MmUserProbeAddress
    || !*(_QWORD *)&MandatoryFlags
    || (**(_BYTE **)&MandatoryFlags & 0xF) != 1
    || *(_BYTE *)(*(_QWORD *)&MandatoryFlags + 1LL) > 0xFu )
  {
    return -1073741704;
  }
  v9 = *(_DWORD *)(*(_QWORD *)&MandatoryFlags + 2LL);
  if ( !v9 )
    v9 = *(unsigned __int16 *)(*(_QWORD *)&MandatoryFlags + 6LL) - 4096;
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
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v11 = Acl + 1;
  v12 = 0LL;
  v13 = 0;
  if ( Acl->AceCount )
  {
    while ( v11 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v13;
      v11 = (PACL)((char *)v11 + v11->AclSize);
      if ( v13 >= Acl->AceCount )
        goto LABEL_16;
    }
    return -1073741705;
  }
LABEL_16:
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v11 <= v14 )
    v12 = v11;
  v15 = 4 * (v6[1] + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return -1073741671;
  v12->AclSize = v15;
  v12->Sbz1 = v7;
  v12->AclRevision = 17;
  *(_DWORD *)&v12->AceCount = (_DWORD)LabelSid;
  memmove(&v12[1], v6, 4 * (unsigned int)v6[1] + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
