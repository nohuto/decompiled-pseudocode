/*
 * XREFs of SepInitializationPhase1 @ 0x1405931F0
 * Callers:
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x1407BC410 (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitString @ 0x14011A9A4 (RtlInitString.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x14017F8F0 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x140180350 (ZwCreateDirectoryObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     SepInitializeCodeIntegrity @ 0x140594E78 (SepInitializeCodeIntegrity.c)
 *     SepInitializeAuthorizationCallbacks @ 0x1407BC520 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407BCF14 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407BD148 (SeMakeAnonymousLogonToken.c)
 */

char SepInitializationPhase1()
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *PoolWithTag; // rax
  ACL *v2; // rbx
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-79h] BYREF
  HANDLE EventHandle; // [rsp+48h] [rbp-69h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-59h] BYREF
  STRING DestinationString; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v9[6]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+C8h] [rbp+17h] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  EventHandle = 0LL;
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
    SeAnonymousLogonToken = (PVOID)SeMakeAnonymousLogonToken();
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
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 80;
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
      memset(v9, 0, sizeof(v9));
      WORD1(v9[0]) |= 1u;
      v9[1] = SeInitServerSilo;
      LOWORD(v9[0]) = 1;
      v9[2] = SeShutdownServerSilo;
      PsRegisterMonitorServerSilo(0LL, L"NTOS_SE");
      PsStartMonitorServerSilo(SeSiloMonitor);
    }
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
