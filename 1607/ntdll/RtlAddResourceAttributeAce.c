/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E15D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlCopySid @ 0x18006B620 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlUShortAdd @ 0x1800DFE74 (RtlUShortAdd.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E1BD0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800E281C (RtlpValidAttributeInfo.c)
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
  unsigned __int16 v16; // cx
  PACL v17; // rcx
  unsigned int i; // edx
  unsigned __int16 v19; // dx
  char *v20; // r12
  char v21; // al
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG Size_4; // [rsp+30h] [rbp-D8h]
  int v26; // [rsp+34h] [rbp-D4h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v29; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v28 = 0;
  v9 = 0LL;
  v29 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v12 = *(_DWORD *)((char *)Sid + 2) - v28;
  if ( !v12 )
    v12 = *((unsigned __int16 *)Sid + 3) - v29;
  if ( v12 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    AclRevision = (unsigned __int8)AceRevision;
    if ( Acl->AclRevision > (unsigned __int8)AceRevision )
      AclRevision = Acl->AclRevision;
    v26 = AclRevision;
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
          v16 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
          LOWORD(v23) = v16;
          if ( Size > 0xFFFF || (int)RtlUShortAdd(v16, Size, &v23) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            *ReturnLength = 8;
            v17 = Acl + 1;
            for ( i = 0; i < Acl->AceCount; v17 = (PACL)((char *)v17 + v17->AclSize) )
            {
              ++i;
              *ReturnLength += v17->AclSize;
            }
            v19 = v23;
            *ReturnLength += (unsigned __int16)v23;
            v20 = (char *)FirstFree;
            if ( FirstFree && (char *)FirstFree + v19 <= (char *)Acl + Acl->AclSize )
            {
              v21 = Size_4;
              *((_WORD *)FirstFree + 1) = v19;
              v20[1] = v21;
              *v20 = 18;
              *((_DWORD *)v20 + 1) = 0;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v20 + 8, Sid);
              memmove(&v20[4 * *((unsigned __int8 *)Sid + 1) + 16], v9, v15);
              ++Acl->AceCount;
              Acl->AclRevision = v26;
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
