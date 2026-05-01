/*
 * XREFs of ?RmpLookupDefaultSystemManagedAccount@@YAJXZ @ 0x180019D9C
 * Callers:
 *     RmpInitializeDefaultAccountSid @ 0x180019D50 (RmpInitializeDefaultAccountSid.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 RmpLookupDefaultSystemManagedAccount(void)
{
  NTSTATUS v0; // ebx
  _LSA_OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  DWORD cbSid; // [rsp+60h] [rbp+10h] BYREF
  PVOID DomainInfo; // [rsp+68h] [rbp+18h] BYREF
  PVOID PolicyHandle; // [rsp+70h] [rbp+20h] BYREF

  DomainInfo = 0LL;
  PolicyHandle = 0LL;
  memset_0(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v0 = LsaLookupOpenLocalPolicy(&ObjectAttributes, 0x801u, &PolicyHandle);
  if ( v0 >= 0 )
  {
    v0 = LsaLookupGetDomainInfo(PolicyHandle, AccountDomainInformation, &DomainInfo);
    if ( v0 >= 0 )
    {
      cbSid = 68;
      v0 = !CreateWellKnownSid(
              WinLocalAccountAndAdministratorSid|WinCreatorGroupSid,
              *((PSID *)DomainInfo + 2),
              (char *)RmSvcGlobals + 2004,
              &cbSid)
         ? 0xC0000001
         : 0;
    }
  }
  if ( DomainInfo )
    LsaLookupFreeMemory(DomainInfo);
  if ( PolicyHandle )
    LsaLookupClose(PolicyHandle);
  return (unsigned int)v0;
}
