/*
 * XREFs of ?RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001CE48
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpLookupDefaultSystemManagedAccount(struct _RM_SERVICE_GLOBALS *a1)
{
  NTSTATUS v2; // ebx
  _LSA_OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  DWORD cbSid; // [rsp+78h] [rbp+28h] BYREF
  PVOID DomainInfo; // [rsp+80h] [rbp+30h] BYREF
  PVOID PolicyHandle; // [rsp+88h] [rbp+38h] BYREF

  DomainInfo = 0LL;
  PolicyHandle = 0LL;
  memset_0(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = LsaLookupOpenLocalPolicy(&ObjectAttributes, 0x801u, &PolicyHandle);
  if ( v2 >= 0 )
  {
    v2 = LsaLookupGetDomainInfo(PolicyHandle, AccountDomainInformation, &DomainInfo);
    if ( v2 >= 0 )
    {
      cbSid = 68;
      v2 = !CreateWellKnownSid(
              WinLocalAccountAndAdministratorSid|WinCreatorGroupSid,
              *((PSID *)DomainInfo + 2),
              (char *)a1 + 3272,
              &cbSid)
         ? 0xC0000001
         : 0;
    }
  }
  if ( DomainInfo )
    LsaLookupFreeMemory(DomainInfo);
  if ( PolicyHandle )
    LsaLookupClose(PolicyHandle);
  return (unsigned int)v2;
}
