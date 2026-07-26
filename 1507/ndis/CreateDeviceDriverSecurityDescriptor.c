/*
 * XREFs of CreateDeviceDriverSecurityDescriptor @ 0x1C0103544
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     AddAces @ 0x1C01037C4 (AddAces.c)
 */

NTSTATUS CreateDeviceDriverSecurityDescriptor(void *a1, BOOLEAN a2, __int64 a3, ...)
{
  NTSTATUS result; // eax
  NTSTATUS DaclSecurityDescriptor; // ebx
  PACL v6; // rdi
  unsigned int v7; // r15d
  PVOID PoolWithTag; // rsi
  ACL *v9; // r14
  BOOLEAN DaclPresent; // [rsp+68h] [rbp-29h] BYREF
  BOOLEAN SaclDefaulted; // [rsp+69h] [rbp-28h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+6Ah] [rbp-27h] BYREF
  BOOLEAN GroupDefaulted; // [rsp+6Bh] [rbp-26h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+6Ch] [rbp-25h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-21h] BYREF
  PACL Sacl; // [rsp+78h] [rbp-19h] BYREF
  ULONG SaclSize; // [rsp+80h] [rbp-11h] BYREF
  ULONG AbsoluteSecurityDescriptorSize; // [rsp+84h] [rbp-Dh] BYREF
  ULONG OwnerSize; // [rsp+88h] [rbp-9h] BYREF
  ULONG PrimaryGroupSize; // [rsp+8Ch] [rbp-5h] BYREF
  ULONG DaclSize; // [rsp+90h] [rbp-1h] BYREF
  PSID Group; // [rsp+98h] [rbp+7h] BYREF
  PSID Owner; // [rsp+A0h] [rbp+Fh] BYREF
  PACL Dacl; // [rsp+A8h] [rbp+17h] BYREF
  BOOLEAN SaclPresent; // [rsp+100h] [rbp+6Fh] BYREF
  __int64 MemoryAllocated; // [rsp+110h] [rbp+7Fh] BYREF
  va_list MemoryAllocateda; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(MemoryAllocateda, a3);
  MemoryAllocated = va_arg(va1, _QWORD);
  SaclPresent = a2;
  LOBYTE(MemoryAllocated) = 0;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  Sacl = 0LL;
  result = ObGetObjectSecurity(a1, &SecurityDescriptor, (PBOOLEAN)MemoryAllocateda);
  if ( result >= 0 )
  {
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
    if ( DaclSecurityDescriptor >= 0 && DaclPresent )
    {
      if ( !Dacl )
        return -1073741823;
      DaclSecurityDescriptor = AddAces(Dacl);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v6 = Sacl;
        if ( Sacl )
        {
          AbsoluteSecurityDescriptorSize = 0;
          DaclSize = 0;
          v7 = 7;
          Sacl = 0LL;
          SaclSize = 0;
          Owner = 0LL;
          OwnerSize = 0;
          Group = 0LL;
          PrimaryGroupSize = 0;
          SaclPresent = 0;
          SaclDefaulted = 0;
          AbsoluteSecurityDescriptorSize = v6->AclSize + 40;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, AbsoluteSecurityDescriptorSize, 0x6473444Eu);
          if ( PoolWithTag )
          {
            DaclSize = v6->AclSize;
            v9 = (ACL *)ExAllocatePoolWithTag(PagedPool, DaclSize, 0x6164444Eu);
            if ( v9 )
            {
              DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
              if ( DaclSecurityDescriptor >= 0 )
              {
                if ( Owner )
                {
                  OwnerSize = RtlLengthSid(Owner);
                  DaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &GroupDefaulted);
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    DaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                               SecurityDescriptor,
                                               &SaclPresent,
                                               &Sacl,
                                               &SaclDefaulted);
                    if ( DaclSecurityDescriptor >= 0 )
                    {
                      if ( SaclPresent )
                      {
                        v7 = 15;
                        SaclSize = Sacl->AclSize;
                      }
                      PrimaryGroupSize = RtlLengthSid(Group);
                      DaclSecurityDescriptor = RtlSelfRelativeToAbsoluteSD(
                                                 SecurityDescriptor,
                                                 PoolWithTag,
                                                 &AbsoluteSecurityDescriptorSize,
                                                 v9,
                                                 &DaclSize,
                                                 Sacl,
                                                 &SaclSize,
                                                 Owner,
                                                 &OwnerSize,
                                                 Group,
                                                 &PrimaryGroupSize);
                      if ( DaclSecurityDescriptor >= 0 )
                      {
                        DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(PoolWithTag, 1u, v6, 0);
                        if ( DaclSecurityDescriptor >= 0 )
                          DaclSecurityDescriptor = ObSetSecurityObjectByPointer(a1, v7, PoolWithTag);
                      }
                    }
                  }
                }
              }
            }
            ExFreePoolWithTag(PoolWithTag, 0);
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
          }
          ExFreePoolWithTag(v6, 0);
        }
      }
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return DaclSecurityDescriptor;
  }
  return result;
}
