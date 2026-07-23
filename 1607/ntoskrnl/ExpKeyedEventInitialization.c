/*
 * XREFs of ExpKeyedEventInitialization @ 0x1407A1B44
 * Callers:
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x14015B6B0 (ZwCreateKeyedEvent.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x14041F9D0 (RtlAddMandatoryAce.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 */

int ExpKeyedEventInitialization()
{
  int result; // eax
  ULONG v1; // edi
  ACL *PoolWithTag; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ACL *v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  ULONG v9; // edx
  NTSTATUS v10; // esi
  UCHAR Object; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  __int128 v13; // [rsp+30h] [rbp-D0h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v17[32]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE OutHandle; // [rsp+160h] [rbp+60h] BYREF
  PVOID v19; // [rsp+168h] [rbp+68h] BYREF

  memset((char *)v17 + 2, 0, 0x76uLL);
  *(_QWORD *)&v13 = 0x2000200020001LL;
  *((_QWORD *)&v13 + 1) = 0xF000300020000LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v17[2] = 0;
  v17[10] = 0;
  v17[11] = 0;
  BYTE2(v17[0]) |= 4u;
  LOWORD(v17[0]) = 120;
  v17[7] = 983043;
  *(_OWORD *)&v17[3] = v13;
  v17[9] = 1;
  result = ObCreateObjectType(&DestinationString, (__int64)v17, 0LL, (__int64)&ExpKeyedEventObjectType);
  if ( result < 0 )
    return result;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v1 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeWorldSid + 1))
     + 68;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x6C636144u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
  v5 = v3;
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, SeWorldSid), v5 = v3, Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid), v5 = v3, Acl < 0) )
  {
LABEL_20:
    ExFreePoolWithTag(v5, 0);
    return Acl;
  }
  Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeLocalSystemSid);
  if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
  {
LABEL_19:
    v5 = v3;
    goto LABEL_20;
  }
  v6 = 4 * *(unsigned __int8 *)(*(_QWORD *)&SeLowMandatorySid + 1LL) + 28;
  v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x6C636144u);
  v8 = v7;
  if ( !v7 )
  {
    Acl = -1073741670;
    goto LABEL_19;
  }
  v10 = RtlCreateAcl(v7, v6, 2u);
  if ( v10 < 0
    || (LODWORD(LabelSid) = 1, v10 = RtlAddMandatoryAce(v8, v9, 0, SeLowMandatorySid, Object, LabelSid), v10 < 0)
    || (v10 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0), v10 < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 16;
    v10 = ZwCreateKeyedEvent(&OutHandle, 0xF0003u, &ObjectAttributes, 0);
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
    if ( v10 >= 0 )
    {
      v10 = ObReferenceObjectByHandle(OutHandle, 0xF0003u, ExpKeyedEventObjectType, 0, &v19, 0LL);
      ExpCritSecOutOfMemoryEvent = (__int64)v19;
      ZwClose(OutHandle);
    }
  }
  return v10;
}
