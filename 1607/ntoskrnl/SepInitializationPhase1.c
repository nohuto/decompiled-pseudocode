/*
 * XREFs of SepInitializationPhase1 @ 0x140553520
 * Callers:
 *     SeInitServerSilo @ 0x14068CBD8 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x1407A39CC (SeInitSystem.c)
 * Callees:
 *     RtlInitString @ 0x1400A7D18 (RtlInitString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     SepInitProcessAuditSd @ 0x14013CB7C (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x14015AAF0 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x14015B570 (ZwCreateDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     SepInitializeCodeIntegrity @ 0x140553E34 (SepInitializeCodeIntegrity.c)
 *     SepInitializeAuthorizationCallbacks @ 0x1407A25A8 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407A3058 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407A328C (SeMakeAnonymousLogonToken.c)
 */

char SepInitializationPhase1()
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *PoolWithTag; // rax
  ACL *v2; // rbx
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-39h] BYREF
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-29h] BYREF
  HANDLE EventHandle; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+98h] [rbp+27h] BYREF

  EventHandle = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObject(
      (PVOID)(KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x20206553u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, 0x100u, 2u);
    RtlAddAccessAllowedAce(v2, 2u, 0xF000Fu, SeLocalSystemSid);
    RtlAddAccessAllowedAce(v2, 2u, 0x20003u, SeAliasAdminsSid);
    RtlAddAccessAllowedAce(v2, 2u, 2u, SeWorldSid);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    RtlFreeAnsiString(&UnicodeString);
    ExFreePoolWithTag(v2, 0);
    RtlInitString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
    RtlFreeAnsiString(&UnicodeString);
    ZwClose(DirectoryHandle);
    ZwClose(EventHandle);
    if ( !IsCurrentThreadInServerSilo )
    {
      SepInitProcessAuditSd();
      SepInitializeCodeIntegrity();
      SepInitializeAuthorizationCallbacks();
    }
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
