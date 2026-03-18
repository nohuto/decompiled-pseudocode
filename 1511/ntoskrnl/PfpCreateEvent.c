/*
 * XREFs of PfpCreateEvent @ 0x14054149C
 * Callers:
 *     PfpScenCtxStart @ 0x140541430 (PfpScenCtxStart.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 *     PfpParametersInitialize @ 0x14076A4D8 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x14076A66C (PfSnInitializePrefetcher.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 */

__int64 __fastcall PfpCreateEvent(UNICODE_STRING *a1, EVENT_TYPE a2, PVOID *a3)
{
  NTSTATUS Acl; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ACL *PoolWithTag; // rax
  ACL *v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE EventHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v7 = RtlLengthSid(SeAliasAdminsSid);
    v8 = RtlLengthSid(SeLocalSystemSid) + 32 + v7;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x6C636144u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v10, 2u, 0x1F0003u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v10, 2u, 0x1F0003u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 656;
              ObjectAttributes.ObjectName = a1;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, a2, 0);
              if ( Acl >= 0 )
              {
                Acl = ObReferenceObjectByHandle(
                        EventHandle,
                        0x1F0003u,
                        (POBJECT_TYPE)ExEventObjectType,
                        0,
                        &Object,
                        0LL);
                *a3 = Object;
                if ( Acl >= 0 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741670;
    }
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)Acl;
}
