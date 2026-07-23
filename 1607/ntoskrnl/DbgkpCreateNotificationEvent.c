/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x1407A1950
 * Callers:
 *     DbgkpInitializePhase1 @ 0x1407A18F4 (DbgkpInitializePhase1.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x14015AAF0 (ZwCreateEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1, void *a2)
{
  NTSTATUS result; // eax
  ULONG v4; // edi
  ACL *PoolWithTag; // rax
  ACL *v6; // rbx
  NTSTATUS Acl; // edi
  ACL *v8; // rcx
  _BYTE SecurityDescriptor[40]; // [rsp+38h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  HANDLE EventHandle; // [rsp+C0h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+C8h] [rbp+77h] BYREF

  EventHandle = a2;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v4 = 4
       * (*((unsigned __int8 *)SeAllAppPackagesSid + 1)
        + *((unsigned __int8 *)SeLocalSid + 1)
        + *((unsigned __int8 *)SeLocalSystemSid + 1)
        + *((unsigned __int8 *)SeWorldSid + 1))
       + 88;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v4, 0x6C636144u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    Acl = RtlCreateAcl(PoolWithTag, v4, 2u);
    v8 = v6;
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v6, 2u, 0x120001u, SeLocalSid);
      v8 = v6;
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v6, 2u, 0x120001u, SeAllAppPackagesSid);
        v8 = v6;
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v6, 2u, 0x1F0003u, SeLocalSystemSid);
          v8 = v6;
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v6, 2u, 0x120001u, SeWorldSid);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
              if ( Acl >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 528;
                ObjectAttributes.ObjectName = a1;
                Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                ExFreePoolWithTag(v6, 0);
                if ( Acl >= 0 )
                {
                  Acl = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
                  DbgkErrorPortRegisteredEvent = (PRKEVENT)Object;
                  ZwClose(EventHandle);
                }
                return Acl;
              }
            }
            v8 = v6;
          }
        }
      }
    }
    ExFreePoolWithTag(v8, 0);
    return Acl;
  }
  return result;
}
