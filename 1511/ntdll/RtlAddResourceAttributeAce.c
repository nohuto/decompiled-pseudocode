/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800D8B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlCopySid @ 0x180062220 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800D9130 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800D9D7C (RtlpValidAttributeInfo.c)
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
  _BYTE *v9; // rsi
  NTSTATUS v11; // ebx
  int v12; // ecx
  int AclRevision; // ecx
  _BYTE *Heap; // rax
  size_t v15; // r13
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  PACL v18; // rcx
  unsigned int i; // r8d
  _WORD *v20; // r12
  char v21; // al
  unsigned int Size; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size_4; // [rsp+2Ch] [rbp-DCh]
  __int64 v25; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v28; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v27 = 0;
  v9 = 0LL;
  memset(Src, 0, sizeof(Src));
  v28 = 256;
  Size = 256;
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
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    AclRevision = (unsigned __int8)AceRevision;
    if ( Acl->AclRevision > (unsigned __int8)AceRevision )
      AclRevision = Acl->AclRevision;
    LODWORD(v25) = AclRevision;
    if ( (Size_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, 0LL)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
      if ( v11 == -1073741789 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
        v9 = Heap;
        if ( !Heap )
          return -1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Heap, &Size);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v15 = Size;
          if ( Size > 0xFFFF
            || (v16 = (unsigned __int16)(4 * (*((unsigned __int8 *)Sid + 1) + 4)),
                v17 = v16 + Size,
                (unsigned __int16)(v16 + Size) < (unsigned __int16)v16) )
          {
            v11 = -1073741675;
          }
          else
          {
            *ReturnLength = 8;
            v18 = Acl + 1;
            for ( i = 0; i < Acl->AceCount; v18 = (PACL)((char *)v18 + v18->AclSize) )
            {
              ++i;
              *ReturnLength += v18->AclSize;
            }
            v20 = FirstFree;
            *ReturnLength += v17;
            if ( v20 && (char *)v20 + v17 <= (char *)Acl + Acl->AclSize )
            {
              v21 = Size_4;
              v20[1] = v17;
              *((_BYTE *)v20 + 1) = v21;
              *(_BYTE *)v20 = 18;
              *((_DWORD *)v20 + 1) = 0;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v20 + 4, Sid);
              memmove(&v20[2 * *((unsigned __int8 *)Sid + 1) + 8], v9, v15);
              ++Acl->AceCount;
              Acl->AclRevision = v25;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v11;
}
