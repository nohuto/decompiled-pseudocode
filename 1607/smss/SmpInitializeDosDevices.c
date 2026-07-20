/*
 * XREFs of SmpInitializeDosDevices @ 0x1400091AC
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 */

NTSTATUS SmpInitializeDosDevices()
{
  __int16 v0; // r14
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *SymbolicLinkHandle; // [rsp+90h] [rbp+30h] BYREF

  v5 = 524294;
  ObjectAttributes.Length = 48;
  v6 = L"\\??";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v5;
  ObjectAttributes.Attributes = 208;
  v0 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenDirectoryObject(&SmpDosDevicesObjectDirectory, 0xF000Fu, &ObjectAttributes);
  v2 = result;
  if ( result >= 0 )
  {
    v3 = SmpDosDevicesList;
    while ( (__int64 *)v3 != &SmpDosDevicesList )
    {
      v4 = v3;
      ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v3 + 16);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 208;
      ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( SmpPrimarySecurityDescriptor )
      {
        v0 = *((_WORD *)SmpPrimarySecurityDescriptor + 1) & 8;
        *((_WORD *)SmpPrimarySecurityDescriptor + 1) |= 8u;
      }
      v2 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, (PUNICODE_STRING)(v3 + 32));
      if ( v2 == 0x40000000 )
      {
        NtMakeTemporaryObject(SymbolicLinkHandle);
        NtClose(SymbolicLinkHandle);
        if ( *(_WORD *)(v3 + 32) )
        {
          ObjectAttributes.Attributes &= ~0x80u;
          v2 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, (PUNICODE_STRING)(v3 + 32));
        }
        else
        {
          v2 = 0;
        }
      }
      if ( ObjectAttributes.SecurityDescriptor )
        *((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^= (*((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^ v0) & 8;
      if ( v2 < 0 )
        break;
      NtClose(SymbolicLinkHandle);
      v3 = *(_QWORD *)v3;
      SmpFreeSavedRegistryEntry(v4);
    }
    return v2;
  }
  return result;
}
