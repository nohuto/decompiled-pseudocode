/*
 * XREFs of SeQueryObjectMandatoryLabel @ 0x14064DC70
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     RtlFindAceByType @ 0x14009DDA0 (RtlFindAceByType.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall SeQueryObjectMandatoryLabel(__int64 a1, ULONG *a2)
{
  ULONG v3; // ebx
  __int64 result; // rax
  PSECURITY_DESCRIPTOR v5; // rdi
  __int16 v6; // ax
  PSID v7; // rsi
  __int64 v8; // rax
  ACL *v9; // rcx
  char *AceByType; // rax
  PUCHAR v11; // rax
  BOOLEAN v12; // dl
  BOOLEAN MemoryAllocated; // [rsp+48h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a2 = 0;
  result = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, 0);
  if ( (int)result < 0 )
    return result;
  v5 = SecurityDescriptor;
  v6 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v6 & 0x10) == 0 )
    goto LABEL_3;
  if ( v6 >= 0 )
  {
    v9 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
    goto LABEL_8;
  }
  v8 = *((unsigned int *)SecurityDescriptor + 3);
  if ( (_DWORD)v8 )
  {
    v9 = (ACL *)((char *)SecurityDescriptor + v8);
LABEL_8:
    v7 = SepDefaultMandatorySid;
    if ( v9 )
    {
      AceByType = (char *)RtlFindAceByType(v9, 0x11u, 0LL);
      if ( AceByType )
      {
        if ( (AceByType[1] & 8) == 0 )
          v7 = AceByType + 8;
      }
    }
    goto LABEL_12;
  }
LABEL_3:
  v7 = SepDefaultMandatorySid;
LABEL_12:
  v11 = RtlSubAuthorityCountSid(v7);
  if ( *v11 )
    v3 = *RtlSubAuthoritySid(v7, (unsigned int)*v11 - 1);
  v12 = MemoryAllocated;
  *a2 = v3;
  ObReleaseObjectSecurity(v5, v12);
  return 0LL;
}
