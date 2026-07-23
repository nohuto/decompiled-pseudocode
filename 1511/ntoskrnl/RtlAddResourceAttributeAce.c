/*
 * XREFs of RtlAddResourceAttributeAce @ 0x140644DCC
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFirstFreeAce @ 0x1403BDDB8 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140435170 (RtlValidAcl.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140645274 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x14064573C (RtlpValidAttributeInfo.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  _BYTE *v9; // rdi
  NTSTATUS v11; // ebx
  int v12; // ecx
  UCHAR AclRevision; // cl
  __int64 v14; // rdx
  _BYTE *PoolWithQuotaTag; // rax
  size_t v16; // r13
  __int64 v17; // rax
  WORD v18; // dx
  PACL v19; // rcx
  unsigned int i; // r8d
  PACE v21; // r12
  BYTE v22; // al
  unsigned int NumberOfBytes; // [rsp+28h] [rbp-E0h] BYREF
  ULONG NumberOfBytes_4; // [rsp+2Ch] [rbp-DCh]
  PACE Ace; // [rsp+30h] [rbp-D8h] BYREF
  int v27; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v28; // [rsp+3Ch] [rbp-CCh]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = AceFlags;
  Ace = 0LL;
  v27 = 0;
  v9 = 0LL;
  memset(Src, 0, sizeof(Src));
  v28 = 256;
  NumberOfBytes = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v12 = *(_DWORD *)((char *)Sid + 2) - v27;
  if ( !v12 )
    v12 = *((unsigned __int16 *)Sid + 3) - v28;
  if ( v12 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    AclRevision = Acl->AclRevision;
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    v14 = (unsigned __int8)AceRevision;
    if ( AclRevision > (unsigned __int8)AceRevision )
      v14 = AclRevision;
    v27 = v14;
    if ( (NumberOfBytes_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, v14, 0LL)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &NumberOfBytes);
      if ( v11 == -1073741789 )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
        v9 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(
                AttributeInfo->Attribute.pAttributeV1,
                PoolWithQuotaTag,
                &NumberOfBytes);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &Ace) )
        {
          v16 = NumberOfBytes;
          if ( NumberOfBytes > 0xFFFF
            || (v17 = (unsigned __int16)(4 * (*((unsigned __int8 *)Sid + 1) + 4)),
                v18 = v17 + NumberOfBytes,
                (unsigned __int16)(v17 + NumberOfBytes) < (unsigned __int16)v17) )
          {
            v11 = -1073741675;
          }
          else
          {
            *ReturnLength = 8;
            v19 = Acl + 1;
            for ( i = 0; i < Acl->AceCount; v19 = (PACL)((char *)v19 + v19->AclSize) )
            {
              ++i;
              *ReturnLength += v19->AclSize;
            }
            v21 = Ace;
            *ReturnLength += v18;
            if ( v21 && (char *)v21 + v18 <= (char *)Acl + Acl->AclSize )
            {
              v22 = NumberOfBytes_4;
              v21->Header.AceSize = v18;
              v21->Header.AceFlags = v22;
              v21->Header.AceType = 18;
              v21->AccessMask = 0;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, &v21[1], Sid);
              memmove((char *)&v21[2] + 4 * *((unsigned __int8 *)Sid + 1), v9, v16);
              ++Acl->AceCount;
              Acl->AclRevision = v27;
            }
            else
            {
              v11 = -1073741671;
              *ReturnLength = (*ReturnLength + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return -1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
