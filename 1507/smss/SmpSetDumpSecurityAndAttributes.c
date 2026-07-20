/*
 * XREFs of SmpSetDumpSecurityAndAttributes @ 0x140011294
 * Callers:
 *     SmpCopyFile @ 0x140010470 (SmpCopyFile.c)
 *     SmpSavePageFile @ 0x1400111B4 (SmpSavePageFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpSetDumpSecurityAndAttributes(HANDLE FileHandle)
{
  NTSTATUS v2; // ebx
  PSID Owner; // [rsp+68h] [rbp-A0h] BYREF
  PSID Sid; // [rsp+70h] [rbp-98h] BYREF
  PSID BaseAddress; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-88h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+90h] [rbp-78h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v9; // [rsp+B8h] [rbp-50h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE FileInformation[32]; // [rsp+C8h] [rbp-40h] BYREF
  int v12; // [rsp+E8h] [rbp-20h]
  struct _ACL Acl; // [rsp+F8h] [rbp-10h] BYREF

  *(_WORD *)&v9.Value[4] = 1280;
  *(_DWORD *)v9.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  BaseAddress = 0LL;
  Sid = 0LL;
  Owner = 0LL;
  v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &BaseAddress);
  if ( v2 >= 0 )
  {
    v2 = RtlAllocateAndInitializeSid(&v9, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Sid);
    if ( v2 >= 0 )
    {
      v2 = RtlAllocateAndInitializeSid(&v9, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &Owner);
      if ( v2 >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        RtlCreateAcl(&Acl, 0x400u, 2u);
        RtlAddAccessAllowedAce(&Acl, 2u, 0x100D0000u, Owner);
        RtlAddAccessAllowedAce(&Acl, 2u, 0x100D0000u, Sid);
        RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
        v2 = NtSetSecurityObject(FileHandle, 4u, SecurityDescriptor);
        if ( v2 >= 0 )
        {
          v2 = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
          if ( v2 >= 0 )
          {
            v12 &= 0xFFFFFFF9;
            v2 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
          }
        }
      }
    }
  }
  if ( BaseAddress )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( Owner )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Owner);
  return (unsigned int)v2;
}
