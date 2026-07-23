/*
 * XREFs of MiCreateMemoryEvent @ 0x1407A45F0
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     NtCreateEvent @ 0x14041DCA0 (NtCreateEvent.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

NTSTATUS __fastcall MiCreateMemoryEvent(UNICODE_STRING *a1, PVOID *a2)
{
  NTSTATUS result; // eax
  ULONG v5; // edi
  ACL *PoolWithTag; // rax
  ACL *v7; // rbx
  NTSTATUS Acl; // edi
  ACL *v9; // rcx
  NTSTATUS v10; // eax
  HANDLE v11; // rcx
  _BYTE SecurityDescriptor[40]; // [rsp+30h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  HANDLE EventHandle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v5 = 4
       * (*((unsigned __int8 *)SeLocalSystemSid + 1)
        + *((unsigned __int8 *)SeAliasAdminsSid + 1)
        + *((unsigned __int8 *)SeWorldSid + 1)
        + *((unsigned __int8 *)SeAllAppPackagesSid + 1))
       + 88;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x6C636144u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    Acl = RtlCreateAcl(PoolWithTag, v5, 2u);
    v9 = v7;
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v7, 2u, 0x120001u, SeWorldSid);
      v9 = v7;
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v7, 2u, 0x1F0003u, SeAliasAdminsSid);
        v9 = v7;
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x1F0003u, SeLocalSystemSid);
          v9 = v7;
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x120001u, SeAllAppPackagesSid);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
              if ( Acl >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 528;
                ObjectAttributes.ObjectName = a1;
                Acl = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                ExFreePoolWithTag(v7, 0);
                if ( Acl >= 0 )
                {
                  v10 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
                  v11 = EventHandle;
                  Acl = v10;
                  *a2 = Object;
                  ObCloseHandle(v11, 0);
                }
                return Acl;
              }
            }
            v9 = v7;
          }
        }
      }
    }
    ExFreePoolWithTag(v9, 0);
    return Acl;
  }
  return result;
}
