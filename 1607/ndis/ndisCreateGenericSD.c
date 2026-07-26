/*
 * XREFs of ndisCreateGenericSD @ 0x1C01035D4
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCreateGenericSD(PACL Dacl, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax

  if ( !Dacl )
    return 3221225473LL;
  v4 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v5 = v4;
  if ( v4 < 0 )
  {
    DbgPrint("RtlCreateSecurityDescriptor failed, Status %lx.\n", (unsigned int)v4);
  }
  else
  {
    v6 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      DbgPrint("RtlSetDaclSecurityDescriptor failed, Status %lx.\n", (unsigned int)v6);
    }
    else
    {
      v7 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeAliasAdminsSid, 0);
      v5 = v7;
      if ( v7 < 0 )
      {
        DbgPrint("RtlSetOwnerSecurityDescriptor failed, Status %lx.\n", (unsigned int)v7);
      }
      else
      {
        v8 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeAliasAdminsSid, 0);
        v5 = v8;
        if ( v8 < 0 )
          DbgPrint("RtlSetGroupSecurityDescriptor failed, Status %lx.\n", (unsigned int)v8);
      }
    }
  }
  return v5;
}
