/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x140219C8C
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140219AD8 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     RtlFindAceByType @ 0x140012620 (RtlFindAceByType.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401465C0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeQuerySecurityAttributesToken @ 0x14040DDE0 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(__int64 a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  int v6; // esi
  _BYTE *PoolWithTag; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *SecurityAttributesList; // rax
  _DWORD *v12; // r14
  __int16 v13; // ax
  ACL *v14; // rcx
  __int64 v15; // rax
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v17; // r15
  unsigned int v18; // ecx
  int v19; // eax
  size_t v21; // [rsp+20h] [rbp-E0h]
  size_t v22; // [rsp+20h] [rbp-E0h]
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE *v26; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[512]; // [rsp+90h] [rbp-70h] BYREF

  v26 = a3;
  SecurityAttributesToken = 0;
  v25 = 2;
  NumberOfBytes = 0LL;
  v6 = 0;
  *a3 = 0;
  v24 = 0;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !(unsigned __int8)SeSecurityAttributePresent(a1, &DestinationString) )
    return (unsigned int)SecurityAttributesToken;
  LODWORD(v21) = 512;
  PoolWithTag = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              a1,
                              (int)&DestinationString,
                              1,
                              P,
                              v21,
                              (__int64)&NumberOfBytes);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v10 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20206553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    LODWORD(v22) = v10;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                a1,
                                (int)&DestinationString,
                                1,
                                PoolWithTag,
                                v22,
                                (__int64)&NumberOfBytes);
  }
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  if ( !PoolWithTag )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v9, v8);
  v12 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_25;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(
                              (__int64)SecurityAttributesList,
                              &v25,
                              (__int64)PoolWithTag);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    v13 = *(_WORD *)(a2 + 2);
    if ( (v13 & 4) == 0 )
    {
LABEL_13:
      v14 = 0LL;
      goto LABEL_18;
    }
    if ( v13 >= 0 )
    {
      v14 = *(ACL **)(a2 + 32);
    }
    else
    {
      v15 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v15 )
        goto LABEL_13;
      v14 = (ACL *)(v15 + a2);
    }
LABEL_18:
    AceByType = (unsigned __int8 *)RtlFindAceByType(v14, 9u, (PULONG)&NumberOfBytes + 1);
    v17 = AceByType;
    if ( AceByType )
    {
      v18 = 4 * AceByType[9] + 8;
      v19 = AuthzBasepEvaluateAceCondition(
              a1,
              (__int64)v12,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &AceByType[v18 + 8],
              *((unsigned __int16 *)AceByType + 1) - v18 - 8,
              0,
              0,
              &v24);
      v6 = v24;
      SecurityAttributesToken = v19;
      if ( v19 < 0 )
        break;
      if ( v24 == 1 )
        goto LABEL_23;
    }
    ++HIDWORD(NumberOfBytes);
  }
  while ( v17 );
  if ( v6 != 1 )
    goto LABEL_24;
LABEL_23:
  *v26 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v12);
LABEL_25:
  if ( PoolWithTag && PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SecurityAttributesToken;
}
