/*
 * XREFs of RtlpSysVolTakeOwnership @ 0x140688E7C
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x14052A1F8 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     NtOpenProcessTokenEx @ 0x14041F100 (NtOpenProcessTokenEx.c)
 *     NtOpenFile @ 0x14045A760 (NtOpenFile.c)
 *     NtAdjustPrivilegesToken @ 0x14045E9C4 (NtAdjustPrivilegesToken.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 */

int __fastcall RtlpSysVolTakeOwnership(UNICODE_STRING *a1)
{
  int result; // eax
  HANDLE v3; // rcx
  HANDLE v4; // rdi
  HANDLE TokenHandle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-49h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp+Fh] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+A8h] [rbp+1Fh] BYREF
  __int16 Owner; // [rsp+B8h] [rbp+2Fh] BYREF
  int v12; // [rsp+BAh] [rbp+31h]
  __int16 v13; // [rsp+BEh] [rbp+35h]
  int v14; // [rsp+C0h] [rbp+37h]
  int v15; // [rsp+C4h] [rbp+3Bh]

  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    FileHandle = (HANDLE)9;
    NewState.Privileges[0].Luid = (LUID)9LL;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    if ( NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(&FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        v12 = 0;
        v13 = 1280;
        Owner = 513;
        v14 = 32;
        v15 = 544;
        if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 0) >= 0 )
        {
          v4 = FileHandle;
          NtSetSecurityObject(FileHandle, 1u, SecurityDescriptor);
          v3 = v4;
        }
        else
        {
          v3 = FileHandle;
        }
        NtClose(v3);
      }
    }
    return NtClose(TokenHandle);
  }
  return result;
}
