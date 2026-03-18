/*
 * XREFs of ObpInitializeRootNamespace @ 0x140579974
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x1406E6004 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     RtlLengthSid @ 0x14000C2AC (RtlLengthSid.c)
 *     PsIsHostSilo @ 0x140079F68 (PsIsHostSilo.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14015A780 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x14015B000 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14015B020 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x14015B320 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x14015CD60 (ZwSetInformationSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140413E70 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140413ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14048D14C (RtlAddAccessAllowedAce.c)
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 */

NTSTATUS __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, __int64 a3)
{
  bool IsHostSilo; // r14
  NTSTATUS result; // eax
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ACL *PoolWithTag; // rax
  ACL *v12; // rdi
  int Acl; // ebx
  bool v14; // sf
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  PVOID Object; // [rsp+70h] [rbp+7h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+78h] [rbp+Fh] BYREF
  int v20; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  DirectoryHandle = 0LL;
  IsHostSilo = PsIsHostSilo(a1);
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v8 = RtlLengthSid(SeWorldSid);
  v9 = RtlLengthSid(SeAliasAdminsSid) + v8;
  v10 = RtlLengthSid(SeLocalSystemSid) + 44 + v9;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v10, 0x6C636144u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  Acl = RtlCreateAcl(PoolWithTag, v10, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(v12, 2u, 0x20003u, SeWorldSid);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v12, 2u, 0xF000Fu, SeAliasAdminsSid);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v12, 2u, 0xF000Fu, SeLocalSystemSid);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v12, 0);
          if ( Acl >= 0 )
          {
            if ( IsHostSilo
              || (ObjectAttributes.RootDirectory = 0LL,
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsPathString,
                  ObjectAttributes.Length = 48,
                  ObjectAttributes.Attributes = 592,
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                  Acl = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes),
                  Acl >= 0) )
            {
              ObjectAttributes.SecurityQualityOfService = 0LL;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsNameString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.RootDirectory = a2;
              ObjectAttributes.Attributes = 592;
              Acl = ZwCreateDirectoryObjectEx((__int64)&Handle, 983055LL, (__int64)&ObjectAttributes);
              if ( Acl >= 0 )
              {
                ZwClose(Handle);
                Handle = 0LL;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpObjectTypesNameString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = a2;
                ObjectAttributes.Attributes = 592;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( IsHostSilo )
                {
                  Acl = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
                  if ( Acl >= 0 )
                  {
                    Acl = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
                    ObpTypeDirectoryObject = Object;
                    v14 = Acl < 0;
                    goto LABEL_13;
                  }
                }
                else
                {
                  Acl = ZwCreateSymbolicLinkObject(
                          &Handle,
                          0xF0001u,
                          &ObjectAttributes,
                          (PUNICODE_STRING)&ObpObjectTypesPathString);
                  if ( Acl >= 0 )
                  {
                    v20 = 0;
                    Acl = ZwSetInformationSymbolicLink((__int64)Handle, 1LL, (__int64)&v20);
                    v14 = Acl < 0;
LABEL_13:
                    if ( !v14 )
                      Acl = ObpCreateDosDevicesDirectory(a1, a2, a3);
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
    ZwClose(Handle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  ExFreePoolWithTag(v12, 0x6C636144u);
  return Acl;
}
