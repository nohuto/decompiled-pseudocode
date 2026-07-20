/*
 * XREFs of SmpCreateProtectedPrefixes @ 0x14000B778
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 */

__int64 SmpCreateProtectedPrefixes()
{
  NTSTATUS v0; // ebx
  NTSTATUS v1; // eax
  unsigned __int8 v2; // cl
  void *FileAttributes; // [rsp+30h] [rbp-D8h]
  unsigned __int8 OldValue[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-58h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp-50h] BYREF
  PSID v10; // [rsp+C0h] [rbp-48h] BYREF
  PSID Sid; // [rsp+C8h] [rbp-40h] BYREF
  PSID v12; // [rsp+D0h] [rbp-38h] BYREF
  PSID v13; // [rsp+D8h] [rbp-30h] BYREF
  PSID v14; // [rsp+E0h] [rbp-28h] BYREF
  PSID v15; // [rsp+E8h] [rbp-20h] BYREF
  PSID v16; // [rsp+F0h] [rbp-18h] BYREF
  PSID v17; // [rsp+F8h] [rbp-10h] BYREF
  int v18; // [rsp+100h] [rbp-8h] BYREF
  const wchar_t *v19; // [rsp+108h] [rbp+0h]
  int v20; // [rsp+110h] [rbp+8h] BYREF
  const wchar_t *v21; // [rsp+118h] [rbp+10h]
  int v22; // [rsp+120h] [rbp+18h] BYREF
  const wchar_t *v23; // [rsp+128h] [rbp+20h]
  int v24; // [rsp+130h] [rbp+28h] BYREF
  const wchar_t *v25; // [rsp+138h] [rbp+30h]
  int v26; // [rsp+140h] [rbp+38h] BYREF
  const wchar_t *v27; // [rsp+148h] [rbp+40h]
  int v28; // [rsp+150h] [rbp+48h] BYREF
  const wchar_t *v29; // [rsp+158h] [rbp+50h]
  int v30; // [rsp+160h] [rbp+58h] BYREF
  const wchar_t *v31; // [rsp+168h] [rbp+60h]
  int v32; // [rsp+170h] [rbp+68h] BYREF
  const wchar_t *v33; // [rsp+178h] [rbp+70h]
  int v34; // [rsp+180h] [rbp+78h] BYREF
  const wchar_t *v35; // [rsp+188h] [rbp+80h]
  int v36; // [rsp+190h] [rbp+88h] BYREF
  const wchar_t *v37; // [rsp+198h] [rbp+90h]
  int v38; // [rsp+1A0h] [rbp+98h] BYREF
  const wchar_t *v39; // [rsp+1A8h] [rbp+A0h]
  _BYTE SecurityDescriptor[40]; // [rsp+1B0h] [rbp+A8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v42; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v43; // [rsp+1E8h] [rbp+E0h] BYREF
  _ACL Acl; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _ACL Sacl; // [rsp+608h] [rbp+500h] BYREF

  *(_WORD *)&v42.Value[4] = 256;
  Handle = 0LL;
  v35 = L"\\Device\\NamedPipe\\";
  FileHandle = 0LL;
  v37 = L"\\Device\\mailslot\\";
  *(_DWORD *)v42.Value = 0;
  v19 = L"\\Device\\NamedPipe\\ProtectedPrefix";
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v21 = L"\\Device\\mailslot\\ProtectedPrefix";
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v23 = L"\\Device\\NamedPipe\\ProtectedPrefix\\Administrators";
  v25 = L"\\Device\\mailslot\\ProtectedPrefix\\Administrators";
  v27 = L"\\Device\\NamedPipe\\ProtectedPrefix\\LocalService";
  v29 = L"\\Device\\mailslot\\ProtectedPrefix\\LocalService";
  v31 = L"\\Device\\NamedPipe\\ProtectedPrefix\\NetWorkService";
  v33 = L"\\Device\\mailslot\\ProtectedPrefix\\NetWorkService";
  v39 = L"\\Device\\NamedPipe\\Sessions";
  *(_DWORD *)v43.Value = 0;
  *(_WORD *)&v43.Value[4] = 4096;
  Sid = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  OldValue[0] = 1;
  v34 = 2490404;
  v36 = 2359330;
  v18 = 4456514;
  v20 = 4325440;
  v22 = 6422624;
  v24 = 6291550;
  v26 = 6160476;
  v28 = 6029402;
  v30 = 6422624;
  v32 = 6291550;
  v38 = 3538996;
  v0 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v0 >= 0 )
  {
    v0 = RtlCreateAcl(&Acl, 0x408u, 2u);
    if ( v0 >= 0 )
    {
      v0 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( v0 >= 0 )
      {
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v0 = NtCreateFile(&PipePrefix1, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 2u, 1u, 0LL, 0);
        if ( v0 >= 0 )
        {
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
          v0 = NtCreateFile(&MailPrefix1, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 2u, 1u, 0LL, 0);
          if ( v0 >= 0 )
          {
            v0 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &Sid);
            if ( v0 >= 0 )
            {
              v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, Sid);
              if ( v0 >= 0 )
              {
                v0 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v12);
                if ( v0 >= 0 )
                {
                  v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v12);
                  if ( v0 >= 0 )
                  {
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
                    v0 = NtCreateFile(
                           &PipePrefix2,
                           0x1F01FFu,
                           &ObjectAttributes,
                           &IoStatusBlock,
                           0LL,
                           0x80u,
                           3u,
                           2u,
                           1u,
                           0LL,
                           0);
                    if ( v0 >= 0 )
                    {
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
                      NtCreateFile(
                        &MailPrefix2,
                        0x1F01FFu,
                        &ObjectAttributes,
                        &IoStatusBlock,
                        0LL,
                        0x80u,
                        3u,
                        2u,
                        1u,
                        0LL,
                        0);
                      v0 = RtlCreateAcl(&Acl, 0x408u, 2u);
                      if ( v0 >= 0 )
                      {
                        v0 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &v13);
                        if ( v0 >= 0 )
                        {
                          v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v13);
                          if ( v0 >= 0 )
                          {
                            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
                            v0 = NtCreateFile(
                                   &PipePrefix3,
                                   0x1F01FFu,
                                   &ObjectAttributes,
                                   &IoStatusBlock,
                                   0LL,
                                   0x80u,
                                   3u,
                                   2u,
                                   1u,
                                   0LL,
                                   0);
                            if ( v0 >= 0 )
                            {
                              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
                              v0 = NtCreateFile(
                                     &MailPrefix3,
                                     0x1F01FFu,
                                     &ObjectAttributes,
                                     &IoStatusBlock,
                                     0LL,
                                     0x80u,
                                     3u,
                                     2u,
                                     1u,
                                     0LL,
                                     0);
                              if ( v0 >= 0 )
                              {
                                v0 = RtlCreateAcl(&Acl, 0x408u, 2u);
                                if ( v0 >= 0 )
                                {
                                  v0 = RtlAllocateAndInitializeSid(
                                         &IdentifierAuthority,
                                         1u,
                                         0x14u,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         &v14);
                                  if ( v0 >= 0 )
                                  {
                                    v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v14);
                                    if ( v0 >= 0 )
                                    {
                                      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v30;
                                      v0 = NtCreateFile(
                                             &PipePrefix4,
                                             0x1F01FFu,
                                             &ObjectAttributes,
                                             &IoStatusBlock,
                                             0LL,
                                             0x80u,
                                             3u,
                                             2u,
                                             1u,
                                             0LL,
                                             0);
                                      if ( v0 >= 0 )
                                      {
                                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
                                        v0 = NtCreateFile(
                                               &MailPrefix4,
                                               0x1F01FFu,
                                               &ObjectAttributes,
                                               &IoStatusBlock,
                                               0LL,
                                               0x80u,
                                               3u,
                                               2u,
                                               1u,
                                               0LL,
                                               0);
                                        if ( v0 >= 0 )
                                        {
                                          v0 = RtlCreateAcl(&Acl, 0x408u, 2u);
                                          if ( v0 >= 0 )
                                          {
                                            v0 = RtlAllocateAndInitializeSid(&v42, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v10);
                                            if ( v0 >= 0 )
                                            {
                                              v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v10);
                                              if ( v0 >= 0 )
                                              {
                                                v0 = RtlAllocateAndInitializeSid(
                                                       &IdentifierAuthority,
                                                       1u,
                                                       0xCu,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       &v17);
                                                if ( v0 >= 0 )
                                                {
                                                  v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v17);
                                                  if ( v0 >= 0 )
                                                  {
                                                    v0 = RtlAllocateAndInitializeSid(
                                                           &IdentifierAuthority,
                                                           1u,
                                                           7u,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           &v16);
                                                    if ( v0 >= 0 )
                                                    {
                                                      v0 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v16);
                                                      if ( v0 >= 0 )
                                                      {
                                                        v0 = RtlCreateAcl(&Sacl, 0x408u, 2u);
                                                        if ( v0 >= 0 )
                                                        {
                                                          v0 = RtlAllocateAndInitializeSid(
                                                                 &v43,
                                                                 1u,
                                                                 0x1000u,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 &v15);
                                                          if ( v0 >= 0 )
                                                          {
                                                            LODWORD(FileAttributes) = 1;
                                                            v0 = RtlAddMandatoryAce(
                                                                   &Sacl,
                                                                   2u,
                                                                   0,
                                                                   (ULONG)v15,
                                                                   0x11u,
                                                                   FileAttributes);
                                                            if ( v0 >= 0 )
                                                            {
                                                              v0 = RtlSetSaclSecurityDescriptor(
                                                                     SecurityDescriptor,
                                                                     1u,
                                                                     &Sacl,
                                                                     0);
                                                              if ( v0 >= 0 )
                                                              {
                                                                v1 = RtlAdjustPrivilege(8u, 1u, 0, OldValue);
                                                                v2 = OldValue[0];
                                                                ObjectAttributes.Length = 48;
                                                                if ( v1 < 0 )
                                                                  v2 = 1;
                                                                ObjectAttributes.RootDirectory = 0LL;
                                                                OldValue[0] = v2;
                                                                ObjectAttributes.Attributes = 64;
                                                                ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34;
                                                                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                                                                v0 = NtOpenFile(
                                                                       &FileHandle,
                                                                       0x11E0000u,
                                                                       &ObjectAttributes,
                                                                       &IoStatusBlock,
                                                                       3u,
                                                                       0x20u);
                                                                if ( v0 >= 0 )
                                                                {
                                                                  v0 = NtSetSecurityObject(
                                                                         FileHandle,
                                                                         0x1Cu,
                                                                         SecurityDescriptor);
                                                                  if ( v0 >= 0 )
                                                                  {
                                                                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v36;
                                                                    v0 = NtOpenFile(
                                                                           &Handle,
                                                                           0x11E0000u,
                                                                           &ObjectAttributes,
                                                                           &IoStatusBlock,
                                                                           3u,
                                                                           0x20u);
                                                                    if ( v0 >= 0 )
                                                                    {
                                                                      NtSetSecurityObject(
                                                                        Handle,
                                                                        0x1Cu,
                                                                        SecurityDescriptor);
                                                                      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v38;
                                                                      ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
                                                                      ObjectAttributes.Length = 48;
                                                                      ObjectAttributes.RootDirectory = 0LL;
                                                                      ObjectAttributes.Attributes = 64;
                                                                      ObjectAttributes.SecurityQualityOfService = 0LL;
                                                                      v0 = NtCreateFile(
                                                                             &SmpPipeSessionsPrefix,
                                                                             0x1F01FFu,
                                                                             &ObjectAttributes,
                                                                             &IoStatusBlock,
                                                                             0LL,
                                                                             0x80u,
                                                                             3u,
                                                                             2u,
                                                                             1u,
                                                                             0LL,
                                                                             0);
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( !OldValue[0] )
    RtlAdjustPrivilege(8u, 0, 0, OldValue);
  if ( v10 )
    RtlFreeSid(v10);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( v12 )
    RtlFreeSid(v12);
  if ( v13 )
    RtlFreeSid(v13);
  if ( v14 )
    RtlFreeSid(v14);
  if ( v15 )
    RtlFreeSid(v15);
  if ( v16 )
    RtlFreeSid(v16);
  if ( v17 )
    RtlFreeSid(v17);
  return (unsigned int)v0;
}
